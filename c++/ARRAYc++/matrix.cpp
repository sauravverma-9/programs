#include<bits/stdc++.h>
using namespace std;

int main(){

    //freopen("input.txt","r",stdin);

    int arr[2][2];
    cout << "Enter matrix values :";
    cin >> arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];

    arr[1][1] += 3;
    cout << arr[1][1];
    return 0;
}