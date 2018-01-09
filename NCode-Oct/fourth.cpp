
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

long long int a[100005];
int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL);
        unsigned long long int n, k;
        cin >> n >> k;
        unsigned long long sum = 0;
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i];
                sum += a[i];
        }
        unsigned long  long int answer = ( n + 1 ) + (2 * (k - 1 ));
        if(answer <= sum) {
                cout << answer << endl;
        } else {
                cout << -1 << endl;
        }
}
