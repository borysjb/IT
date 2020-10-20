struct NAH {};

matrix add (matrix A, matrix B)
{
  if(A.n==B.n&&A.m==B.m) {
    matrix out;
    out.create(A.n,A.m);
    for(int i=0;i<out.n;i++) {
      for(int j=0;j<out.m;j++) {
        out.a[i][j]=A.a[i][j]+B.a[i][j];
      }
    }
    return out;
  } else {
    throw NAH();
  }
}

matrix scalar (matrix A,int B)
{
  matrix out;
  out.create(A.n,A.m);
  for(int i=0;i<A.n;i++) {
    for(int j=0;j<A.m;j++) {
      out.a[i][j]=A.a[i][j]*B;
    }
  }
  return out;
}

matrix multiply (matrix A,matrix B)
{

  if(A.m==B.n) {
      matrix out;
      out.create(A.n,B.m);
      for(int i=0;i<A.n;i++) {
        for(int j=0;j<B.m;j++) {
          for(int k=0;k<A.m;k++) {
            out.a[i][j]+=A.a[k][j]*B.a[i][k];
          }
        }
      }
      return out;
  } else {
    throw NAH();
  }

}
