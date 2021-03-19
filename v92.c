#include <stdio.h>

int main()
{
    int seen[10] = {0}, n, q, r;
    printf("Enter number : ");
    scanf("%d", &n);
    q = n;
    while (q != 0)
    {
        r = q % 10;
        if (seen[r] == 1)
        {
            printf("digits repeated");
            return 0;
        }
        seen[r]++;
        q /= 10;
    }
    printf("digits not repeated");
    return 0;
}