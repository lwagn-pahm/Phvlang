#include <stdio.h>
#include <stdlib.h>
int main()
{
    double DTB;
    printf("Nhap diem trung binh:");
    scanf("%lf",&DTB);
    if(DTB>=0 && DTB<=10){
        if(DTB<5)
            printf("Yeu");
        else if(DTB<7)
            printf("Trung binh");
        else if(DTB<8)
            printf("Kha");
        else if(DTB<9)
            printf("Gioi");
        else
            printf("Xuat sac");
    }
    else printf("error");
    return 0;

}
