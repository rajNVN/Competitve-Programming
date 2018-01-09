
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

pair<int, pair<int, int> > points[100005] ; 
int main() {
	ios::sync_with_stdio(false);
        int n ;
        cin >> n ;
        int x, y ; 
        int minx = INT_MAX, maxy = INT_MIN; 
        for(int i = 0 ; i < n ; i++){
                cin >> x >> y ;
                points[i+1] = make_pair(i + 1, make_pair(x,y)) ;
                minx = min(x, minx) ;
                maxy = max(y, maxy) ;
        }
        for(auto p: points) {
                if (p.second.first == minx and p.second.second == maxy){
                        cout << p.first  ; 
                        return 0 ;
                }
        }
        cout << -1 << endl ;

}
