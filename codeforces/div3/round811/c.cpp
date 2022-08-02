#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
	int s;
	vector< int > v;

	cin >> s ;
	int sum =0;
	for( int i= 9 ; i>=0; i-- ){
		if(sum+i <=s){
			v.push_back(i);
			sum+=i;
		}
		if(sum ==s ){
			break;
		}
	}
	for( int i = v.size()-1 ;i>=0 ;i--){
		cout << v[i];
	}
	cout << endl;
}
}

