#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int a, b;
		cin>>a>>b;
		
		cout<<(abs(a-b)+9)/10<<endl;
		
	}
	return 0;
}