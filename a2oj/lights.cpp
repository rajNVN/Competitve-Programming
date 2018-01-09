#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std;

void change(bool &v) { v ? v = false : v = true;}

int main() {
    bool matrix[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matrix[i][j] = 1 ; 
        }
    }
    int x ; 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> x; 
            if(x & 1) {
                change(matrix[i][j]);
                change(matrix[i+1][j]);
                change(matrix[i-1][j]);
                change(matrix[i][j+1]);
                change(matrix[i][j-1]);
            }
        }
    }
   for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
       matrix[i][j] ? cout << "1" : cout << "0" ; 
    }
    cout << endl ;
}
}
