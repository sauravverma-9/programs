# include<bits/stdc++.h>
using namespace std;

void printName(char name[]){
    cout << "Hello " << name <<"\n" << "How can i assist you !";

}

int main(){

   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    char name[50];
    cout << "Enter your name :";
    cin >> name;

    printName(name);

    return 0;
}