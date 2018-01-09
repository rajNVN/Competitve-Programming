#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    int m, n ; 
    cin >> n >> m ;
    int flag = 0 ; 

    for(int j = 2 ; j <= sqrt(m); j++) {
        if(m % j == 0){ flag = 1 ; break ; }
    }
    if(!flag) {
        flag = 1 ;
        for(int i = n+1; i < m; i++) {
            flag = 0 ;
            for(int j = 2; j <= sqrt(i); j++) {
                if(i % j == 0) { flag = 1 ; break ; }
            }
            if(!flag) break; 
        }
        if(flag) cout << "YES" << endl ;  else cout << "NO" << endl ;
    } else {
        cout << "NO" << endl ;
    }
    

}
