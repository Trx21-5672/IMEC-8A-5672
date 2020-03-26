#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, char *argv[]){

int x=0;
int y=0;
int z=0;
char dato[12];


if(argc!=13){
cout<<"Error falta parametros"<<endl;
return 1;
}else{
for(int d=1;d<13;d++){
dato[d-1]=argv[d][0];

}
}

for(int d=0;d<=11;d++){

if(dato[d]=='A'){

if(x==1){
if(z==0){
z=1;
cout<<"a";}else if(z==1){z=0;cout<<"b";}
}
else{if(x==0){x=1;cout<<"a";}}

     if(x==1){x=0;}else if(x==0){x=1;}

}else if(dato[d]=='B'){

if(y==0){
if(z==0){
z=1;
cout<<"a";}else if(z==1){z=0;cout<<"b";}
}
else{if(y==1){y=1;cout<<"b";}}

      if(y==1){y=0;}else if(y==0){y=1;}
}
}


cout<<"   x= "<<x<<", y= "<<y<<", z= "<<z<<endl;


return 0;

}