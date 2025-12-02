#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float area(int a_0 , int a_1 , int b_0 , int b_1 , int c_0 , int c_1){
    int sumplus = a_0*b_1 + b_0*c_1+c_0*a_1;
    int summinus = -(a_0*c_1)-(c_0*b_1)-(b_0*a_1);
    float result = (float) sumplus+summinus;
    result = abs(result);
    result = result/2.0;
    return result ;
}
int main()
{
    int N, sumplus = 0, summinus = 0 ;
    float result = 0 , max = -2e9;
    scanf("%d", &N);
    int arr[N][2], i = 0, j = 0 , z = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for ( i = 0; i < N-2; i++)
    {
        for ( j = i+1; j < N-1; j++)
        {
            for ( z = i+2; z < N; z++)
            {
                result = area(arr[i][0],arr[i][1], arr[j][0], arr[j][1],arr[z][0], arr[z][1]);
                    if (result > max)
                    {
                        max = result;
                    }
                    
            }
            
        }
        
    }
    printf("%.3f",max);
    

}