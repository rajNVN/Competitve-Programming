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
        int counti = 0;
        int k;
        for(int i = 1; i <= n; i++) {
                for(int j = i; j <= n; j++) {
                        k = (i*i) + (j*j);
                        int t = sqrt(k);
                        if((k <= n*n) && (t*t == k)) counti++;
                }
        }
        cout << counti;
}
