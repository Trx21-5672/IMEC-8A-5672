#include <iostream>

using namespace std;

int res=0;

void getres(int n1, int n2)
{
   
   
    cin>>n1;
    cin>>n2;
    res=n1+n2;

}

int main()
{
    int n1;
    int n2;
    getres(n1,n2);
    cout<<res<<endl;
}