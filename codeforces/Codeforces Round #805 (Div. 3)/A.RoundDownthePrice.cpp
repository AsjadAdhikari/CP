#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n ;
	cin >> n;
	while(n--){
	long long int x;
	cin >> x;
	long long int  K;
	for( K=0;;K++){
	
		if(pow(10,K) > x){
			K--;
			break;
		}
	}
	cout << x -(long long int) pow(10,K) << endl;
	}
}