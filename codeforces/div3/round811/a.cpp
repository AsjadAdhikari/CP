#include<bits/stdc++.h>

using namespace std;

long long int KeyCount(vector< long long int >& v ,long long int key){
	long long int x =0;
	for( long long int i =0;i < v.size() ;i++){
		if(key == v[i])
			x++;
	}
	return x;
};

int main(){
	long long int t ;
	cin >> t;
	while( t--){

	long long int n;
	cin >> n;
	
	vector< long long int > a;
	vector< long long int > v;
	set < long long int > s;
	for( long long int i =0;i < n ;i++){
		long long int y;
		cin >> y;
		a.push_back( y);
		
	}
	for( long long int i =n-1;i >= 0 ;i--){
		
		v.push_back(a[i]);
		s.insert(a[i]);

	}
	vector < long long int > v1;
	for( auto& str:s){
		long long int d = str;
		v1.push_back(d);
	}
	long long int count=0,j=0,key;
	while(true){
		 key =v1[j];

		 if(KeyCount(v,key)<=1){
				j++;
				if(j==v1.size()){
					break;
				}
		}
		 else{
			 v.pop_back();
			 count++;
		 }
	}

	cout << count<< endl;	
}
	
}
