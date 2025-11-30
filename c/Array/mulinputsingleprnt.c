# include <stdio.h>
 
int main(){

    int x[8] = {2,45,45,66,67,65,654,45634,34};

    //for(int a=2;a<=8;a++)

    //{

      //  printf("%d\n",x[a]);
    //}

    int n = sizeof(x)/sizeof(x[0]);

    for(int a=2;a<n;a++) 

    {

        printf("%d\n",x[a]);
    }

    return 0;
}