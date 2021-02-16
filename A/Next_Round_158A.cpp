#include<bits/stdc++.h>
#define FOR(n) for (int i = 0; i < n; i++)
#define endl '\n'

using namespace std;

int main()
{
    int n,k, count = 0;
    cin >> n >> k;
    int arr[n];
    FOR(n){
        cin >> arr[i];
    }

    FOR(n){
        if(arr[i] > 0 && arr[i] >= arr[k-1]) count++;
    }

    cout << count << endl;
    return 0;
}
