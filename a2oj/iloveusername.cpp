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
        vector<int> a ; 
        int temp ; 
        for(int i = 0 ; i < n; i++) {
               cin >> temp ;
               a.push_back(temp) ; 
        }
        int maxpoints = a[0] ;
        int minpoints = a[0] ; 
        int amazing = 0 ; 
        for(int i = 1 ; i < n ; i++) {
                if(a[i] > maxpoints) {
                        amazing++ ; 
                        maxpoints = a[i] ; 
                }
                if( a[i] < minpoints) {
                        amazing++ ; 
                        minpoints = a[i] ; 
                }
        }
        cout << amazing << endl ;
}
