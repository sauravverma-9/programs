# include <stdio.h>

void me(int n){
    if(n==0) return 0;
    printf("%d\n",n);
    me(n-1);
}

int main(){
    int n;
    printf("Enter x :");
    scanf("%d",&n);
    me(n);

    return 0;
}
