#include <bits/stdc++.h>
#define LONG long long int 

using namespace std ; 

int main() {
    string s ; 
    cin >> s; 
    string result = "" ;
    for(int i = 0 ; i < s.length() ; i++) {
        if(s[i] == '.')     
            result += char(48) ;
        else if( s[i] == '-' && s[i+1] == '.' ) {
            result += (char) 49 ;
            i = i + 1 ;
        }
        else if( s[i] == '-' && s[i+1] == '-' ) {
            result += (char) 50 ;
            i = i + 1 ;
        }
    }
    cout << result << endl ;
}

