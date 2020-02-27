#include <iostream>
using namespace std;
int main(){
int Sp=0;
int Si=0;

for(int i=1; i<=200; i++){

	if (i%2==0){
	Sp+=i;
	}
	else{
	Si+=i;
	}
}

cout<<"La suma de los pares es: "<<Sp<<endl;
cout<<"La suma de los impares es: "<<Si<<endl;

return 0;

}