#include <iostream>
using namespace std;

int a,b,c;
int x,y,z;
string ord;



void getor()
{
    if(x<y && y<z)
    {
        a=x;
        b=y;
        c=z;
       
    }

    else if(x<z && z<y)
    {
        a=x;
        b=z;
        c=y;
    }
         

    else if(z<x && x<y)
    {
        a=z;
        b=x;
        c=y;
        
    }

     else if(z<y && y<x)
    {
        a=z;
        b=y;
        c=x;
        
    }

     else if(y<x && x<z)
    {
        a=y;
        b=x;
        c=z;
         
    }

     else if(y<z && z<x)
    {
        a=y;
        b=z;
        c=x;
         
    }

    else if(x==y && x<z)
    {
        a=x;
        b=y;
        c=z;
         
    }
      else if(x==y && x>z)
    {
        a=z;
        b=y;
        c=x;
         
    }

    else if(x==z && x<y)
    {
        a=x;
        b=z;
        c=y;
    }    
        
      else if(x==z && x>y)
    {
        a=y;
        b=z;
        c=x;
        
    }

      else if(y==z && z<x)
    {
        a=y;
        b=z;
        c=x;
         
    }
      else if(y==z && z>x)
    {
        a=x;
        b=z;
        c=y;
         
    }

    else if(x==z && z==y)
    {
        a=x;
        b=z;
        c=y;
        
    }


}


void getout()
{
    if (ord == "ABC")
    {
         cout<<a<<" "<<b<<" "<<c<<endl;
    }
    
    else if (ord == "ACB")
    {
        cout<<a<<" "<<c<<" "<<b<<endl;
    }

    else if (ord == "BAC")
    {
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
    else if (ord == "BCA")
    {
        cout<<b<<" "<<c<<" "<<a<<endl;
    }
    else if (ord == "CAB")
    {
         cout<<c<<" "<<a<<" "<<b<<endl;
    }
    else if (ord == "CBA")
    {
        cout<<c<<" "<<b<<" "<<a<<endl;
    }

}

int main()
{
    cin>>x>>y>>z;
    cin>>ord;
   
    getor();
    getout();
}