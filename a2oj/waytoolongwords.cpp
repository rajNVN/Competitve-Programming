
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;



int main() {
	ios::sync_with_stdio(false);
        int n; 
        string s ; 
        cin >> n;
        for(int i = 0; i < n; i++) {
                cin >> s ; 
                if(s.length() > 10) {
                        cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl ; 
                } else {
                        cout << s << endl ; 
                }
        }

}
