
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
        int x, y, k, n, flag = 0;
        cin >> y >> k >> n;
        int r = y % k; 
        r = k - r; 
        while(r+y <= n) {
                cout << r << " "; 
                r += k; 
                flag = 1 ;
        }
        if(!flag) cout << -1;
}
