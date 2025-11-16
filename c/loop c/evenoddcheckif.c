#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%2==0) printf("EVEN");

    if(x%2!=0) printf("ODD");

    return 0;
}