#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)


int main()
{
	fast_io;
    int n,k,l,c,d,p,nl,np;

	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int m1 = k*l;
	int p1 = m1/nl;
	int q1 = c*d;
	int w1 = p/np;

	int ans = min(p1,q1);
	ans = min(ans,w1);

	cout << ans/n << endl;







   	return 0;
}
