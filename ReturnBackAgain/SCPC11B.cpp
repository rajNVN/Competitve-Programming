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


signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	while(1) {
		int n; cin >> n;

		if(n == 0) break;

		vector<int> station(n);

		for(int i = 0; i < n; i++) {
			cin >> station[i];
		}
		
		sort(station.begin(), station.end());

		int flag = 0;
		int distance = 0;

		for(int i = 1; i < n; i++) {
			if((station[i] - station[i-1]) > 200) {
				flag = 1; break;
			} 
			distance += station[i] - station[i-1];
		}
		if(flag) {
			cout << "IMPOSSIBLE" << endl; continue;
		}
		if(station[n-1] != 1422) {
			distance += 1422 - station[n-1];
		}

		if(distance < 1422) {
			cout <<"IMPOSSIBLE"<< endl; continue;
		}

		int start = 200 - (1422 - station[n-1]);

		if(1422 - station[n-1] > start) {
			cout << "IMPOSSIBLE" << endl;continue;
		}

		distance = 1422 - station[n-1];
		flag = 0;
		for(int i = n-2; i>=0; i--) {
			if(station[i+1] - station[i] > 200)  {
				flag =1 ; break;
			}
			distance += station[i+1] - station[i] ;
		}
		if(flag) {
			cout << "IMPOSSIBLE" << endl;
			continue;
		}
		if(distance < 1422) {
			cout << "IMPOSSIBLE" << endl;
			continue;
		}
		cout << "POSSIBLE" << endl;
	}
}

