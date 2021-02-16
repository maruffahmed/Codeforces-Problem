#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int sum_of_array(int num[], int n){
    if(n > 1){
        return (sum_of_array(num, n - 1) + num[n-1]);
    }
    return num[0];
}

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    ll int result = sum_of_array(num,n);
    cout << result;
    return 0;
}
