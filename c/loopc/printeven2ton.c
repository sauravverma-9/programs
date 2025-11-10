#include <stdio.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);//error in running fix it
   // for(int x=1 ; x<=n ; x++){
   //     if(x % 2 == 0) printf("%d\n",x);
  //  }
    for(int x=2;x<=n;x=x+2) printf("%d\n",x);
    
}