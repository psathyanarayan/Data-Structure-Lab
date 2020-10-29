#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};
int main()
{
    struct poly a[50], b[50], c[50], d[50];
    int deg1, deg2, k = 0, l = 0, m = 0, i;

    printf("Enter the heigest degree of poly1 --> ");
    scanf("%d", &deg1);
    printf("Enter the heigest degree of poly2 --> ");
    scanf("%d", &deg2);

    //poly1 reading
    for (i = 0; i <= deg1; i++)
    {
        printf("Enter the coefficeint of x^%d of poly1 ", i);
        scanf("%d", &a[i].coeff);
        a[k++].exp = i;
    }

    //poly2 reading
    for (i = 0; i <= deg2; i++)
    {
        printf("Enter the coefficeint of x^%d of poly2 ", i);
        scanf("%d", &b[i].coeff);
        b[l++].exp = i;
    }

    //poly1 + poly2
    if (deg1 > deg2)
    {
        for (i = 0; i <= deg2; i++)
        {
            c[m].coeff = a[i].coeff + b[i].coeff;
            c[m].exp = a[i].exp;
            m++;
        }
        for (i = deg2 + 1; i <= deg1; i++)
        {
            c[m].coeff = a[i].coeff;
            c[m].exp = a[i].exp;
            m++;
        }
       
    }
    else
    {
        for (i = 0; i <= deg1; i++)
        {
            c[m].coeff = a[i].coeff + b[i].coeff;
            c[m].exp = b[i].exp;
            m++;
        }
        for (i = deg1 + 1; i <= deg2; i++)
        {
            c[m].coeff = b[i].coeff;
            c[m].exp = b[i].exp;
            m++;
        }
        for (i = 0; i < deg2; i++)
        {
            printf("%d", a[i].coeff);
            printf("x^%d ", a[i].exp);
        }
    }

     for (i = 0; i <= deg1; i++)
        {
            printf("%d", c[i].coeff);
            printf("x^%d ", c[i].exp);
        }

    return 0;
}