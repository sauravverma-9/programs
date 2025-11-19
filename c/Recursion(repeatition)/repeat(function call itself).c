# include <stdio.h>

void greet(){
    printf("GOOD MORNNG\n");

    greet(); // function calling itself

}

int main(){
    greet();

    return 0;
}