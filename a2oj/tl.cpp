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
        int a[n],b[m] ;
        int maxa = INT_MIN, maxb = INT_MAX ;
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i] ;
                maxa = max(maxa, a[i]) ;
        } 
        int flag = 0 ; 
        for(int i = 0 ; i < m ; i++) {
                cin >> b[i] ;
                maxb = min(maxb, b[i]) ;
                if(b[i] <= maxa) {
                        flag = 1 ;
                }
        }
        if(flag) {
                cout << -1 << endl ; return 0 ;
        }
        int diff = abs(maxb - maxa) ;
        sort(a, a + n) ; 
        flag = 0 ; 
        int answer = -1 ;
        for(int i = 0 ; i < n ; i++) {
                for(int j = 0 ; j < diff; j++) {
                        if(a[i]*2 <= maxa + j) {
                                flag = 1 ;
                                answer = maxa + j ; 
                                break ; 
                        }
                }
                if(flag) break ; 
        }
        if(flag)  cout << answer << endl ; 
        else cout << -1 << endl ;
        
}
