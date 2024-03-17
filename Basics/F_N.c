#include<stdio.h>

int FN(int Fn);

int main()
{
    int n,i;
    printf("Enter nth term :-");
    scanf("%d",&n);
    printf("%d",FN(n));
}

int FN(int Fn)
{
    if(Fn==1)
    {
        return 0;
    }
    else if(Fn==2)
    {
        return 1;
    }
    else
    {
        return FN(Fn-1)+FN(Fn-2);
    }
}