#include <iostream>
using namespace std;

int moneyRecieved(int currentMoney, float factor = 1.08)
{
    return currentMoney * factor;
}

int main()
{
    int money;
    int choice;
    string occpsn;
    cout << "Enter the number corresponding to your occupation: " << endl;
    cout << "1.Government Employee." << endl;
    cout << "2.Private Employee." << endl;
    cout << "3.Bussinessmen." << endl;
    cout << "4.Self Employed." << endl;
    cout << "5.Other." << endl;
    cin >> choice;
    if (choice == 5)
    {
        cout << "Enter the occupatiopn: ";
        cin >> occpsn;
    }
    cout << "Enter the amount of money you want to invest in INR: ";
    cin >> money;
    switch (choice)
    {
    case 1:
        cout << "If you invest " << money << "Rs. You will get " << moneyRecieved(money, 1.1) << "Rs after one year." << endl;
        break;
    case 2:
        cout << "If you invest " << money << "Rs. You will get " << moneyRecieved(money, 1.09) << "Rs after one year." << endl;
        break;
    case 3:
        cout << "If you invest " << money << "Rs. You will get " << moneyRecieved(money, 1.07) << "Rs after one year." << endl;
        break;
    case 4:
        cout << "If you invest " << money << "Rs. You will get " << moneyRecieved(money, 1.06) << "Rs after one year." << endl;
        break;
    case 5:
        cout << "If you invest " << money << "Rs. You will get " << moneyRecieved(money, 1.05) << "Rs after one year." << endl;
        break;

    default:
        break;
    }
    return 0;
}
