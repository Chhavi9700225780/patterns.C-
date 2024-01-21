#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch;
for(int i=1; i<=n; i++){
    for(int k=1; k<=n+1-i; k++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        ch = 'A'+j-1;
        cout<<ch;
        }
    for(int m=i-1; m>=1; m--){
        ch = 'A' + m -1;
        cout<<ch;
        }
        cout<<endl;
   }

    return 0;
}
