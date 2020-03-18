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
int* mayor(int c1, int c2, int c3)
{
    int num_ord[3];
    if((c1>c2)&&(c1>c3))
    {
        num_ord[0]=c1;
        num_ord[1]=c2;
        num_ord[2]=c3;
        
    }

    else if((c2>c1)&&(c2>c3))
    {
        num_ord[0]=c2;
        num_ord[1]=c1;
        num_ord[2]=c3;
         
        return num_ord;
    }

     else if((c3>c1)&&(c3>c2))
    {
        num_ord[0]=c3;
        num_ord[1]=c1;
        num_ord[2]=c2;
    }
     else
     {
        num_ord[0]=1;
        num_ord[1]=1;
        num_ord[2]=1;
     }
    return num_ord;
        
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
            int *x = mayor(c1,c2,c3);
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
