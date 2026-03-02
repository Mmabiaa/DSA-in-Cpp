#include <iostream>
using namespace std;

// GCD function using iterations
int GCD(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    //declare variables a and b
    int a, b;

    //take input from the user
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    //calculate GCD
    int results = GCD(a, b);
    cout<<"GCD ("<<a<<", "<<b<<") = "<<results;
    return 0;
}
