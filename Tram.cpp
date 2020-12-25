#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
#define FOR(a) for(int i=0; i<a; i++)

int main()
{
	fast_io;

	int n;
	cin >> n;
	int ans = 0;
	int mx = 0;

	for(int i=0; i<n; i++){
		int x,y;
		cin >> x >> y;
		ans += y-x;
		mx = max(ans,mx);
	}

	cout << mx << endl;
     	return 0;
}
