#include <stdio.h>
int main()
{
    int cp,loss;
    printf("cost price: ");
    scanf("%d",&cp);

    int sp;
    printf("selling price: ");
    scanf("%d",&sp);

    if(cp == sp) printf("NEITHER PROFIT NOR LOSS");

    if(cp>sp){
        loss = cp-sp;
        printf("loss is &d,loss");
    }

    if(sp>cp) printf("profit is %d",sp-cp);

    return 0;

}