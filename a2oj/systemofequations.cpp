
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n, m ;
        cin >> n >> m ; 
        int counti = 0 ; 
        for(int i = 0 ; i <= n ; i++) {
                for(int j = 0 ; j <= m; j++) {
                       if( i * i + j == n ) {
                               if(i + (j * j) == m) {
                                       counti++ ; 
                               }
                       }
                }
        }
        cout << counti << endl ; 
}
