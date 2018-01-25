#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
#define mp make_pair
const double PI=3.141592653589793238462643383279502884197169399375105820974944;
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define remax(a,b) a = max(a,b)
#define remin(a,b) a = min(a,b)
#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define F first
#define S second
#define mii map<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define itr :: iterator it
#define WL(t) while(t --)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;


int power(int a,int b,int m = MOD){
	if(b == 0) return 1;
	if(b == 1) return a;
	int x = power(a,b/2,m)%m;
	x = (x*x)%m;
	if(b%2) return (x*a)%m;
	return x;
}

map< pair<int, int>, int > visited;

void solve(int i, int j, int i1, int j1) {

	queue<pair<int, pair<int, int>>> q;

	q.push(mp(i, mp(j, 0)));
	
	pair<int , pair<int, int> > p;
	int step = 0;
	while(!q.empty()) {
		p = q.front();
		i = p.first;
		j = p.second.first;
		step = p.second.second;
		q.pop();
		if(visited[mp(i,j)] == 1) {
			continue;
		}
		visited[mp(i, j)] = 1;
		if(i == i1 && j == j1) {
			cout << step << endl;
			break;
		}
		
		if(i + 2 <= 8 && j + 1 <= 8 && i + 2 >= 1 && j + 1 >= 1) {
			q.push(mp(i+2, mp(j + 1, step + 1)));
		}
		if(i + 2 <= 8 && j - 1 >= 1 && i + 2 >= 1 && j - 1 >= 1) {
			q.push(mp(i + 2, mp(j - 1 , step + 1 )));
		}
		if(i - 2 >= 1 && j + 1 <= 8 && i - 2 <= 8 & j + 1 >= 1) {
			q.push(mp(i - 2, mp(j + 1, step + 1)));
		}
		if(i - 2 >= 1 && j - 1 >= 1 && i - 2 <= 8 && j - 1 >= 1) {
			q.push(mp(i - 2, mp(j - 1, step + 1)));
		}
		if(j + 2 <= 8 && j + 2 >= 1 && i + 1 <= 8 && i + 1 >= 1) {
			q.push(mp(i + 1, mp(j + 2, step + 1)));
		}
		if(j + 2 <= 8 && j + 2 >= 1 && i - 1 <= 8 && i - 1 >= 1) {
			q.push(mp(i - 1, mp(j + 2, step + 1)));	
		}
		if(j - 2 <= 8 && j - 2 >= 1 && i + 1 <= 8 && i + 1 >= 1) {
			q.push(mp(i + 1, mp(j - 2, step + 1)));
		}
		if(j - 2 <= 8 && j - 2 >= 1 && i - 1 <= 8 && i - 1 >= 1) {
			q.push(mp(i - 1, mp(j - 2, step + 1)));	
		}
	}
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t; 
	while(t--) {
		string start, dest;
		cin >> start >> dest;
		int i = start[0] - 97 + 1;
		int j = start[1] - 48; 
		int i1 = dest[0] - 97  + 1;
		int j2 = dest[1] - 48;
		solve(i, j, i1, j2);
		visited.clear();
	}
}
