
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
        int s[8] ; 
        for(int i = 0 ; i < 7 ; i++) {
               cin >> s[i] ;  
        }
        int i = 0, last = -1  ; 
        while(n > 0 ) {
                n -= s[i] ; 
                last = i ; 
                i = ( i + 1 ) % 7 ; 
        }
        cout << last+1 ;

}
