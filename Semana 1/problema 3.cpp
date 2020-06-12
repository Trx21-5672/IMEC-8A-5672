#include <iostream>
#include <string>
using namespace std;

long* obt_a(long n){
long* a=new long[n];
for(int i=0;i<n;i++)
cin>>a[i];
return a;
}

long* obt_b(int m){
long* b=new long[m];
for(int i=0;i<m;i++)
cin>>b[i];
return b;
}

int obt_r(long* a,long* b,long n,int m,long k){
int r=0;
for(int i=0;i<m;i++){
for(long j=0;j<n;j++){
if((a[j]<=(b[i]+k))&&(a[j]>=(b[i]-k))){
r+=1;b[i]=0;}
}}

return r;

}

int main(){

int m;
long n,k;
cin>>n>>m>>k;
long* a=new long[n];
long* b=new long[m];
if(n>=1&&m<=200000&&(0<=k<=1000000000)){
a=obt_a(n);
b=obt_b(m);
int r=obt_r(a,b,n,m,k);
cout<<r<<endl;
}
return 0;

}