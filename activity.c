#include <stdio.h>

long long nCr(int n, int r){
    long long sum = 1, base = 1;
    long long result;
    int i;

    for (i = n; i > r; i--)
        sum *= i;

    for (i = 1; i <= n-r; i++)
        base *= i;

    result = sum / base;
    return result;
}

int main(){
    int N;
    scanf("%d",&N);

    long long result = nCr(N, N/2);

    if (N == 1) 
        printf("%lld", result + 1);
    else if (N % 2 == 1)
    {
        printf("%lld", result*2);
    }else if(N % 2 == 0){
        printf("%lld",result);
    }
    

    return 0;
}
