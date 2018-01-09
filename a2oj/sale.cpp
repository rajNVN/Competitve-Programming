
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL) ; 
        int n, m ; 
        cin >> n >> m ; 
        vector<int> a(n) ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i] ; 
        }
        sort(a.begin(), a.end()) ;
        int sum = 0, counti = 0 ; 
        for(int i = 0 ; i < n ; i++) {
                if(a[i] < 0) {
                        sum += abs(a[i]) ; 
                        counti++ ;
                } 
                if(counti == m) break ;
        }
        cout << sum << endl ; 
}
