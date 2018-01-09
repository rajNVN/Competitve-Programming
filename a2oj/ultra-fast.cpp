#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	string number1, number2 ; 
	cin >> number1 ;
	cin >> number2 ;
	for(int i = 0 ; i < number1.length(); i++) {
		if(number1[i] == number2[i]) cout << "0" ;
		else cout << "1" ;
	}
}
