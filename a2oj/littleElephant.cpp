
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n ; 
        cin >> n ; 
        vector<int> a(n) ; 
        int min = INT_MAX, index = -1, flag = 0 ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> a[i] ; 
                if(a[i] == min) {
                        flag = 1 ;
                }
                if(a[i] <  min) {
                        min = a[i] ; 
                        index = i + 1 ;
                        flag = 0 ; 
                }
                
        }
        if(flag) cout << "Still Rozdil" << "\n" ;  else cout << index ; 
        return 0 ;         
}
