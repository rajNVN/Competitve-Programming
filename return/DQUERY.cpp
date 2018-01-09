#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int a[100005];
int lastvisit[1000005];
int fenwickTree[200005];
int answer[200005];

vector< pair<int, pair<int, int>> > query;

bool secondBySecond(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
        return a.second.second < b.second.second;
}

void updateBIT(int n, int index, int val) {
        index = index + 1;
        while(index <= n) {
                fenwickTree[index] += val;
                index += index & (-index);
        }
}

int getSum(int index) {
        int sum = 0;
        index = index + 1;
        while(index > 0) {
                sum += fenwickTree[index];
                index -= index & (-index);
        }
        return sum;
}

void answerqueries(int n, int q) {
        for(int i = 0; i <= n; i++) {
                fenwickTree[i] = 0;
        }
        int prev;
        int counter = 0;
        for(int i = 0; i < n; i++) {
               prev = lastvisit[a[i]]; 
               cout << "last visit of " << a[i] << " " << "at index " << i << " " << prev << endl;
               if(prev != -1) {
                       updateBIT(n, lastvisit[a[i]], -1);
               }
               lastvisit[a[i]] = i;
               updateBIT(n, i, 1);
               while(counter < q && query[counter].second.second == i) {
                       answer[query[counter].second.first] = getSum(i) - getSum(query[counter].first - 1);
                       cout << "answer for query" << query[counter].second.second << " " << query[counter].first << " " << answer[query[counter].second.first] << endl;
                       counter++;
               }
        }
}

int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
                cin >> a[i];
        }
        int q;
        cin >> q;
        int a, b;
        for(int i = 0; i < q; i++) {
               cin >> a >> b;
               query.push_back(make_pair(a, make_pair(i,b)));
        }
        sort(query.begin(), query.end(), secondBySecond);
        cout << "sorted " << endl;
        for(int i = 0; i < q; i++) {
                cout << query[i].first << " " << query[i].second.second << endl;
        }
        for(int i = 0; i < 1000005; i++) {
                lastvisit[i] = -1;
        }
        answerqueries(n, q); 
        for(int i = 0; i < q; i++) {
                cout << answer[i] << endl;
        }
}
