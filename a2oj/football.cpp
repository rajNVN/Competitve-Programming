
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

map<string, int> counti ; 

int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL) ; 
        int n, maxi = INT_MIN ; 
        cin >> n ; 
        string s, winner  ; 
        for(int i = 0; i < n; i++) {
                cin >> s ; 
                counti[s]++ ; 
                if(counti[s] > maxi){
                        maxi = counti[s] ; 
                        winner = s ; 
                }
        }
        cout << winner << endl ; 
}

