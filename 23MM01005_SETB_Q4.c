#include <stdio.h>
int main()
{
    static int check_composite[1000];
    check_composite[2] = 1;
    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                check_composite[i]++;
            }
        }
    }
    int counter = 0;
    printf("Enter number to be checked: ");
    int n;
    scanf("%d", &n);
    int a, b;
    a = 1;
    while (a <= n / 2)
    {
        b = n - a;
        if (check_composite[a] > 1 && check_composite[b] > 1)
        {
            counter++;
            printf("\n%d  %d", a, b);
        }
        a++;
    }
    if(counter==0)
        printf("Cannot be expressed as sum of two composite numbers");
    return 0;
}