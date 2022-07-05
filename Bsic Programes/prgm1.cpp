#include<iostream>
using namespace std;

int main(){
// universal code for any table
    int a;
    cout<<"enter the number and you'll get the table:";
    cin>>a;

    // using for loop

    // for(int i=1; i<=10; i++) 
    // {
    //     cout<<a<<"x"<<i<<"="<<a*i<<endl;
    // }

    // using while loop
    // int i=1; 
    // while (i<=10)
    // {
    //     cout<<a<<"x"<<i<<"="<<a*i<<endl;
    //     i++;
    // }
    
    // using do-while loop

    int i=1;
    do{
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}
