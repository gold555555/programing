#include <stdio.h>
    int main(){
        int n=0  ,temp = 0,temp_check=0;
        scanf("%d",&n); 
        int i=0,v=0,x=0,l=0,c=0     ,    count, j=1,z=0,y,fuck=0, check = 0,temp_count=0;
       
        for(count = 1 ; count<=n ; count++ ){
           // printf("count = %d \n",count);
           j=10;
            for ( z = 1; z <=3; z++)
            {//หลัก
                temp_check = count/j;
                
                if (temp_check == 0)
                {
                    temp_check = z ;
                    //printf("temp_check : %d for count : %d\n",temp_check,count);
                    break;
                }
                
                j=j*10;
            }
            
           if(count<400){
                j=10;temp_count=count;
                for (check  = 1; check <= temp_check; check++)
                {
                    temp = temp_count%j;
                    temp_count = temp_count/j;
                    //printf("temp = %d : count : %d \n",temp,count);
                            if (check ==1)
                            {
                        switch (temp)
                                {
                        case 1: i++ ; break;
                        case 2: i=i+2 ;break;
                        case 3: i=i+3 ;break;
                        case 4: i++ ; v++; break;
                        case 5: v++; break;
                        case 6: i++; v++; break;
                        case 7 : v++ ; i=i+2; break;
                        case 8 : v++ ; i=i+3 ; break;
                        case 9 : i++ ; x++; break;
                        default:
                            break;
                                }
                        }else if (check == 2)
                        {
                            switch (temp)
                                {
                        case 1: x++ ; break;
                        case 2: x=x+2 ;break;
                        case 3: x=x+3 ;break;
                        case 4: x++ ; l++; break;
                        case 5: l++; break;
                        case 6: x++; l++; break;
                        case 7 : l++ ; x=x+2; break;
                        case 8 : l++ ; x=x+3 ; break;
                        case 9 : c++ ; x++; break;
                        default:
                            break;
                        }
                        
                    }else if (check == 3)
                    {
                        switch (temp)
                        {
                        case 1:c++ ;break;
                        case 2:c=c+2;break;
                        case 3:c=c+3;break;
                        default:
                            break;
                        }
                    }else{
                    
                        break;
                    }
                   
                  
                   
                }
             //printf("count = %d :i = %d : v = %d : x = %d : l = %d : c = %d \n",count,i, v,x,l,c);

        }

        
    }
        printf("%d %d %d %d %d",i, v,x,l,c);
}