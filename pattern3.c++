#include <iostream>

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
        
        cout<<j;
        }
    for(int m=i-1; m>=1; m--){
        
        cout<<m;
        }
        cout<<endl;
   }
   return 0;
}
