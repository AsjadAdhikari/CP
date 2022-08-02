#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;


	vector< vector< int > > v(n,vector< int > (2,0));
	int H,M;
	cin >> H >>M;
	for( int  i=0 ;i < n ;i++){
			int y, x;
			cin >> y >>x;
			v[i][0] = y;
			v[i][1] = x;
	}
	int min = 1000 ,value ,value1;
	for( int i =0 ; i<n ;i++){
		int min1 = -H +v[i][0] ;
		if(v[i][0]>=H && min1 < min){
			min =min1;
			value = v[i][0];
			value1 =v[i][1];

		}
	}
	
	cout << value  << " " <<abs( value1 ) << endl;
}

}
