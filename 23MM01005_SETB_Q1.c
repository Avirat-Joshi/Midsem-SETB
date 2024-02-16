#include <stdio.h>
int main()
{
    float v, s, r, h;
    printf("Enter the radius of cylinder ");
    scanf("%f", &r);
    printf("Enter the height of cylinder ");
    scanf("%f", &h);
    v = 3.14 * r * r * h;
    s = 2 * 3.14 * r * h;
    printf("The Volume of cyinder is %.2f", v);
    printf("\nThe Surface area of cyinder is %0.2f", s);
    return 0;
}