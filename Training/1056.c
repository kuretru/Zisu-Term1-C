#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[100][20];
    int count, sum[100] = {0}, total = 0;
    scanf("%d\n", &count);
    for (int i = 0; i < count; i++)
    {
        int pj, py, lw;
        char gb, xb;
        scanf("%s %d %d %c %c %d", name[i], &pj, &py, &gb, &xb, &lw);
        gb = toupper(gb);
        xb = toupper(xb);
        sum[i] = 0;
        if (pj > 80 && lw > 0)
            sum[i] += 8000;
        if (pj > 85 && py > 80)
            sum[i] += 4000;
        if (pj > 90)
            sum[i] += 2000;
        if (pj > 85 && xb == 'Y')
            sum[i] += 1000;
        if (py > 80 && gb == 'Y')
            sum[i] += 850;
        total += sum[i];
    }
    int max = 0;
    for (int i = 1; i < count; i++)
        if (sum[i] > sum[max])
            max = i;
    printf("%s\n%d\n%d", name[max], sum[max], total);
    return 0;
}
