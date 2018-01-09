
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        string s1, s2 ;
        cin >> s1 ;
        cin >> s2 ; 
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower) ;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower) ;
        if(s1 > s2) cout << 1 << "\n" ;
        else if(s1 == s2) cout << 0 << "\n" ;
        else cout << "-1" << "\n" ;

}
