#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

vector<int> a(105) ;
int main() {
    int n ; 
    cin >> n ;
    int maxelement = INT_MIN, minelement = INT_MAX, maxindex = 0, minindex = 0; 
    for(int i = 0 ; i < n ; i++) {
        int temp ;
        cin >> temp ;
        if(temp > maxelement) {
            maxelement = temp ;
            maxindex = i + 1  ;
        }
        if(temp <= minelement ) {
            minelement = temp ; 
            minindex = i + 1 ; 
        }

        a.push_back(temp) ;
    }
    if(minindex == maxindex) cout << "0" << endl ; 
    else
    if(maxindex < minindex) cout << maxindex - 1 + n - minindex  << endl ; 
    else cout << (maxindex - 1) +( n - minindex ) - 1 << endl ; 
}

