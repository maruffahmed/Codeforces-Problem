#include<bits/stdc++.h>
#define FOR(n) for (int i = 0; i < n; i++)
#define endl '\n'

using namespace std;

int main()
{
    int m,n, dominX, dominXR = 0, dominY, dominYY = 0;
    cin >> m >> n;
    if(m % 2 == 0) {
        dominX = m/2;
    }else{
        dominX = m/2;
        dominXR = m%2;
    }

    dominY = dominX * n;
    if(dominXR > 0) {
        dominYY = n/2;
    }

    int result = dominY + dominYY;

    cout << result << endl;
    return 0;
}
