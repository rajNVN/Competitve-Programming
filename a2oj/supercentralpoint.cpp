
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

struct pair {
        int a , b ; 
}p[205] ; 


int main() {
	ios::sync_with_stdio(false);
        int n ; 
        cin >> n ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> p[i].a >> p[i].b ; 
        }
        int count = 0, x, y, l, r, u, d,  xx, yy ; 
        for(int i = 0 ; i < n ; i++) {
                x = p[i].a ; 
                y = p[i].b ; 
                l = 0, r = 0 , u = 0, d = 0 ; 
                for(int j = 0 ; j < n; j++) {
                        if(i != j) {
                                xx = p[j].a ; 
                                yy = p[j].b ; 
                                if( x < xx && y == yy) {r++; continue ; } 
                                if( x > xx && y == yy) {l++; continue ; } 
                                if( y < yy && x == xx) {u++; continue ; } 
                                if( y > yy && x == xx) {d++; continue ; } 
                        }
                }
                if(l && r && u && d ) count++ ; 
                        
        }
        cout << count << endl ; 
}
