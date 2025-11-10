#include <stdio.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);//error in running fix it
    for(int x=3 ; x<=2*n+1 ; x=x+2){
        printf("%d\n",x);
    }

}