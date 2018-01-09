#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n;
        cin >> n;
        int a[n];
        ll sum = 0;
        for(int i = 0; i < n; i++) {
                cin >> a[i];
                sum += a[i] ;
        }
        if(sum % n == 0) {
                cout << n << "\n";
        } else {
                cout << n - 1 << endl;
        }


}
