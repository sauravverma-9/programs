#include <stdio.h>
int main(){

    int x;
    printf("Enter a numer: ");
    scanf("&d",&x);

    if(x>99 && x<1000) printf("THREE DIGIT NUMBER");

    else printf("NOT THREE DIGIT NUMBER");
    return 0;
}