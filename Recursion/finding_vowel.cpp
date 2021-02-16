#include <bits/stdc++.h>
using namespace std;

int find_vowel(string str,int length){
    if(length > 0){
        if((str[length-1] == 'a' || str[length-1] == 'e' || str[length-1] == 'i' || str[length-1] == 'o' || str[length-1] == 'u') || (str[length-1] == 'A' || str[length-1] == 'E' || str[length-1] == 'I' || str[length-1] == 'O' || str[length-1] == 'U')){
            return (find_vowel(str, length-1) + 1);
        }else{
            return find_vowel(str, length-1);
        }
    }
    return 0;

}

int main()
{
    string str;
    getline(cin, str);

    int result = find_vowel(str, str.length());
    cout << result;
    return 0;
}
