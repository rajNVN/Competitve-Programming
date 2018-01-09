
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        string s1, s2, s3 ; 
        cin >> s1 ;
        cin >> s2 ;
        cin >> s3 ; 
        
        map<char, int> first, second ; 
        for(char c: s1) first[c]++; 
        for(char c: s2) second[c]++ ; 
        int length1 = s1.length() ;
        int length2 = s2.length() ; 
        int length3 = s3.length() ; 
        int count1 = 0, count2 = 0 ; 
        if(length1 + length2 != length3){ 
                cout << "NO" << "\n" ;
                return 0 ; 
        }
        for(int i = 0; i < length3; i++) {
               if(first[s3[i]]) count1++, first[s3[i]]-- ; 
               else if(second[s3[i]]) count2++, second[s3[i]]-- ; 
        }
        if(count1 == length1 && count2 == length2) 
                cout << "YES" << "\n" ;
        else 
                cout << "NO" << "\n" ;
        return 0 ; 

}
