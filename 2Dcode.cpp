#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm,errorcode;
    int i;
    initgraph(&gd,&gm," ");
    int c = 0;
    printf("\n choose 1- Translation \n 2-Scaling \n 3-Rotation \nExit(4)");
    printf("\nEnter your Choice: ");
    scanf("%d", &c);
    if(c == 1)
        {
            int x2,y2,x1,y1,x3,y3,x4,y4,x,y;
            int x22,y22,x11,y11,x33,y33,x44,y44;
            printf("\nInput the co-ordinates of square: ");
            scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
            int arr[] = {x1,y1,x2,y2,x3,y3,x4,y4,x1,y1};
            drawpoly(5,arr);
            printf("\nInput translation co-ordinates: ");
            scanf("%d%d",&x,&y);
            x11 = x1+x;
            y11 = y1+y;
            x22 = x2+x;
            y22 = y2+y;
            x33 = x3+x;
            y33 = y3+y;
            x44 = x4+x;
            y44 = y4+y;
            int arr2[] = {x11,y11,x22,y22,x33,y33,x44,y44,x11,y11};
            drawpoly(5,arr2);
        }
        else if(c == 2)
        {
            int x2,y2,x1,y1,x3,y3,x,y;
            int x22,y22,x11,y11,x33,y33;
            printf("\nEnter the coordinates of triangle: ");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            int arr[] = {x1,y1,x2,y2,x3,y3,x1,y1};
            drawpoly(4,arr);
            printf("\nEnter scaling co-ordinates: ");
            scanf("%d%d",&x,&y);
            x11=(x1*x);
            y11=(y1*y);
            x22=(x2*x);
            y22=(y2*y);
            x33=(x3*x);
            y33=(y3*y);
            int arr1[] = {x11,y11,x22,y22,x33,y33,x11,y11};
            drawpoly(4,arr1);
        }
         else if(c == 3)
        {
            int x3,y3,x2,y2,x1,y1,x,y;
        printf(" Enter the co-ordinates: ");
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        int tri1[8] = {x1,y1,x2,y2,x3,y3,x1,y1};
        drawpoly(4,tri1);
        double angle;
        x = x2;
        y = y2;
        printf(" Enter rotation angle: ");
        scanf("%lf", &angle);
        angle = (angle*3.14)/180;
        double c = cos(angle);
        double s = sin(angle);
        int a1,b1,a2,b2,a3,b3;
        a1=x+(x1-x)*c-(y1-y)*s;
        b1=y+(x1-x)*s+(y1-y)*c;
        a2=x+(x2-x)*c-(y2-y)*s;
        b2=y+(x2-x)*s+(y2-y)*c;
        a3=x+(x3-x)*c-(y3-y)*s;
        b3=y+(x3-x)*s+(y3-y)*c;
        int tri2[8] = {a1,b1,a2,b2,a3,b3,a1,b1};
        drawpoly(4,tri2);
        }
        else
            printf("INVALID CHOICE");
    getch();
    closegraph();
    return 0;
}
