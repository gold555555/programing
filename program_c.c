#include <stdio.h>
#include <string.h>
    int main(){
        char text[100]; int length ;
        fgets(text,100,stdin);
        text[strcspn(text,"\n")]='\0';
        length = strlen(text);
        int x =(length-1)*2;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < x ; j++)
            {
               printf(" ");
               
            }
            if (i==0)
            {
                printf("%c",text[i]);
            }else{
                for (int j = i; j >= 0; j--)
                {
                    if (j != 0)
                    {
                        printf("%c ",text[j]);
                    }else{
                        printf("%c",text[0]);
                        for (int j = 1; j <= i; j++)
                        {
                            printf(" %c",text[j]);
                        }
                        
                    }
                    
                }
                
            }
            
            
            printf("\n");
            x=x-2;
        }
        
    }