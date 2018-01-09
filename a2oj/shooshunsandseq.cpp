
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int a[100005] ; 
int main() {
	ios::sync_with_stdio(false);
        int n, k  ; 
        cin >> n >> k ;
        for(int i = 0; i < k - 1 ; i++) {
                cin >> a[i] ; 
        }
        int flag = 0;
        for(int i = k - 1; i < n; i++) {
                cin >> a[i] ; 
                if( i >= k) {
                        if(a[i] != a[i-1]) {
                                flag = 1;
                                break ; 
                        }
                }
        }
        if(flag) cout << "-1" << endl ;
        else {
                int answer ; 
                for(answer= k - 2  ; answer >=0 ; answer--){
                        if(a[answer] != a[k-1]) {
                                break ; 
                        }
                }
                cout << answer + 1 << endl ;
        }
}
