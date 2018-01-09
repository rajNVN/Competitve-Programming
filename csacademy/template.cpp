#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    ll number ; 
    cin >> number ; 
    stringstream ss ; 
    ss << number ; 
    string no = number.tostr() ;
    for(int i = 0 ; i < no.length(); i++) if(no[i] != 52 || no[i] != 55) {
        flag = 1 ;
        break ; 
    }
    flag ? cout << "NO" : cout << "YES" ;
}
