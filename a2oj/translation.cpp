
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        string s,t ; 
        cin >> s ; 
        cin >> t ; 
        reverse(s.begin(), s.end()) ; 
        if(s == t) cout << "YES" ; else cout << "NO" ; 
        return 0 ; 
}
