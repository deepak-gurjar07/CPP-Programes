#include <iostream>
using namespace std;

int main()
{

    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        
        if ((a<b && c<a) || (a<c && b<a)){
            cout<<a<<endl;
        }
        else if ((a<b && b<c) || (c<b && b<a)){
            cout <<b<<endl;
        }
        else{
            cout <<c<<endl;
        }
    }
}
