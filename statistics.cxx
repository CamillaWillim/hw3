#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------
void rando(int N, double* p);
void calculator(int N, double* p,double& m, double& v);

int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   srand(time(NULL));
   rando(N,p);
   calculator(N,p,mean,var);
   
   
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}

void rando(int N, double* x){  
   for(int i=0;i<N;i++)
   x[i] =(double) rand()/RAND_MAX;
}

void calculator(int N, double* x,double& mean, double& var){
  mean = 0;
  var = 0;
  
  for(int i=0; i<N; i++)
    mean+= x[i]/N;
    
  for(int i=0; i<N; i++)
    var += pow((x[i]-mean),2)/N;
  
}
  