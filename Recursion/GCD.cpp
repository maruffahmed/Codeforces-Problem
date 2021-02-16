#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

ll int find_gcd(ll int a, ll int b){
    if ( a == 0) return b;
    if(b == 0) return a;
    if (a == b) return a;
    if(a % b == 0) return b;
    return find_gcd(b,a%b);
}

int main(){
    ll int a,b;
    cin >> a >> b;
    ll int gcd = find_gcd(abs(a),abs(b));
    cout << gcd;
    return 0;
}
