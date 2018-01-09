#include <bits/stdc++.h>
#define LONG long long int 

using namespace std ; 


int main() {
    int matrix[5][5], indexofi = -1, indexofj = -1 ;

    for(int i = 0 ; i < 5 ; i++) {
        for(int j = 0 ; j < 5 ; j++) {
            cin >> matrix[i][j] ; 
            if(matrix[i][j] == 1) {
                indexofi = i ; 
                indexofj = j ; 
            }
        }
    }        

    int moves = abs(( 2 - indexofj) ) +abs( ( 2 - indexofi )) ;
    cout << abs(moves) << endl ;
}
