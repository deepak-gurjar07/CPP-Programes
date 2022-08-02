#include<iostream>
#include<string>
using namespace std;

class main{
    int a;
    string b;
    double c;
    public:
        void set_a(){
            cout<<"Enter the integer: "<<endl;
            cin>>a;
        }
        void set_b(){
            cout<<"Enter the string: "<<endl;
            cin>>b;
        }
        void set_c(){
            cout<<"Enter the flaot number: "<<endl;
            cin>>c;

        }
        void get_a(){
            cout<<"The value of a is: "<<a;
        }
        void get_b(){
            cout<<"The value of b is: "<<b;
        }
        void get_c(){
            cout<<"The value of c is: "<<c;
        }

};

class child: public main{
    bool d;
    public:
        void set_d(){
            cout<<"Enter the boolean: "<<endl;
            cin>>d;
        }
        void get_d(){
            cout<<"The value of d is: "<<d<<endl;
        } 
};
int main(){
    child num;
    num.set_d();
    num.get_d();
    return 0;
}
