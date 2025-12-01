#include <stdio.h>
#include <string.h>
struct gold
{
    int id;
    int year ;
    char type ;
    char name[50];
};
void printgold(struct gold g){
    printf("%d %d %c %s",g.id,g.year,g.type,g.name);
}
int main(){
    struct gold star[5];
    
    star[0].id = 1;
    star[0].year = 18;
    star[0].type = 'A';
    strcpy(star[0].name,"Worrasat Jaraskautth");
    
    printgold(star[0]);
    
}