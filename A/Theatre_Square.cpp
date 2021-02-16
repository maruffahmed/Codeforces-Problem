#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    long long int n,m,a,counta = 0;
    cin >> n >> m >> a;
    if(n == a && m == a){
        cout << 1 << endl;
        return 0;
    }
    else if(n == m){
        while(n > 0){
            counta++;
            n -= a;
        }
        while(m > 0){
            counta++;
            m -= a;
        }
    }else{
        while(n > m && n > 0){
            counta++;
            n -= a;
        }
        while(m > n &&m > 0){
            counta++;
            m -= a;
        }
    }
    cout << counta;
    return 0;
}
