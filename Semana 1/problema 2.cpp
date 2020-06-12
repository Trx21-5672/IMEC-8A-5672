#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int con=0;
int n,x,i,k,j,l;
int e[100];

int main()
{
	for ( i = 0; i <n - 3; i++) 
{ 
    for ( j = i + 1; j <=n - 2; j++) 
    {           
        for ( k = j + 1; k <=n - 1; k++) 
        {
            for ( l = k + 1; l < n; l++) 
	if (e[i] + e[j] + e[k] + e[l] == x)
            if(con ==0 ){
                cout << i+1<<", " << j+1  
                     << ", " << k+1 << ", " << l+1<<endl;
                     con+=+1;
			}
		}
	}  
} 
	int n=sizeof(e) / sizeof(e[0]);
{
	cin>>n>>x;
	for(i=1;i<=n;i++)
	{
		cin>>e[i];
}
}
	if(con==0)
	{
		cout<<"\n imposible";
	}
	return 0;
}