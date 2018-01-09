
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        cin.tie(0) ; 
        string s ; 
        cin >> s ;
        vector<int> number ; 
        for(int i = 0 ; i < s.length(); i++) {
                if(isdigit(s[i]))
                        number.push_back(s[i] - 48 ) ; 
        }
        sort(number.begin(), number.end()) ; 
        for(int i = 0 ; i < number.size(); i++) {
                if(i == (number.size() - 1 )) {
                        cout << number[i]  ; 
                } else {
                        cout << number[i] << "+" ; 
                }
        }
        return 0 ; 
}

