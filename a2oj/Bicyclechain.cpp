
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n, m ; 
        cin >> n ; 
        int a[n] ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i] ; 
        }
        cin >> m ; 
        int b[m] ;
        for(int i = 0 ; i < m ; i++) {
                cin >> b[i] ; 
        }
        int counti = 0 ; 
        int maxi = INT_MIN ; 
        for(int i = 0 ; i < n ; i++) {
                for(int j = 0 ; j < m ; j++) {
                        int remainder  = b[j] % a[i] ;
                        int quotient  = b[j] / a[i] ; 
                        if(!remainder) {
                                if(quotient == maxi) {
                                        counti++ ; 
                                } else {
                                        if(quotient > maxi) {
                                                maxi = quotient ;  
                                                counti = 1 ; 
                                        }
                                }
                        }
                }
        }
        cout << counti << endl ; 
}
