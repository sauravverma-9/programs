#include <stdio.h>
// to find min. value inside array
int main(){
    int arr[6] = {5,1,8,99,20,98,2};

    int n = sizeof(arr)/4;

    int mn = arr[0];
    
    for(int i=n;i=0;i--){
        if(mn < arr[i]) printf("%d",mn);
    }
}
