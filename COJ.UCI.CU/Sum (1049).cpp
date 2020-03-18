#include <iostream>
using namespace std;

int num;
int res;

void getres()
{
   do
   {
    res=res+num;
    num--; 
   } 
   while (num>0);
   
}

int main()
{
    cin>>num;
    getres();
    cout<<res<<endl;
    
}