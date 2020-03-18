#include <iostream>
#include <math.h>
using namespace std;

/*unsigned long long pot(int N)
{
    unsigned long long pw=2;
    if (N>1)
    {
        for(int i=1;i<N;i++)
        {
            pw=(pw*2);
            cout<<i<<"    "<<pw<<endl;
        }
    }
    else if (N==0)
    {
        pw=1;
    }    

return pw;
}

int main()
{
    int N;
    cin>>N;
    unsigned long long x = pot(N);
    cout<<x<<endl;
}
SE QUEDO EN LA POTENCIA 62 SIN POSIBILIDAD DE LLEGAR A MAS xd
*/

int main()
{
    int pot;
    cin>>pot;
    cout<<pow(2,pot)<<endl;
}
