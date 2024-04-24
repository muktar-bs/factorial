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

    // this line is added in feature-branch to commit and then cherry-picking from main branch will be applied
    // this line is added after committing the changes by adding the above line of comment
}


unsigned long long sumUpTo(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumUpTo(n - 1);
}