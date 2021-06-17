#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long int
#define pb push_back
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define lb lower_bound
#define ub upper_bound
#define endl '\n'
#define um unordered_map
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define double long double
#define fast_fast_kardo_ji ios_base::sync_with_stdio(false); cin.tie(NULL);
//input order
// size of array,knapsack capacity, array of weight,array of values

int helper(int x,int capacity,vector<int> &a, vector<int> &b,vector<vector<int>> &dp){
    int n=a.size();
    if(x>=n)return 0;
    if(dp[x][capacity]!=-1)return dp[x][capacity];
    int ans=0;
    if(capacity>=b[x])ans=max(a[x]+helper(x+1,capacity-b[x],a,b,dp),helper(x+1,capacity,a,b,dp));
    else ans=helper(x+1,capacity,a,b,dp);
    return dp[x][capacity]=ans;
}
void solve(int n,vector<int> &val, vector<int> &wt, int capacity) {
	vector<vector<int>> dp(n+1,vector<int>(capacity+1,-1));
    int ans=helper(0,capacity,val,wt,dp);
    cout<<ans<<endl;
    return;
}

signed main(){
	/////////////
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif
	/////////////
	fast_fast_kardo_ji
	int n,capacity;cin>>n>>capacity;
	vector<int> wt(n,0),val(n,0);
	for(int i=0;i<n;i++)cin>>wt[i];
	for(int i=0;i<n;i++)cin>>val[i];
	solve(n,val,wt,capacity);
	return 0;
}