// Pointers in C++

#include <iostream>
using namespace std;

int main()
{
    int a = 69;
    int *ptr;
    ptr = &a;
    cout << "We took input as :" << endl
         << "int a = 69;" << endl
         << "int * ptr;" << endl
         << "ptr = &a;"<<endl;
    cout<<"Hence the values are: "<<endl;
    cout<< "The value of a is: " << a << endl;
    cout << "The value of ptr is: " << ptr << endl;
    cout << "The value of &a is: " << &a << endl;
    cout << "The value of *ptr is: " << *ptr << endl;
    return 0;
}
