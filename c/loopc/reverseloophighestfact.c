# include<stdio.h>
int main(){

    int x,hf;
    printf("Enter x : ");
    scanf("%d",&x);
//          i=i-1  also true just neeche
    for(int i=x/2;i>=1;i--){
        if(x%i==0){
        hf=i;
        break; //causes it give only one factor highest
        } 
    }
    printf("%d if highest factor",hf);
}
     