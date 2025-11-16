# include<stdio.h>
int main()
{
    int x;
    printf("Enter x : ");
    scanf("%d",&x);

    int check = 1;// check replace with flag & 1 relace with true

    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            check = 0;// 0 replace with false
            break;
        }
    
    }
    if(x==1) printf("%d is neither prime nor composite",x);
    else if(check==1) printf("%d is Prime",x);
    else printf("%d is Composite",x);
}