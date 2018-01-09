
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
        int count0 = 0, count1 = 0 ;
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i] ; 
                if(a[i]) count1++ ; else count0++ ; 
        }
        if(count0 == 0) {
                cout << -1 << endl ; return 0 ; 
        }
        ll product = count1 * 5 ; 
        if(product < 45) {
                cout << 0 << endl ; return 0 ; 
        }
        ll remainder = product % 45 ; 
        ll noOfives = remainder / 5 ; 
        count1 = count1 - noOfives ; 

        for(int i = 0 ; i < count1; i++) {
               cout << 5 ; 
        }
        for(int i = 0 ; i < count0; i++) {
                cout << 0 ; 
        }
        
}
