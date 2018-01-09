
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

map<char, int> counti ;

int main() {
	ios::sync_with_stdio(false);
        int k ;
        cin >> k ;
        string s ;
        cin >> s ;
        for(int i = 0 ; i < s.length(); i++) {
               counti[s[i]]++ ;  
        }
        int flag = 0 ;
        for(auto it = counti.begin(); it != counti.end(); it++) {
                char s = it->first ; 
                int t  = it->second ; 
                if(t % k) {
                        flag = 1 ; 
                        break ; 
                }
        }
        if(flag) {
                cout << -1 << endl ; 
                return 0 ; 
        } 
        int temp = k ; 
        while(temp--) {
                for(auto it = counti.begin(); it != counti.end(); it++) {
                        if(it->second) {
                                int div = it->second / k ; 
                                for(int i = 0 ; i < div; i++) 
                                        cout << it->first ;
                        }
                }
        }
}
