#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("nhap canh thu nhat: ");
    scanf("%lf",&a);
    printf("nhap canh thu hai: ");
    scanf("%lf",&b);
    printf("nhap canh thu ba: ");
    scanf("%lf",&c);
    if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
    {
        if (a==b==c)
        {
            printf("Day la tam giac vuong");
        }
        else if(a==b || a==c || b==c)
        {
            printf("Day la tam giac deu");
        }
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            printf("Day la tam giac vuong");
    printf("Chu vi tam giac la: %.2lf\n",a+b+c);
    double d=(a+b+c)/2;
    printf("Dien tich tam giac la: %.2lf",sqrt(d*(d-a)*(d-b)*(d-c)));
    }
    else printf("Day khong phai tam giac");
    return 0;
}
