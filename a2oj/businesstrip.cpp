
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int k ; 
        cin >> k ; 
        if(k == 0) {
                cout << 0 ; 
                return 0 ;
        }
        int a[12], sum = 0  ; 
        for(int i = 0 ; i < 12 ; i++) {
                cin >> a[i] ; 
                sum += a[i] ;
        }
        sort(a, a+12, greater<int>()) ; 
        if(sum < k) {
                cout << -1 ; 
                return 0 ; 
        }
        int counti = 0, i = 0 ;  
        sum = 0 ;
        while(sum < k) {
                sum += a[i++] ; 
                counti++ ; 
        }
        cout << counti << endl ;  
}
