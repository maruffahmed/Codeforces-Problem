#include<bits/stdc++.h>
#define FOR(n) for (int i = 0; i < n; i++)
#define endl '\n'
using namespace std;

int main()
{
    int n,count = 0, a, b, c;
    cin >> n;
    FOR(n){
        cin >> a >> b >> c;
        if(a & b) count++;
        else if(b && c) count++;
        else if(c && a) count ++;
    }
    cout << count << endl;
}