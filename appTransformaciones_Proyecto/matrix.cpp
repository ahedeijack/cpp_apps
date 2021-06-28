#include "matrix.h"
#include <math.h>
#include <assert.h>

Matrix::Matrix(int nr,int nc, float valor)
{
  ren = nr;
  col = nc;
  Mat = new float*[ren];
  assert(Mat); //VERIFICA SI  NEW REGRESA NULL, DE SER ASI ABORTA EL PROG.
  for(int i = 0; i < ren; i++)
  {
      Mat[i] = new float[col];
      assert(Mat[i]);
  }
  //EN C++ SE DEBEN DE INICIALIZAR LAS VARIABLES, INCLUIDOS LOS ARREGLOS
  for(int i = 0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = valor;
}

Matrix::Matrix(float nr,float nc, float **m)
{
  ren = nr;
  col = nc;
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
      Mat[i] = new float[col];
      assert(Mat[i]);
  }

  for(int i = 0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = m[i][j];
}

//CONSTRUCTOR DE COPIA

Matrix::Matrix(Matrix &m)
{
   this->ren=m.numRen();
   col=m.numCol();
   Mat =new float*[ren];
   for(int i = 0; i < ren; i++)
  {
     Mat[i] = new float[col];
     assert(Mat[i]);
  }
   for(int i=0; i<ren; i++)
      for( int j=0; j<col; j++)
         Mat[i][j]=m.GET(i,j);
}

void Matrix::Inicializa(int R, int C)
{
   col=C;
   ren=R;
   Mat=new float *[ren];
   for(int i=0; i<ren; i++)
      Mat[i]=new float[col];
   for(int i=0; i<ren; i++)
      for(int j=0; j<col; j++)
         Mat[i][j]=0;
}

Matrix &Matrix::operator*=(Matrix &mat2)
{
   Matrix aux;
   aux.Inicializa(this->ren, mat2.numCol());


   for(int i=0; i<ren; i++)
   {
      for(int j=0; j<mat2.numCol(); j++)
      {
         float suma=0;
        // Mat[i][j]=0;
         for(int k=0; k<col; k++)
         {
           suma+=floor(Mat[i][k]*mat2.GET(k,j)+0.5);
           aux.SET(i,j,suma); //SOBRECARGAR EL OPERADOR []??
         }
         //aux.SET(i,j,suma);
      }
   }
   asignar(aux);
   return *this;
}

//MULTRIPLICAR POR UN ESCALAR
Matrix Matrix::operator*(float val)
{
   Matrix temp;
   temp.Inicializa(ren,col);
   for(int i=0; i<ren;i++)
      for(int j=0; j<col; j++)
         temp.SET(i,j,Mat[i][j]* val);
   return temp;
}


Matrix &Matrix::operator*(const Matrix &m1)
{
  //assert((ren == m1.ren) && (col == m1.col));
   Matrix * result = new Matrix(ren,col,0);
   assert(result);
   for(int i=0; i < ren; i++)
     for(int j = 0;  j < col; j++)
                       //DEBE SER EL NUMERO DE COLUMNAS
                     //REN SOLO SI ES CUADRADA EJ: 3 x 3
       for(int k = 0; k < col; k++)
            //result->Mat[i][j]= result->Mat[i][j] + Mat[i][k] * m1.Mat[k][j];
           result->Mat[i][j] += Mat[i][k] * m1.Mat[k][j];


   return *result;
}

Matrix &Matrix::operator=(Matrix &m)
{
//eliminar el tamaño de la matriz destino
  for(int i= 0; i<ren;i++ )
     //Se borran las columnas por renglones de la matriz
       delete [] Mat[i];
  //Se borra el arreglo de punteros
  delete []Mat;
//Asignar los nuevos datos de la matriz que llego
  ren=m.numRen();
  col = m.numCol();
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
     Mat[i] = new float[col];
     assert(Mat[i]);
  }
  for( int i =0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = m.Mat[i][j];

  return *this;
}


Matrix &Matrix::asignar(Matrix m)
{
   for(int i=0;i<m.numRen();i++)
       for(int j=0;j<m.numCol();j++)
                Mat[i][j]=m.GET(i,j);
   return *this;
}

//DESTRUCTOR
Matrix::~Matrix()
{
  //Se libera la memoria
  for(int i= 0; i<ren;i++ )
     //Se borran los renglones de la matriz
       delete [] Mat[i];
  //Se borra el arreglo de punteros
  delete []Mat;

}

float Matrix::Det3X3()
{
    float d1, d2, det;
    d1 = this->GET(0, 0) * this->GET(1,1) * this->GET(2, 2) +
         this->GET(0, 1) * this->GET(1,2) * this->GET(2, 0) +
         this->GET(0, 2) * this->GET(1,0) * this->GET(2, 1);

    d2 = this->GET(2, 0) * this->GET(1,1) * this->GET(0, 2) +
         this->GET(2, 1) * this->GET(1,2) * this->GET(0, 0) +
         this->GET(2, 2) * this->GET(1,0) * this->GET(0, 1);
    det = d1 - d2;
    return det;
}

Matrix &Matrix::Identidad()
{
  for(int i=0; i < ren; i++)
    for( int j = 0; j < col; j++)
      if( i == j)
         Mat[i][i]= 1;
      else
         Mat[i][j]= 0;
  return *this;
}

Matrix &Matrix::Transpuesta()
{
    Matrix m2(*this);
    for(int i=0; i < ren; i++)
        for( int j = 0; j < col; j++)
            if( i != j)
                Mat[i][j]= m2.GET(j,i);
    return *this;
}

//--------------------------TRANSFORMACIONES-----------------------------
Matrix &Matrix::translacion(Matrix f, Matrix id, int tx, int ty){
    id.Identidad();
    id.SET(2,0,tx);
    id.SET(2,1,ty);

    f*= id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::escalacion(Matrix f, Matrix id, float sx, float sy){
    id.Identidad();
    id.SET(0,0,sx);
    id.SET(1,1,sy);

    f*= id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::escalacionPuntoFijo(Matrix f, Matrix r, float pfx, float pfy, float sx, float sy)
{
    int op1 = (-pfx * sx) + pfx;
    int op2 = (-pfy * sy) + pfy;
    r.Identidad();
    r.SET(0,0,sx);
    r.SET(1,1,sy);
    r.SET(2,0, op1);
    r.SET(2,1, op2);

    f*= r;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::rotacion(Matrix f, Matrix r, double grad){

    float rad = grad * M_PI /180;

    r.Identidad();
    r.SET(0,0, cos(rad));
    r.SET(0,1, sin(rad));
    r.SET(1,0, -sin(rad));
    r.SET(1,1, cos(rad));

    f*= r;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::rotacionPuntoFijo(Matrix f, Matrix r, double grad, double xr, double yr)
{
    float rad = grad * M_PI /180;
    double op1 = xr*(1-cos(rad)) + yr*sin(rad);
    double op2 = yr*(1-cos(rad)) -xr*sin(rad);

    r.Identidad();
    r.SET(0,0, cos(rad));
    r.SET(0,1, sin(rad));
    r.SET(1,0, -sin(rad));
    r.SET(1,1, cos(rad));
    r.SET(2, 0, op1);
    r.SET(2, 1, op2);


    f*= r;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::reflexion2DEjeX(Matrix f, Matrix id)
{
    id.Identidad();
    id.SET(1,1, -1);

    f*= id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::reflexion2DEjeY(Matrix f, Matrix id)
{
    id.Identidad();
    id.SET(0,0, -1);

    f*= id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::reflexion2DCoordenado(Matrix f, Matrix id)
{
    id.Identidad();
    id.SET(0,0, -1);
    id.SET(1,1, -1);

    f*= id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::reflexion2DRectaYX(Matrix f, Matrix id)
{
    id.Identidad();
    id.SET(0,0, 0);
    id.SET(1,1, 0);
    id.SET(1,0, 1);
    id.SET(0,1, 1);

    f*= id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::reflexion2DRectaYnX(Matrix f, Matrix id)
{
    id.Identidad();
    id.SET(0,0, 0);
    id.SET(1,1, 0);
    id.SET(1,0, -1);
    id.SET(0,1, -1);

    f*= id;
    this->asignar(f);
    return *this;
}

