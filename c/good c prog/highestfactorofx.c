#include <stdio.h>
int main()
{
    int x;
    printf("ENTER x : ");
    scanf("%d",&x);

    int hf;
    
    for(int i=1;i<x;i++){
        if(x%i==0){ hf = i;}
    } //is true
        printf("HIGHEST FACTOR OF GIVEN NUMBER IS : %d",hf);
        return 0;
} 