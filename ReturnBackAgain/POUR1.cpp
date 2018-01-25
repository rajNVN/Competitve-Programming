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

map< pair<int, int>, int > visited ;

int solve(int a, int b, int v) {


	pair<int, pair<int, int> > p;
	queue<pair<int, pair<int, int>> > q;
	q.push({0, {0, 0}});
	int first, second;
	int step;
	while(!q.empty()) {

		p = q.front();
		first = p.first ;
		second = p.second.first;
		step = p.second.second;

		q.pop();

		if(visited[ { first, second } ] == 1) {
			continue;
		}

		if(first > a || second > b || first < 0 || second < 0) {
			continue;
		}

		visited[ {first, second} ] = 1;

		if(first == v || second == v) {
			cout << step << endl;
			break;
		}

		q.push( {first, {b, step + 1}} );
		q.push( {a, {second, step + 1}} );
		
		int temp = min(first, b - second);

		q.push( { first - temp, {second + temp, step + 1} } );

		temp = min(a - first, second);

		q.push( { first + temp, {second - temp, step + 1}} );

		q.push( {first, {0, step + 1}} );
		q.push( {0, {second, step + 1}} );
	}
	visited.clear();
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(c % gcd(a,b) != 0) {
			cout << - 1 << endl;
			continue;
		}
		
		int temp;	
		if(a > b) {
			temp = a;
			a = b;
			b = temp;
		}
		
		if(c > b) {
			cout << -1 << endl;
			continue;
		}
	
		solve(a, b, c); 	
	}
}
