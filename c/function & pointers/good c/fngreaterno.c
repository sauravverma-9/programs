# include <stdio.h>

int greater(int x, int y){
    if(x>y) return x;
    else return y;
}

int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    int b;
    printf("Enter b : ");
    scanf("%d",&b);

    int g=greater(a,b);
    printf("%d is greater",g);

    
    
    return 0;
}