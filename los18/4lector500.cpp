#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
        srand(time(NULL));
        int lim_inf =-250;
        int lim_sup =250;
	int y=0;
for(int i=0;i<500;i++){
        int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
        cout<<valor<<endl;
	if(valor>0){
	y+=1;
	}


}
     int valor=rand()%100;
cout<<"Cantidad de positivos: "<<y<<endl;

return 0;
}