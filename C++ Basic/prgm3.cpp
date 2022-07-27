//switch case in c++

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    switch (age)
    {
    case 12:
        cout<<"You are 12.";
        break;
    case 18:
        cout<<"You are 18.";
        break;
    default:
        break;
    }
    return 0;
}