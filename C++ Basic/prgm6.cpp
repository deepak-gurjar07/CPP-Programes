// Arrays in C++

#include <iostream>
using namespace std;

int main()
{
    // 1D Array
    cout << "This is an array of size 4: " << endl;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element of " << i << "th index." << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "The element at " << i << "th index is " << arr[i] << endl;
    }

    // 2D Array
    //  cout<<"This is a 2D array of size 2X3: "<<endl;
    //  int arr2d[2][3];
    //  for (int i=0; i < 2; i++)
    //  {
    //      for(int j=0; j<3;j++){

    //     cout << "Enter the element of (" <<i<<","<<j<< ") index." << endl;
    //     cin >> arr2d[i][j];
    //     }
    // }

    // for (int i=0; i < 2; i++)
    // {
    //     for(int j=0; j<3;j++){

    //     cout << "The element of (" <<i<<","<<j<< ") index is: "<<arr2d[i][j] << endl;

    //     }
    // }

    return 0;
}