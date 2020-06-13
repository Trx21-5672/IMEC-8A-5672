#include <bits/stdc++.h> 
using namespace std; 
  


void EncontrarCuatroElementos(int arr[], int n, int X) 
{ 
    
    unordered_map<int, pair<int, int> > mp; 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            mp[arr[i] + arr[j]] = { i, j }; 
  
   
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            int sum = arr[i] + arr[j]; 
  
            // Si X - sum está presente en la tabla 
            if (mp.find(X - sum) != mp.end()) { 
  
                pair<int, int> p = mp[X - sum]; 
                if (p.first != i && p.first != j 
                    && p.second != i && p.second != j) { 
                    cout << arr[i] << ", "
                         << arr[j] << ", "
                         << arr[p.first] << ", "
                         << arr[p.second]; 
                    return; 
                } 
            } 
        } 
    } 
} 

int main() 
{   int X,m,z;
    cout<<"\nElementos en el arreglo y la suma requerida: ";
    cin>>m>>X;
    int arr[m]; 
   
    cout<<"\nEscribir los elementos del arreglo: ";
    
    for(int z=1;z<=m;z++)
	{
		cin>>arr[z];
		
    }
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    EncontrarCuatroElementos(arr, n, X); 
    return 0; 
}
