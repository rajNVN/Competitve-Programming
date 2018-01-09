#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int main() {
    string s; 
    cin >> s;
    cout << (char)toupper(s[0]) ;
    cout << s.substr(1, s.length()) ;

}
