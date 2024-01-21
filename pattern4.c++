#include<iostream>
using namespace std;

int main()
{
    int n;
    int s;
    cin>>n;
    
    
for(int i=1; i<=n; i++){
    for(int k=1; k<=n+1-i; k++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        
        cout<<j+i-1;
        }
        s= 2*(i-1);
    for(int m=1; m<=i-1; m++){
        
        cout<<s--;
        }
        cout<<endl;
         }

    return 0;
}
