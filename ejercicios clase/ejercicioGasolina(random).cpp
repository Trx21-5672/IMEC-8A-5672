#include <iostream>
//random seed
#include <cstdlib>
#include <ctime>
using namespace std;
const int x1=12;
const int x2=10;
const int precio=19;
int costo_final=0;
int m = 0;

int main(){

    srand(time(NULL));
    int lim_inf = 50;
    int lim_sup = 150;

    for (int i=0;i<2000;i++)
    {   
        int velocidad = lim_inf + rand()%(lim_sup + 1 - lim_inf);
        m++;
        if (velocidad>100)
            costo_final=costo_final+(x1*precio);
        else
            costo_final=costo_final+(x2*precio);
        cout<<"el costo del combustible en el minuto "<<m<<" es "<<costo_final<<endl;
    }
    cout<<"el costo final del combustible es "<<costo_final<<endl;
    return 0;
}