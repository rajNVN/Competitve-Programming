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

vector<int> a;


int cache[1005][1005][2];

int solve(int begin, int end, int turn) {

	if(begin  > end) return 0;
	if(cache[begin][end][turn] != -1) return cache[begin][end][turn];

	int answer = 0;

	if(turn == 0) {
		answer += max(a[begin] +  solve(begin + 1, end, 1), a[end] + solve(begin, end - 1, 1));
		
		return cache[begin][end][turn] = answer;
	} 
	else {
		if(a[begin] >= a[end]) {
			answer += solve(begin + 1, end, 0);
		        return cache[begin][end][turn] = answer;

		} else {
			answer += solve(begin, end - 1, 0);
			return cache[begin][end][turn] = answer;
		}
	}
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int cases = 1;
	while(1) {

		memset(cache, -1, sizeof(cache));

		int n, temp;

		cin >> n;

		if(n == 0) break;
		
		REP(i,n) cin >> temp, a.pb(temp); 

		int sum = 0;

		REP(i,n) sum += a[i];

		int begin = 0, end = n - 1;

		int answer = solve(begin, end, 0);
		answer = abs(answer - (sum - answer));
		cout << "In game " << cases << ", the greedy strategy might lose by as many as " << answer << " points." << endl;	
		a.clear();
		cases++;
	}
}

