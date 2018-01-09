
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        unordered_set<char> ss ;
        string s ; 
        cin >> s ;
        for(char s: s) 
               ss.insert(s) ;  
        if(ss.size() & 1) 
                cout << "IGNORE HIM!" << endl ;
        else 
                cout << "CHAT WITH HER!" << "\n" ;
}
