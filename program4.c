#include <stdio.h>
int main()
{

    int I, sum = 0, sub = 0, multiplication = 0;
    float division, A, B;
    printf("ENTER THE VALUE OF A AND B\n ");
    scanf("%f%f", &A, &B);
    printf("PRESS 1 FOR ADD\n");
    printf("PRESS 2 FOR SUBSTRACTION\n");
    printf("PRESS 3 FOR MULTIPLICATION\n");
    printf("PRESS 4 FOR DIVISION\n");
    scanf("%d", &I);
    switch (I)
    {
    case 1:
       sum = A + B;
        printf("%d", sum);
        break;
    
    case 2:
    
        sub = A - B;
        printf("%d", sub);
        break;
    
    case 3:
    
        multiplication = A * B;
        printf("%d", multiplication);
        break;
    
    case 4:
    
        division = A / B;
        printf("%.2f", division);
        break;
    
    default:
    
        break;
    
    }
    return 0;
}