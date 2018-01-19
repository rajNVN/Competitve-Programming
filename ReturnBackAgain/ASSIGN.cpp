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
int maxt;
vector<int> v[25];
int cache[1048600][22];
int n;


int compute(int mask, int topic) {

	if(mask == maxt) return 1; 

	if(topic >  n) return 0;

	if(cache[mask][topic] != -1) return cache[mask][topic] ;

	int answer = 0;
	
	for(int i: v[topic]) {
		if((mask & (1 << i)) == 0) {
			answer += compute(mask | (1 << i), topic + 1);
		}
	}
	return cache[mask][topic] = answer ;
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		memset(cache, -1, sizeof(cache));
		cin >> n;
		maxt = (1 << n) - 1;
		int temp;
		for(int i = 0; i < n; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> temp;
				if(temp) v[j].pb(i);
			}
		}

		cout << compute(0, 1) << endl;
		
		for(int i = 0; i <= 20; i++) {
			v[i].clear();
		}
	}
}
