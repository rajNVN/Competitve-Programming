#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    int n ; 
    cin >> n ; 
    string s ;
    cin >> s ; 
    int count = 0 ;
    for(int i = 0 ; i < s.length() - 1 ; ++i) {
        if( s[i+1] == s[i] ) count++ ;
    }
    cout << count << endl ;
}

