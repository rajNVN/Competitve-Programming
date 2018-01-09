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
        int a , b ; 
        cin >> a >> b ;
        int maxi = b ; 
        int current = b ; 
        for(int i = 1 ; i < n ; i++) {
                cin >> a >> b ; 
                current = current - a + b ;  
                if(current > maxi ) {
                        maxi = current ; 
                }
        }
        cout << maxi << endl ; 
}
