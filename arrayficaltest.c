#include <stdio.h>
int abc(int arr[],int n){
    int i ;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int m(int x){
  return  x=56;
    
}
int main(){
    int n  = 5;
    int x ;
    scanf("%d",&x);
    //m(x);
    int arr[5];
    abc(arr,n);
    int i ;
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d] : %d\n",i,arr[i]);
    }
   //printf("X : %d",m(x));
}