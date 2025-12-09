#include <stdio.h>
#include <string.h>
int main()
{
    int N , count = 0;
    scanf("%d", &N);
    char text[N][100], temp[100];
    getchar();
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        fgets(text[i], 100, stdin);
    }
    for (i = 0; i < N; i++)
    {
        text[i][strcspn(text[i], "\n")] = '\0';
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (strcmp(text[j], text[j + 1]) > 0 )
            {
                strcpy(temp, text[j]);
                strcpy(text[j], text[j + 1]);
                strcpy(text[j + 1], temp);
            }

        }
    }

    for (i = 0; i < N-1; i++)
    {
        if (strcmp(text[i], text[i + 1]) == 0 )
        {

            for (j = i; j < N -1; j++)
            {
                strcpy(text[j] , text[j+1]);
            }
            N--;
            count++;
            i--;
        }
    }
    //printf("count : %d\n",count);
    //N=N-count ;
    //printf("N : %d\n",N);
    printf(".............................\n");
    for (i = 0; i < N; i++)
    {
        printf("%s\n",text[i]);
    }
}