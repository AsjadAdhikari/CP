    #include<bits/stdc++.h>
     
    using namespace std;
     
    bool isnotthere(char s,vector< char>& v){
    	for( long long int i=0 ; i<v.size();i++){
    		if(v[i] == s){
    			return false;
    		}
    		
    	}
    	return true;
    };
     
    void emptyvector(vector< char >& v){
    	while(true){
     
    		v.pop_back();
    		if(v.size()==0){
    			break;
    		}
     
    	}
    };
    int main(){
    	int n ;
    	cin >> n;
    	while(n--){
    	string s;
    	cin >> s;
    	vector< char > v;
    	long long int count =0;
    	for( int i =0;i < s.size() ; i++){
    		if((isnotthere(s[i],v)) && (v.size() <= 3)){
    			v.push_back(s[i]);
    			if(v.size() == 3)
    				count++;
    		}
    			if(v.size() > 3 ){
    				i--;
    				emptyvector(v);
    			}	
     
    			if((v.size() <= 2) && (i==s.size()-1))
    				count++;
    	}
    	cout << count << endl;
    }
     
     
    }