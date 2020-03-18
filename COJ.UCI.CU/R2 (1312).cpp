#include <iostream>

using namespace std;

int R2;
int R1;
int S;

void getres()
{
    cin>>R1>>S;
    R2=((S*2)-(R1));
}

int main()
{
    getres();
    cout<<R2<<endl;
 
}