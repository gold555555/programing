#include <stdio.h>
void arr(int n[5]){
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n[i]);
    }
        
}
void reverse(int n[5]){
    for (int i = 4; i >=0; i--)
    {
        printf("%d ",n[i]);
}
}
    int main (){
       int n[5];
       arr(n);
       reverse(n);
    }