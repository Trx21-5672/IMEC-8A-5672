#include <iostream>
using namespace std;


int main()
{
    int N;
    for(;;)
    {
        cin>>N;
        if (N!=0)
        {
            int x = (N%11);
            if (x==0)
            {
                cout<<N<<" is a multiple of 11"<<endl;
            }
            else 
            {
                cout<<N<<" is not a multiple of 11"<<endl;
            }
        }
        else
        {
            return 0;
        }
        
    }
    
}