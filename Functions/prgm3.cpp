#include<iostream>
using namespace std;

int func1(int array[], int length){
    int sum = 0;
    int product =1;
    for (int i=0; i<length; i++){
        sum= sum+array[i];
    }
    for(int i=0; i<length; i++ ){
        product *= array[i]; 
    }
}
int main(){
    int arr[] = {3,5,6};
    cout<<func1(arr,3);
    return 0;
}
