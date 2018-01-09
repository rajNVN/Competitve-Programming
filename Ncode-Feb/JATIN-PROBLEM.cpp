 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define LONG long long int 
using namespace std;

vector<LONG> v ;
map<int, int> counti ;

void solve(int a, int b) {
    vector<LONG>::iterator low, up ;
    low = lower_bound(v.begin(), v.end(),a) ;
    up = upper_bound(v.begin(), v.end(),b) ;
    int pos1 = low - v.begin() ;
    int pos2 = up - v.begin() ;
    cout << pos2 - pos1 << endl ;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    LONG n ; 
    cin >> n ; 
    LONG temp ;
    for(int i = 0 ; i < n ;i++) {
        cin >> temp ;
        v.push_back(temp) ;
        counti[temp]++ ;
    }
    
    sort(v.begin(), v.end()) ;
    
    LONG q ; 
    cin >> q; 
    for(int i = 0; i < q; i++) {
        int a, b ;
        cin >> a >> b ;
        solve(a,b) ;
    }
    return 0;
}

