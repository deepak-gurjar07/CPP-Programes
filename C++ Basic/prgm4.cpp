// loops in c++

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number for printing the table: ";
    cin >> num;
    // int i=1;

    // while loops

    // while(i<=10){
    //     cout<<num<<"X"<<i<<"="<<num*i<<endl;
    //     i++;
    // }

    // do while loop

    // do
    // {
    //     cout<<num<<"X"<<i<<"="<<num*i<<endl;
    //     i=i+1;
    //     /* code */
    // } while (i<=10);

    // for loop
    for (int i=1; i <= 10; i++)
    {
        cout << num << "X" << i << "=" << num * i << endl;
    }

    return 0; 
}
