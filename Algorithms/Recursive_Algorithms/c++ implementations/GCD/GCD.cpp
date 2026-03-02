#include <iostream>
using namespace std;

// GCD function using recursion
int GCD(int a, int b){
    if(b==0){
        return a;
    }else{
        return GCD(b, a%b);
    }
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
