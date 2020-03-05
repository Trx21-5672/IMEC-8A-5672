#include <iostream>
using namespace std;
int a,b,c,d,e,f,g,h;
void getRed(int ip[], int mask[])
{

    for(int i=0;i<4;i++){
        cout<<(ip[i]&mask[i])<<".";
    }
}

void getRes(int ip[], int mask[], int ip2[])
{
    int a = ip[0]&mask[0];
    int b = ip[1]&mask[1];
    int c = ip[2]&mask[2];
    int d = ip[3]&mask[3];
    int e = ip2[0]&mask[0];
    int f = ip2[1]&mask[1];
    int g = ip2[2]&mask[2];
    int h = ip2[3]&mask[3];

    if((a==e)&&(b==f)&&(c==g)&&(d==h))
    cout<<"la direccion IP pertenece a la red"<<endl;
    else
    cout<<"la direccion IP no pertenece a la red"<<endl;


    

}
int main(int argc, char*argv[]){
    int ip[4];
    int mask[4];
    int ip2[4];

    if(argc=13){
        
        ip[0] = stoi (argv[1]);
        ip[1] = stoi (argv[2]);
        ip[2] = stoi (argv[3]);
        ip[3] = stoi (argv[4]);

        mask[0] = stoi (argv[5]);
        mask[1] = stoi (argv[6]);
        mask[2] = stoi (argv[7]);
        mask[3] = stoi (argv[8]);

        ip2[0] = stoi (argv[9]);
        ip2[1] = stoi (argv[10]);
        ip2[2] = stoi (argv[11]);
        ip2[3] = stoi (argv[12]);

    cout<<ip[0]<<"."<<ip[1]<<"."<<ip[2]<<"."<<ip[3]<<"."<<endl;
    cout<<mask[0]<<"."<<mask[1]<<"."<<mask[2]<<"."<<mask[3]<<"."<<endl;
    getRed(ip,mask);
    cout<<endl;
    cout<<a<<e<<endl;
    getRes(ip,mask,ip2);
    
    
    
    }

    
return 0;

}