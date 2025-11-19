# include <stdio.h>

void oddeven(int x){
    if(x % 2 == 0) printf("%d is even",x);
    else printf("%d is odd");
}

int main(){
    int x;
    printf("Enter x : ");
    scanf("%d",&x);

    oddeven(x);
    
    return 0;
}