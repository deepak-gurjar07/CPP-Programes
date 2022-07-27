// conditional statement ion C++
 
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    
    if (age>250||age<1){
        cout<<"Invalid age."<<endl;
    }
    else if(age>=18){
        cout<<"You are eligible to vote."<<endl;
    }
    else{
        cout<<"You are not eligible to vote."<<endl;
    }
    return 0;
}