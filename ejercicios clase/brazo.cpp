#include<iostream>
#include<math.h>
using namespace std;

int calcular(int m, int T){
int A,teta,w;
w=m*9.81;
teta=acos(w/T);
A=T*sin(teta);
return A;
}

int main(){
int T,m,A; 
cout<<"Ingrese la tensión en el cable"<<endl;
cin>>T;
cout<<"Ingrese la masa"<<endl;
cin>>m;
A=calcular(m,T);
cout<<"La fuerza requerida en A es: "<<A<<" N"<<endl;
return 0;
}