#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci series
int fibonacci(int n){
    if (n == 0 || n==1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

//main function
int main(){
    int n; // declare varible n.

    // Accept user inputs
    cout<<"Enter the value of n: ";
    cin>>n;

    // Print the Fibonacci series
    cout<<"Fibonacci series of "<<n<<" is: ";
    for (int i = 0; i < n; i++){
        cout<<fibonacci(i)<< endl;
    }
    return 0;
}