#include <stdio.h>
int main()
{   
    char ch;// $ is not character   
    printf("Enter the operator: ");
    scanf("%c", &ch);

    int x;
    printf("Enter first number: ");
    scanf("%d",&x);

    int y;
    printf("Enter second number: ");
    scanf("%d",&y);

    
    //switch statement

    switch (ch) {
        case '+':
        printf("%d",x+y);
        case '-':
        printf("%d",x-y);
        case '*':
        printf("%d",x*y);
        case '/':
        printf("%d",x/y);
        }
    return 0;
}