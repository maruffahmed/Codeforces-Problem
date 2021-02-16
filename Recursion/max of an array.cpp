#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int max_of_array(ll int num[],ll int index){
    if(index > 1){
        return max(num[index - 1], max_of_array(num,index-1));
    }
    return num[0];
}

int main()
{
    ll int n;
    cin >> n;
    ll int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    ll int result = max_of_array(num,n);
    cout << result;
    return 0;
}
