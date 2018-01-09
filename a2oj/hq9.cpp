
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        string pro ;
        cin >> pro ; 
        for(char c: pro) {
                if(c == 'H' || c == 'Q' || c == '9' ) {
                        cout << "YES" << "\n" ;
                        return 0 ;
                }
        }
        cout << "NO" ;

}
