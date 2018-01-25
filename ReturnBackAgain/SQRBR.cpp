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

 int maxi ;

int dp[50][50][50];
map<int, int> isOpen;

int solve(int number, int openNo, int closedNo) {

	if(closedNo > openNo){
		return 0;
	}

	if(number > maxi) {
		if(openNo == closedNo) return 1; else  return 0;
	}
	
	if(dp[number][openNo][closedNo] != -1) return dp[number][openNo][closedNo];
	int answer = 0;
	if(isOpen[number]) {
		answer += solve(number + 1, openNo + 1, closedNo); 
		return dp[number][openNo][closedNo] = answer;
	} else {
		answer += solve(number + 1, openNo + 1, closedNo);
		answer += solve(number + 1, openNo, closedNo + 1);
		return dp[number][openNo][closedNo] = answer;
	}
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		maxi = n * 2;
		memset(dp, -1, sizeof(dp));
		int temp;
		for(int i = 0; i < k; i++) {
			cin >> temp;
			isOpen[temp] = 1;
		}
		cout <<solve(1, 0, 0)<< endl;
		isOpen.clear();
	}
}


