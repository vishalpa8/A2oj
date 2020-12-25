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
	string s,p,q;
	cin >> s >> p >> q ;

	sort(q.begin(),q.end());
	string s1 = s+p;

	sort(s1.begin(),s1.end());

	cout << (s1==q ? "YES" : "NO") << endl;
     	return 0;
}
