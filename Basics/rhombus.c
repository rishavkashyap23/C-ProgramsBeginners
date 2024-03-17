#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,h,ar,p;
    printf("Enter values :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&h);
    ar=(a+b)*h/2;
    p=a+b+c+d;
    printf("Area=%d \n",ar);
    printf("perimeter= %d",p);
    return 0;
}