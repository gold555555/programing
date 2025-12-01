#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{char text[50];
    FILE *infile = fopen("testphukhaw.txt", "r");
    if (!infile)
    {
        printf("Error: cannot open file\n");
        return 1;
    }else{
    /*fgets(text, 50, stdin);
    fputs(text, infile);*/
    rewind(infile);
    fgets(text, 50 , infile);
    fprintf(stdout,"%s",text);

    fclose(infile);
    /*FILE *infile = fopen("testphukhaw.txt" , "w");

    fclose(infile);*/  
}
}