#include <iostream>
using namespace std;


int square(int x1)
{
    int res;
    cin>>x1;
    res = (x1*x1);
    cout<<res<<endl;
    return res;
   

}

int rectangle(int x1,int x2)
{
    int res;
    cin>>x1;
    cin>>x2;
    res = (x1*x2);
    cout<<res<<endl;
    
    return res;
}


int main()
{
    string figure;

    int x1,x2;

    cin>>figure;

    if (figure =="square")
    {
       square(x1);
    }
    if (figure =="rectangle")
    {
       rectangle(x1,x2);
    }
    
    else
    {
        return 0;
    }
    
    return 0;
}    
       