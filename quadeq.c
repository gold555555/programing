#include <stdio.h>
#include <limits.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int a, b, c, d;
    int bestA = INT_MAX, bestB = INT_MAX;
    int ansA, ansB, ansC, ansD;

    for (a = 1; a <= A; a++) {        // a > 0
        if (A % a != 0) continue;
        c = A / a;                    // c > 0

        for (b = -100; b <= 100; b++) {
            for (d = -100; d <= 100; d++) {
                
                if (b * d != C) continue;        // C = b*d
                if (a * d + b * c != B) continue; // B = ad + bc

                // valid solution
                if (a < bestA || (a == bestA && b < bestB)) {
                    bestA = a;
                    bestB = b;
                    ansA = a;
                    ansB = b;
                    ansC = c;
                    ansD = d;
                }
            }
        }
    }

    if (bestA == INT_MAX)
        printf("No Solution");
    else
        printf("%d %d %d %d", ansA, ansB, ansC, ansD);

    return 0;
}
