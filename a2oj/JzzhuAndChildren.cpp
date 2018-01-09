
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int main() {
	ios::sync_with_stdio(false);
        double n, m ; 
        cin >> n >> m ; 
        int maxi = INT_MIN, maxindex = -1, temp ; 
        for(int i = 0; i < n; i++) {
                cin >> temp ; 
                if((int)ceil(temp/m) >= maxi){
                        maxindex = i ;
                        maxi = (int)ceil(temp/m) ; 
                }
        }
        cout << maxindex + 1  << "\n"  ;
}
