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
        int n = s.length() ; 
        string result = "" ; 
        for(int i = 0 ; i < n ; ) {
                if(s.substr(i, 3) == "WUB") {
                        i = i + 3 ; 
                } else {
                        if( i + 3 >= n ) {
                               while(i < n) {
                                       result += s[i++] ; 
                               }
                               break ; 
                        }
                        while(s.substr(i, 3) != "WUB") {
                                result += s[i++] ;
                                if(i + 3 >= n) {
                                        if(s.substr(i, 3) != "WUB")
                                        while ( i < n) {
                                                result += s[i++] ; 
                                        }
                                        break ; 
                                }
                        }
                        result += " " ;
                        i = i + 3 ; 
                }
        }
        cout << result << endl ; 
}
