#include<bits/stdc++.h>
#define FOR(n) for (int i = 0; i < n; i++)
#define endl '\n'
using namespace std;

int main()
{
    int n;
    string word;
    cin >> n;
    FOR(n){
        cin >> word;
        if(word.length() > 10){
            string newWord = word[0] + to_string((word.length() - 2)) + word[word.length()-1];
            cout << newWord << endl;
        }else{
            cout << word << endl;
        }
    }
    return 0;
}