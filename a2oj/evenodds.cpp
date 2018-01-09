
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        ll n, k ; 
        cin >> n >> k ; 
        ll mid = - 1; 
        if(n & 1) {
                mid = n/2 + 1 ;
        } else {
                mid = n/2 ; 
        }
        ll diff ;
        if( k > mid) {
               diff  = k - mid ;   
               cout << diff * 2 << endl ;
        } else {
               cout << k * 2 - 1 << endl ; 
        }
        
}
