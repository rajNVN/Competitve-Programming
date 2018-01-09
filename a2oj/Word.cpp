#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int main() {
    string s,temp ; 
    cin >> s ; 
    temp = s ; 
    int countU = 0, countL = 0 ;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])) countU++ ; else countL++ ;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower) ;
    transform(temp.begin(), temp.end(), temp.begin(), ::toupper) ;
    if(countU == countL) cout << s ; 
    if(countU > countL) cout << temp ; 
    if(countL > countU) cout << s ;
}
