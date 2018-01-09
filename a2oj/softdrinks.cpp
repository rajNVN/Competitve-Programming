
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n, k, l, c, d, p, nl, np ; 
        cin >> n >> k >> l >> c >> d >> p >> nl >> np ; 
        int mltotal = k * l ; 
        int slicetotal = c * d ; 
        int salttotal = p / np ; 

        int total = mltotal / nl ; 
        int minimum = min(total, slicetotal) ; 
        minimum = min(salttotal, minimum) ; 
        cout << minimum / n << "\n" ;
}
