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
	int s1,s2,s3,s4;

	cin >> s1 >> s2 >> s3 >> s4;
	int count = 0;
	int ar[4] = {s1,s2,s3,s4};
	sort(ar,ar+4);

	for(int i=0;i<3; i++){
		if(ar[i]==ar[i+1]){
			count++;
		}
	}

	cout << count << endl;

     	return 0;
}
