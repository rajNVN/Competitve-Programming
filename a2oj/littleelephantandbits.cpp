
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        string s ; 
        cin >> s ; 
        int done = 0 ; 
        string result =  "" ;
        for(int i = 0 ; i < s.length(); i++) {
                if(s[i] =='0' and done == 0) {
                        done = 1 ;
                } else {
                        result += s[i] ;
                }
        }
        if(done == 0) {
                cout << s.substr(0, s.length() - 1) ;
                return 0 ;
        } else {
                cout << result << endl ;
        }
}
