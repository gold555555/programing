#include <stdio.h>

int x = 15 ;
int main() {
    printf("X out main  x is static: %d\n",x);
    //int x ;
    printf("X in main  x is auto : %d\n",x);
    {//scope
        int x = 26 ;
        printf("X in scope : %d\n",x);
    }
    printf("x = %d",x); 
}
