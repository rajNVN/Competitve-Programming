#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n, m; 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        cin >> n >> m;
        string s; 
        if(n > m) s = "BG";
        else if(m > n) s = "GB";
        else s = "BG";
        for(int i = 0; i < min(n,m); i++) {
                cout << s;
        }
        char c ;
        if(n == m) return 0; 
        if(n > m) c = 'B';
        else c = 'G' ;
        for(int i = 0 ; i < abs(n - m); i++) cout << c ;
}
