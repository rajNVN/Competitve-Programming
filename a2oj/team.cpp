
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
        int a, b, c, count = 0 ;
        for(int i = 0; i < n; i++) {
               cin >> a >> b >> c ;
               if( ( a && b) || ( a && c) || ( b && c) )  
                       ++count ; 
        }
        cout << count << endl ;

}
