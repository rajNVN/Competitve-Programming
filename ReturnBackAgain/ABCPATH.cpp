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


vector<int> g[60];

bool visited[50][50] = {0};
int maximum = INT_MIN;
int h, w;
string s[100];


void dfs(int, int, int , int);

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cases = 1;
	while(1) {
		cin >> h >> w;
		if(h == 0 && w == 0) return 0;	
		REP(i, h) {
			cin >> s[i];
			for(int j = 0; j < s[i].length(); j++) {
				s[i][j] -= 65;
			}
		}


		int maxi = 0;
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {

				if(s[i][j] == 0) {
					maximum = 1;
					dfs(i, j, s[i][j], 1);
				}

				maxi = max(maxi, maximum);
				maximum = INT_MIN;

				for(int k = 0; k < h; k++) {
					for(int l = 0; l < w; l++) {
						visited[k][l] = 0;
					}
				}
			}
		}
		if(maxi <= 0) {
			cout << "Case " << cases <<":" << " " << 0 << "\n";
		} else {
			cout << "Case " << cases <<":" << " " << maxi << "\n";
		}
		cases++;
	}
}


void dfs(int i, int j, int value, int count) {
	visited[i][j] = true;	

	if((j + 1 < w) && (value + 1 == s[i][j + 1]) && visited[i][j+1] != true) {
		maximum = max(maximum, count + 1);
		dfs(i, j+1, s[i][j+1] , count + 1);
	}
	if((j - 1 >= 0) && (value + 1 == s[i][j-1]) && (visited[i][j-1] != true)) {
		maximum = max(maximum, count+1);
		dfs(i, j-1, s[i][j-1], count+1);
	}
	if((i + 1 < h) && (value + 1 == s[i+1][j]) && visited[i+1][j] != true) {
		maximum = max(maximum, count+1);
		dfs(i+1, j, s[i+1][j], count + 1);
	}
	
	if((i + 1) < h && (j - 1 >= 0) && (value + 1 == s[i+1][j - 1]) && visited[i+1][j - 1] != true) {
		maximum = max(maximum, count+1);
		dfs(i+1, j - 1, s[i+1][j-1] , count+1);
	}

	if((i + 1) < h && (j + 1 < w) && (value + 1 == s[i+1][j + 1]) && visited[i+1][j + 1] != true) {
		maximum = max(maximum, count+1);
		dfs(i+1, j + 1, s[i+1][j+1] , count+1);
	}





	if((i - 1 >= 0) && (value + 1 == s[i-1][j]) && (visited[i-1][j] != true)) {
//		cout << "index " << i - 1 << " "  << j << "satisfied" << endl;
		maximum = max(maximum, count + 1);
		dfs(i-1, j, s[i-1][j] , count+1);
	}

	if((i - 1 >= 0) && (j - 1 >= 0)  && (value + 1 == s[i-1][j-1]) && visited[i-1][j-1] != true) {
//			cout << "index " << i - 1 << " "  << j - 1 << "satisfied" << endl;
			maximum = max(maximum, count + 1);
			dfs(i-1, j - 1, s[i-1][j-1] , count+1);
	}
	if((i - 1 >= 0) && (j + 1 < w) && (value + 1 == s[i-1][j+1]) && visited[i-1][j+1] != true) {
//			cout << "index " << i - 1 << " "  << j + 1 << "satisfied" << endl;
			maximum = max(maximum, count+1);
			dfs(i-1, j+1, s[i-1][j+1], count + 1);
	}	
}
