#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        printf("The greater number is %d",X);
    }
    else
    {
        printf("The greater number is %d",Y);
    }
    return 0;
}