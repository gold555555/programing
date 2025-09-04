#include <stdio.h>
#include <math.h>
    int main(){
        int n , po_sum=0,ne_sum=0;
        double sum = 0;
         scanf("%d",&n);
        int x[n+1] , y[n+1];
         
            for (int i = 0; i < n; i++)
            {
                scanf("%d %d",&x[i],&y[i]);
            }
        
        x[n] = x[0];
        y[n] = y[0];
            
            for (int i = 0; i < n; i++)
            {
                po_sum += x[i]*y[i+1];
                ne_sum += y[i]*x[i+1];
            }
          //  printf("%d -- %d",po_sum,ne_sum);

              sum = fabs((double)(po_sum - ne_sum)) / 2.0;

            printf("%.3f",sum);
        
            

            

    }