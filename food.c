#include <stdio.h>

int n, m;
int forbid[10];
int used[10];
int perm[10];

int is_forbid(int x)
{
    for (int i = 1; i <= m; i++)
        if (forbid[i] == x)
            return 1;
    return 0;
}

void backtrack(int idx)
{

    if (idx > n)
    {
        for (int i = 1; i <= n; i++)
            printf("%d ", perm[i]);
        printf("\n");
        return;
    }

    for (int x = 1; x <= n; x++)
    {

        if (!used[x])
        {
            if (idx == 1 && is_forbid(x))
                continue;

            used[x] = 1;
            perm[idx] = x;

            backtrack(idx + 1);
            used[x] = 0;
        }
    }
}

int main()
{
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
        scanf("%d", &forbid[i]);
    backtrack(1);

    return 0;
}
