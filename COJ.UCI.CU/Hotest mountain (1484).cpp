#include <iostream>

using namespace std;
int m;
float t;
int res;

void gethot()
{
    for(int i=0;i<m;i++)
    {
        cin>>t;
        if (t >= res)
        res=i+1;
    }

}

int main()
{
    cin>>m;
    res=0;
    gethot();
    cout<<res<<endl;
}