#include <stdio.h>
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);

   // if(x % 3 == 0 && x % 5 == 0) 
    if(x % 3 == 0 || x % 5 == 0)
    printf("number is divisible by 3 or 5 both");

    else printf("number not divisible by 3 or 5 both");
  // $ is not character

}