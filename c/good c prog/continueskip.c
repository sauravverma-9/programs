# include <stdio.h>
int main(){
    // continue skips that part to which you applied it

    for(int i=1;i<=100;i++){
        if(i%2!=0) continue;
        printf("%d\n",i);
    }
}