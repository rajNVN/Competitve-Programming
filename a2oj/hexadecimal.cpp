
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
        if(n == 0){ cout << 0 << " " << 0 << " " << 0 << endl ; return 0 ; }
        if(n == 1){ cout << 0 << " " << 0 << " " << 1 << endl ; return 0 ; } 
        int a = 0, b = 1, c ; 
        c = a + b ; 

        while(c != n) {
                a = b ; 
                b = c ; 
                c = a + b ;
                if(c == n) break ; 
        }
        cout << 0 << " " << a << " " << b << endl ; 
        return 0 ; 
}
