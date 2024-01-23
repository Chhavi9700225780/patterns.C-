#include <stdio.h>
int isyes(int a[] , int n , int key){
    int s=0; 
    int e = n-1;
    int mid= (s+ (e-s)/2);
    while(s<=e){
        if(a[mid]==key){
            return mid;
        }
        else if(key < a[mid]){
            e = mid -1;
        }
        else{
            s= mid +1;
        }
        mid = ( s+(e-s)/2);
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
    int search = isyes(a , n, key);
    if(search){
    printf("Key %d is present at index %d\n" , key , search);
    
    }
    else{
        printf("Not present");
    }
    return 0;}
