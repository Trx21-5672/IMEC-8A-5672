#include <iostream>
using namespace std;

int main()
{
    int t;
    int x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        int y=(x%4);
        if (y==0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}