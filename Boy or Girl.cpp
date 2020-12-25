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
	map<char,int>mp;

	for(char c : s){
		++mp[c];
	}
	int count=0;
	for(auto i:mp){
		count++;
	}

	cout << (count%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
     	return 0;
}
