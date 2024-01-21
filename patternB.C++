#include<iostream>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=6;j++){
            if(((i==1 || i==5)||i==9)||(j==1 || j==5))
            {
                cout<<"*";
            }else{
                cout<<"  ";
            }
        }
        printf("\n");
    }
    return 0;
}