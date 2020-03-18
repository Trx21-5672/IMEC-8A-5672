#include <iostream>
using namespace std;
int T;
int NK;
int cnds;
int res[25];

void getcandies()
{
    for(int i=0;i<T;i++)
    {

        for(int j=0;j<NK;j++)
        {
            cin>>cnds;
            res[j] = res[j]+cnds;
        }
        if(res[i]%NK==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}


int main()
{
    cin>>T;
    cin>>NK;
    getcandies();
}    