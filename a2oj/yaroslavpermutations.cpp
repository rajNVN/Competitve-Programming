
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int main() {
	ios::sync_with_stdio(false);
        int n ;
        cin >> n; 
        int flag = 1, a ;
        map<int , int> m;
        for(int i = 1 ; i <= n ;i++) {
                cin >> a; 
                m[a]++ ; 
        }
        for(auto p : m) {
                if(p.second > (n+1) / 2) {
                        cout << "NO" ;
                        return 0 ;
                }
        }
        cout <<"YES" << endl ;
}
