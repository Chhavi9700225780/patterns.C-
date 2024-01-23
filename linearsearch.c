#include <stdio.h>
int isyes(int a[] , int n , int key){
    for(int i=0; i<=n; i++){
        if(key == a[i]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n, key;
    printf("Enter array size and key : \n" );
    scanf("%d %d" , &n , &key);
    int a[50];
    printf("Enter the array : \n");
    for(int i=0; i<n; i++){
        printf("a[%d]= " , i+1);
        scanf("%d" , &a[i]);
        printf("\n");
          }
    
    int find = isyes(a , n , key);
    if(find){
        printf("Item is present at index \n"  );
    }
    else{
        printf("not present");
    }

    return 0;
}
