# include <stdio.h>
 
int main(){

    int arr[8] = {2,45,45,66,67,65,654,45634,34};   // OR      int arr[8];
                                                //             arr[0]=2;     ...illy all
    printf("%d\n",arr[3]); // OUTPUT 66
    printf("%d\n",arr[0]);// OUTPUT 2
    printf("%d\n",arr[1]);// OUTPUT 45
// updating 1st index
    arr[1] = 54;
    printf("%d",arr[1]);// OUTPUT 54
    
    return 0;
}