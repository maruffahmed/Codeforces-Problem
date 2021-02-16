#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    int t,w,h,wc,hc,c = 0,s;
    long int n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> w >> h >> n;
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        wc = hc = 0;
        if(w % 2 == 0){
            s = 0;
            for(int j = wc; j > 1; j/2){
                if(s == 0)
                    wc += 2;
                else

            }
        }
        if(h % 2 == 0){
            s = 0;
            while(h % 2 == 0){
                h = h/2;
                if(s == 0)
                    hc += 2;
                else
                    hc += (s*2);
                s+=2;
            }
        }
        c = wc + hc;

        if(c >= n){
            cout << c << "YES" << endl;
        }else{
            cout << c << "NO" << endl;
        }
    }
    return 0;
}
