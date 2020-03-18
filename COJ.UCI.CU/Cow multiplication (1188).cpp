#include <iostream>
#include <cstring>

using namespace std;
char cow1[10];
char cow2[10];
long cow3[10];
long cow4[10];
long res=0;

void getcow1()
{
    for(int i=0;i<sizeof(cow1);i++)
    {
      if ((cow1[i]-48)>0)  
      cow3[i]=(cow1[i]-48); 
      else
      cow3[i]=0;
    }
}

void getcow2()
{
    for(int i=0;i<sizeof(cow2);i++)
    {
      if ((cow2[i]-48)>0)  
      cow4[i]=(cow2[i]-48); 
      else
      cow4[i]=0;
    }
}

void getres()
{
    res=0;
    for(int i=0;i<9;i++)
    {   
        if (cow3[i]>0)
            res=res+((cow3[i]*cow4[0])+
                    (cow3[i]*cow4[1])+
                    (cow3[i]*cow4[2])+
                    (cow3[i]*cow4[3])+
                    (cow3[i]*cow4[4])+
                    (cow3[i]*cow4[5])+
                    (cow3[i]*cow4[6])+
                    (cow3[i]*cow4[7])+
                    (cow3[i]*cow4[8])+
                    (cow3[i]*cow4[9]));

    }
    

}



int main()
{

  cin>>cow1;
  cin>>cow2;
  getcow1();
  getcow2();
  getres();
   
  cout<<res<<endl;
}


