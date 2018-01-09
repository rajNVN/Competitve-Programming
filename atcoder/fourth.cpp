
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

vector< pair<int,int> > v[100005] ; 
map< int, int > rr ; 
map< int, int > visited ; 
vector < int> rrr ; 
int main() {
	ios::sync_with_stdio(false);
        int n, m, r ; 
        cin >> n >> m >> r;
        for(int i = 0 ; i < r; i++) {
                int temp ; 
                cin >> temp ; 
                rr[temp] = 1 ; 
                rrr.push_back(temp) ; 
        }


        int a, b , c ; 
        for(int i = 0 ; i < m ; i++) {
               cin >> a >> b >> c; 
               v[a].push_back(make_pair(b,c)) ; 
               v[b].push_back(make_pair(a,c)) ; 
        }
       
        long sum = 0 ; 

        for(int vv : rrr) {
                int chosen = -1 ; 
                int minimum = INT_MAX ; 
                for(auto i = v[vv].begin(); i != v[vv].end(); i++) {
                        int dest = i->first ;
                        int weight = i->second ;
                        
                        if( rr[dest] == 1 && visited[dest] == 0) {
                                if(weight < minimum) {
                                        minimum = weight ; 
                                        chosen = dest ; 
                                }
                        }
                }
                if( minimum == INT_MAX ) continue; 
                  cout << "chosen nodes is " << chosen << " with wieght " << minimum << endl ; 
                sum += minimum ; 
                visited[chosen] = 1 ; 
                visited[vv] = 1 ;
        }
        cout << sum << endl ; 
}
