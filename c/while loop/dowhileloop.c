# include <stdio.h>
int main()
/* {
    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
} */
{
    int i=12; // int i; give error
    do{
        printf("%d",i);
        i++; // i=i+1
    }
    while(i<=10);
}
