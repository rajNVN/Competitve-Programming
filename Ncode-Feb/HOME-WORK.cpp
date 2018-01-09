#include<cstdio>
#include<bits/stdc++.h>
#define LONG long long int
#define MOD 1000000007 
using namespace std;


long long int a, b, c ,d ;
void fast_fib(long long int n,long long int ans[])
{
    if(n == 0)
    {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    fast_fib((n/2),ans);
    a = ans[0];             
    b = ans[1];             
    c = 2*b - a;
    if(c < 0)
        c += MOD;
    c = (a * c) % MOD;      
    d = (a*a + b*b) % MOD;  
    if(n%2 == 0)
    {
        ans[0] = c;
        ans[1] = d;
    }
    else
    {
        ans[0] = d;
        ans[1] = c+d;
    }
}



int main()
{
    
    long long int t ; 
    scanf("%lld",&t) ; 
    
    while(t--) {

    long long int n, a[2] = {} ; 
    scanf("%lld",&n) ; 
   
	fast_fib(n+2,a);
    
	printf("%lld\n",a[0]) ;
        
    }
	return 0;
}

