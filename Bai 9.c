
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nam;
    int thang;
    int ngay;
    printf("nam:");
    scanf("%d",&nam);
    printf("nhap thang:");
    scanf("%d",&thang);
    if(nam<=0)
        printf("Error");
    else if(nam>0)
        if(thang<=0 || thang>12)
            printf("Error");
        else if(thang>0)
            switch(thang)
            {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                ngay=31;
                break;
            case 2:
                if(nam%4==0 && nam%100!=0)
                    ngay=29;
                else ngay=28;
                break;
            case 4: case 6: case 9: case 11:
                ngay=30;
                break;
            }
    printf("Thang %d nam %d co %d ngay",thang,nam,ngay);
    return 0;
}
