#include<iostream>
using namespace std;

int op(int x)
{
	int y=x/2;
return y;
}

int oim(int x)
{
	int y=(x*3)+1;
return y;
}

int sel(int x)
{
	if(x%2==0){
		x=op(x);
		cout<<x<<" ";}
	else{
		x=oim(x);
		cout<<x<<" ";}
return x;
}

int main()
{
	int x;
cin>>x;
	if(x>=1&&x<=1000000){
		cout<<x<<" ";
		while(x!=1)
		x=sel(x);}
	else
		return 0;
}