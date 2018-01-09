
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

vector<int> a(100005) ; 
map<int, int> present ; 
map<int, pair<int, int> > winner ; 
vector<int> query(100005) ; 

void findwinner(int key, int n) {
        int comp1, comp2 ; 
        for(int i = 0 ; i < n ; i++) {
                if(present[a[i]]) {
                        comp1 = i + 1 ;  
                        comp2 = n - i ;
                        winner[a[i]] = make_pair(comp1, comp2) ; 
                }
        }
}
int main() {
	ios::sync_with_stdio(false);
        int n, temp  ; 
        cin >> n ; 
        for(int i = 0 ; i < n ; i++) {
               cin >> a[i] ;  
        }
        int m, key ; 

        cin >> m ;
        for(int i = 0 ; i < m ; i++) {
               cin >> key ; 
               query[i] = key ; 
               present[key] = 1 ;
        }
        findwinner(key, n) ; 
        pair<int, int> p ;
        long long int sum1 = 0 , sum2 = 0 ; 
        for(int i = 0 ; i < m ; i++) {
              p =   winner[query[i]] ; 
              sum1 += p.first ;
              sum2 += p.second ; 
        }
        cout << sum1 << " " << sum2 ;
        
}
