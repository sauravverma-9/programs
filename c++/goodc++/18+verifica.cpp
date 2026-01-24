#include<iostream>
using namespace std;

int main() {
 
    //freopen("input1.txt","r",stdin);
    //freopen("output1.txt","w",stdout);
    
    int age;
    cout << "Enter your age :" ;   
    cin >> age;
    
    if(age >= 18){
        cout<<"you are eligible for voting !";
    }
    else if(age<18){
        cout << "you are not eligible for xham !";
          
    }

    return 0;
}