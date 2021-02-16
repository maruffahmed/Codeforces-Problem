#include <iostream>
using namespace std;

long long int factorial(int n){
    if(n > 0){
        return factorial(n - 1) * n;
    }
    return 1;
}

int main(){
    long long int n;
    cin >> n;
    long long int result = factorial(n);
    cout << result;
    return 0;
}
