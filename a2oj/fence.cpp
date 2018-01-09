
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int a[150005] ;
int main() {
	ios::sync_with_stdio(false);
        int n, k ;
        cin >> n >> k ; 
        for(int i = 0 ; i < n ;i++) {
                cin >> a[i] ; 
        }
        long sum = 0 ;
        for(int i = 0 ; i < k ; i++) {
                sum += a[i] ;  
        }
        long maxi = sum, index = 0;
        for(int i = k ; i < n ; i++) {
               sum = sum - a[i-k] ; 
               sum += a[i] ;
               if(sum < maxi) {
                       maxi = sum ; 
                       index = i-k+1 ;
               }
        }
        cout << index + 1 << endl ;
        
}
