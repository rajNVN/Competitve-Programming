#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL);
        string s;
        cin >> s;
        vector<char> str;
        int prev = s[0];
        for(int i = 1; i < s.length(); i++) {
               if(s[i] == prev || s[i] == s[i+1]) flag.insert(s[i]);

        for(char a:flag) {
                for(int i = 0; i < s.length(); i++) {
                        if(a == s[i]) {
                                s[i] = ';';
                        }
                }
        }
        string str = "";
        for(char c: s) {
                if(c != ';') {
                       str += c; 
                }
        }
        map<int, int> count;
        for(int i = 0; i < str.length(); i++)  {
                count[str[i]]++;
        }
        set<char> pi[200];

        for(int i = 97; i <= 122; i++) {
                for(int j = i+1; j <= 122; j++) {
                        if(count[i] == count[j] || count[i] == count[j] + 1 || count[i] == count[j] - 1) {
                                p[i].insert(j);
                        }
                }
        }

        for(int i = 97; i <= 122; i++) {

        }

}
