
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int main() {
	ios::sync_with_stdio(false);
        cin.tie(0) ; 
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i] ; 
        }
        int diff, min = INT_MAX ; 
        int p = -1, q= -1  ;  
        for(int i = 0 ; i < n - 1 ; i++) {
                diff = abs(a[i] - a[i + 1]) ; 
                if(diff < min) {
                        min = diff ; 
                        p = i ; 
                        q = i + 1 ;
                }
        }
        diff = abs(a[0] - a[n-1]) ; 
        if(diff < min) {
                p = n - 1 ; 
                min = diff ;
                q = 0  ; 
        }
        cout << p + 1  << " " <<  q + 1  << "\n" ; 
}
