
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int X = 0, n ; 
        string st ; 
        cin >> n ; 
        
        for(int i = 0; i < n; i++) {
               cin >> st ; 
               if( st == "++X" || st == "X++") X += 1 ; 
               else X -= 1 ; 
        }
        cout << X << "\n" ; 
}
