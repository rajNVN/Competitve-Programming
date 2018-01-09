
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
        int total = 0, temp  ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> temp ; 
                total += temp ; 
        }
        n += 1 ;
        int count = 0 ; 
        for(int i = 1 ; i <= 5; i++) {
                if((total + i) % n != 1) ++count ; 
        }
        cout << count << "\n" ; 
}
