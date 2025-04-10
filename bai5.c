#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c;
    printf("Nhap he so a=");
    scanf("%lf",&a);
    printf("Nhap he so b=");
    scanf("%lf",&b);
    printf("Nhap he so c=");
    scanf("%lf",&c);
    double d=b*b-4*a*c;
    double x=-b/(2*a);
    double x1=(sqrt(d)-b)/(a+a);
    double x2=(-sqrt(d)-b)/(a+a);
    if(a!=0)
    {
        if(d<0) printf("phuong trinh vo nghiem");
        else if(d==0) printf("phuong trinh co nghiem kep x=%lf",x);
        else if(d>0) printf("phuong trinh co 2 nghiem phan biet\nx1=%lf\nx2=%lf",x1,x2);
    }
    else if(a==0)
    {
        if(b==0&&c!=0) printf("phuong trinh vo nghiem");
        else if(b!=0) printf("phuong trinh co nghiem don x=%f", -b/c);
        else if(b==0&&c==0) printf("phuong trinh vo so nghiem");
    }
    return 0;
}
