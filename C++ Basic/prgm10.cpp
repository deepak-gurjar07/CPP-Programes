#include<iostream>
using namespace std;

int volume(int a){
    return a*a*a;
}

int volume(int l,int b, int h){
    return l*b*h;
}

int volume(int r, int h){
    return 3.14*r*r*h;
}

int volume_s(int r){
    return 3.14*r*r*r;
}
int main(){
    cout<<"--Program to find the volume of a 3D shape.--"<<endl;
    cout<<"---------------------------------------------"<<endl;
    int choice;
    cout<<"Enter Your Choice: "<<endl;
    cout<<"1.Cube"<<endl;
    cout<<"2.Cuboid"<<endl;
    cout<<"3.Cylender"<<endl;
    cout<<"4.Sphere"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        /* code */
        int a;
        cout<<"Enter any side of cube: ";
        cin>>a;
        cout<<"The volume of cube is "<<volume(a)<<endl;
        break;
    case 3:
        /* code */
        int r,h;
        cout<<"Enter the dimension of cylender (r,h --> space seperated): ";
        cin>>r>>h;
        cout<<"The volume of cube is "<<volume(r,h)<<endl;
        break;
    case 2:
        /* code */
        int l,b,ht;
        cout<<"Enter the dimension of cuboid (l,b,h --> space seperated): ";
        cin>>l>>b>>ht;
        cout<<"The volume of cube is "<<volume(l,b,ht)<<endl;
        break;
    case 4:
        /* code */
        int rs;
        cout<<"Enter the radius of sphere: ";
        cin>>rs;
        cout<<"The volume of cube is "<<volume_s(rs)<<endl;
        break;
        
    default:
        cout<<"Invalid Choice."<<endl;
        break;
    }   
    return 0;
}