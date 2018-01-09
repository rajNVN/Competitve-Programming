
#include <iostream>
#include <bits/stdc++.h>
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

bool dragons[100005] = {0}  ; 
int main() {
    int k, l, m, n, d ; 
    cin >> k >> l >> m >> n ; 
    cin >> d ;
    int kk = k , ll = l, mm = m , nn = n ;
    while(k <= d) {
        dragons[k] = true ; 
        k += kk ;  
    }
    while(l <= d) {
        dragons[l] = true ; 
        l += ll ;
    }
    while(m <= d) {
        dragons[m] = true ; 
        m += mm ; 
    }
    while(n <= d) {
        dragons[n] = true ; 
        n += nn ;
    }
    int count = 0 ; 
    for(int i = 1 ; i <= d ; i++) {
        if(dragons[i] == 1 ) count++ ; 
    }
    cout << count << endl ; 
   return 0 ;  
}
