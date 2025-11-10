#include <stdio.h>
int main()
{
    int x;
    printf("enter the first number: ");
    scanf("%d",&x);

    int y;
    printf("enter the second number: ");
    scanf("%d",&y);

    int z;
    printf("enter the third number: ");
    scanf("%d",&z);

    if(x>y && x>z) printf("%d is greatest",x);

    if(y>z && y>x) printf("%d is greatest",y);

    if(z>y && z>x) printf("%d is greatest",z);

}




