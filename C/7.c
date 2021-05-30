

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int x, int y)
{
    int AND_op = 0;
    int XOR_op = 0;
    int OR_op = 0;

    int i, j=0;

    for (i = 1; i <= x; i++)
    {
        for (j = i + 1; j <= x; j++)
        {
            if (((i & j) > AND_op) && ((i & j) < y))
            {
                AND_op = i & j;
            }
            if (((i ^ j) > XOR_op) && ((i ^ j) < y))
            {
                XOR_op = i ^ j;
            }
            if (((i | j) > OR_op) && ((i | j) < y))
            {
                OR_op = i | j;
            }
        }
    }

    printf("%d\n%d\n%d\n", AND_op, OR_op, XOR_op);
};

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
