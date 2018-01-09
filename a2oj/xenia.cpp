
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
        vector<int> a(m) ;
        for(int i = 0 ; i < m ; i++) {
                cin >> a[i] ; 
        }
        ll result = a[0] - 1 ; 
        for(int i = 1 ; i < m ; i++){
                if(a[i] == a[i-1]) continue ;
                else if(a[i] > a[i-1]) 
                        result += a[i] - a[i - 1] ; 
                else {
                        result += (n - a[i - 1] + a[i] ) ; 
                }
        }
        cout << result << endl ; 

}
