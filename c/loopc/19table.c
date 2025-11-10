#include <stdio.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    //for(int x=19 ; x<=n ; x=x+19){
       // printf("%d\n",x);}// here n is the max no. lies in this table of 19
        
       int a=19;
        
       for(int x=1;x<=n;x++){ printf("%d\n",a);
       a=a+19;} 
} 
    
