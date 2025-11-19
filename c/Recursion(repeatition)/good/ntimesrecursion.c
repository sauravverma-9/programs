# include <stdio.h>

void greet(int n){
    if(n==0) return;
    printf("GOOD MORNNG\n");

    greet(n-1); // function calling itself

}

int main(){
    greet(3);

    return 0;
}