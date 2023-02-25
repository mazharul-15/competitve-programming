#include<bits/stdc++.h>
using namespace std;

int main() {

	int t, id;
	string str = "", str1;
	for(int i = 0;  i < 50; i++) str += "Yes";
	cin>> t;
	while(t--) {
		cin>> str1;
		//id = str.find(str1);
		//if(str1 == "Y" || str1 == "s") cout<<"NO\n";
		//else if(id > -1) cout<<"YES\n";
		if(str.find(str1) != string::npos) cout<<"YES\n";
		//if(str.contains(str1)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
