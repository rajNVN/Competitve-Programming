
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


vector< pair<int, int> > d ; 

int main() {
	ios::sync_with_stdio(false);
        int s, n ;
        cin >> s >> n ; 
        int a, b ; 

        for(int i = 0 ; i < n ; i++) {
                cin >> a >> b ;
                d.push_back(make_pair(a,b)) ;
        }
        sort(d.begin(), d.end()) ; 
        if(s < d[0].first) {
                cout << "NO" << endl ; 
                return 0 ; 
        }
        for(int i = 0 ; i < n ; i++) {
                if( s > d[i].first) {
                        s += d[i].second ;
                } else {
                        cout << "NO" << endl ; 
                        return 0 ; 
                }
        }
        cout << "YES" << endl ;
}
