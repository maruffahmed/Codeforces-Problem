#include <iostream>
using namespace std;

void printDisits(long int n){
    if(n == 0){
        cout << 0 << " ";
        return;
    }
    printDisits(n/10);
    int lastDisit = n % 10;
    cout << lastDisit << " ";
}

int main(){
    long int n,num;
    cin >> n;
    for(long int i = 0; i < n; i++){
        cin >> num;
        printDisits(num);
        cout << endl;
    }
    return 0;
}
