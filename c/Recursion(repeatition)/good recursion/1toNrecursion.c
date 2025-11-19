# include <stdio.h>

void me(int n,int x){
    if(x>n) return 0;
    printf("%d\n",x);
    me(n,x+1); //call
}

int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    me(n,1); 
// HERE n IS ONLY USED FOR COMPAIRING x IS PRINTED
    return 0;
}
