#include <stdio.h>
int main(){
    long long int N  , M ;
    scanf("%lld %lld", &N , &M);
    long long int L , K ;
    scanf("%lld %lld",&L , &K);
    long long int C ;
    scanf("%lld",&C);
    long long int arr[N][M] , i = 0 , j = 0;
    for ( i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%lld",&arr[i][j]);
        }
        
    }
    long long int sum_LKC = L*K*C;
    long long int sum_arr = 0 ;
    for ( i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {   
           sum_arr += arr[i][j];
        }
        
    }

    long long int sum = sum_arr+sum_LKC , temp = 0 ;
    for ( i = 1; i < 10000000; i++)
    {
        if (C * i >= sum)
        {
            printf("%lld",i);
            break;
        }
        
    }
    
    
    
}