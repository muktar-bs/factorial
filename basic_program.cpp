#include <iostream>

using namespace std;

int main(){
    cout<<"Hello World";
}

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

unsigned long long fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


unsigned long long sumUpTo(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumUpTo(n - 1);
}


