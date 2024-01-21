#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
for(int i=1; i<=n; i++){
    for(int k=1; k<=n+1-i; k++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        
        cout<< -j+i+1;
        }
        
    for(int m=1; m<=i-1; m++){
        cout<<m+1;
        }
        cout<<endl;
   }

    return 0;
}

