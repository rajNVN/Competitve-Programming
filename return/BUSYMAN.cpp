#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

vector< pair<int, int> > a;


bool sortbysecond(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second ;
}

int main() {
	ios::sync_with_stdio(false);
        int t;
        cin >> t;
        while(t--) {
                int n;
                cin >> n;
                int p, q;
                for(int i = 0; i < n; i++) {
                        cin >> p >> q;
                        a.push_back(make_pair(p, q));
                }
                sort(a.begin(), a.end(), sortbysecond);
                pair<int, int> fp = a[0];
                int begin = fp.first;
                int end = fp.second;
                int count = 1;
                for(int i = 1; i < a.size(); i++) {
                        if(a[i].first >= end) {
                                count++;
                                end = a[i].second;
                        } 
                }
                cout << count << endl;
                a.clear();
        }
}
