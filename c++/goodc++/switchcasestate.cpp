#include<iostream>
using namespace std;

int main(){

   // freopen("input.txt","r",stdin);
   // freopen("ouytput.txt","w",stdout);

    int day;
    cout <<"Enter nth day :";
    cin >> day;

    switch(day){

        case 1:
        cout<<"MONDAY";
        break;

        case 2:
        cout<<"TUESDAY";
        break;

        case 3:
        cout<<"WEDNESDAY";
        break;

        case 4:
        cout<<"THURSDATY";
        break;

        case 5:
        cout<<"FRIDAY";
        break;

        case 6:
        cout<<"SATURDAY";
        break;

        case 7:
        cout<<"SUNDAY";
        break;

        default:
        cout << "Invalid";
        break;
    }
return 0;

}