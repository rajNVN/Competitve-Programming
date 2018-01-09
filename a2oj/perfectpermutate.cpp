#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    int n ; 
    cin >> n ; 
    if(n == 1 ) cout << "-1" << endl ;
    else if ( n & 1 ) cout << " -1 " << endl ;
    else
        for(int i = 2 ; i <= n ; i+=2) {
            cout << i << " " << i - 1 << " " ;
        }

   }
