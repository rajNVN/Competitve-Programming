
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

pair<int, int> p[300005];
vector< pair<int, int> > a;

int main() {
	ios::sync_with_stdio(false);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int n;
        cin >> n; 
        int temp;
        for(int i = 0; i < 2*n; i++) {
                cin >> temp;
                a.push_back(make_pair(temp, i+1));
        }
        sort(a.begin(), a.end());
        int k = 0;
        for(int i = 0; i < 2*n; i += 2) {
                if(a[i].first != a[i+1].first){
                        cout << -1 << endl;
                        return 0;
                } else {
                        p[k++] = make_pair(a[i].second, a[i+1].second);
                }
        }
        for(int i = 0 ; i < k ; i++) {
                cout << p[i].first << " " << p[i].second << "\n";
        }
}
