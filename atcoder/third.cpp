
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

map<long , int > exist ; 
int main() {
	ios::sync_with_stdio(false);
        int n ; 
        cin >> n ; 
        long temp ; 
        long count = 0 ; 
        for(int i = 0 ; i < n ; i++) {
                cin >> temp ; 
                if(exist[temp] == 0) {
                        exist[temp] = 1 ;
                        count++ ; 
                }
                else count-- ; 
        }
        cout << count << endl ;

}
