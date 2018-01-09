
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int s1, s2, s3, s4 ;
        set<int> s ; 
        cin >> s1 >> s2 >> s3 >> s4 ; 
        s.insert(s1) ; 
        s.insert(s2) ;
        s.insert(s3) ; 
        s.insert(s4) ; 
        cout << 4 - s.size() << endl ; 
}
