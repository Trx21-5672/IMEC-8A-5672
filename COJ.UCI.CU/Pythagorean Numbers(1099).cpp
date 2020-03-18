#include <iostream>

using namespace std;
int c1,c2,c3;
int co,ca,h;
int sco,sca,sh;

void sqr()
{
    sco=(co*co);
    sca=(ca*ca);
    sh=(h*h); 
}
void mayor()
{
    if((c1>c2)&&(c1>c3))
    {
        h=c1;
        co=c2;
        ca=c3;
    }

    else if((c2>c1)&&(c2>c3))
    {
         h=c2;
        co=c1;
        ca=c3;
    }

     else if((c3>c1)&&(c3>c2))
    {
         h=c3;
        co=c1;
        ca=c2;
    }
     else
     {
         h=1;
        ca=1;
        co=1;
     }
        
        
}
void wrng()
{
   
}
int main()
{
    for(;;)
    {   
    
        cin>>c1;
        if (c1>0)
        {
            cin>>c2>>c3;
            mayor();
            sqr();
            if (sca+sco==sh)
            cout<<"right"<<endl;
            else 
            cout<<"wrong"<<endl;
        }
        else
        {
            return 1;
        }
        
    }
}
