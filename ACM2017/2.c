#include <math.h>
#include <stdio.h>
#define pi 3.1415926
int main()
{
    int groups;
    scanf("%d", &groups);
    for (int i = 0; i < groups; i++)
    {
        double angle, height, a, b;
        scanf("%lf %lf %lf %lf", &angle, &height, &a, &b);
        double k1 = -tan(angle / 180 * pi);
        double b1 = height;
        double k2 = -1 / k1;
        double b2 = -k2 * b;
        double mx = (b2 - b1) / (k1 - k2);
        double my = k1 * mx + b1;
        double x = mx * 2 - b;
        double y = my * 2;
        double result = sqrt((y - a) * (y - a) + x * x);
        printf("%.2lf\n", result);
    }
    return 0;
}
