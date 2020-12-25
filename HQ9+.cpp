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
    string s;
	cin >> s;
	bool check = false;

	for(char c:s){
		if(c=='H' || c=='Q' || c=='9'){
			check = true;
		}
	}
	cout << (check ? "YES" : "NO") << endl;


   	return 0;
}
