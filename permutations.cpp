#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	if(n<=3&&n>1){
		cout<<"NO SOLUTION";
	}
	else{
		vector<long long int>a;
		for(long long int i=2;i<=n;i+=2){
			a.push_back(i);
		}
		for(long long int i=1;i<=n;i+=2){
			a.push_back(i);
		}
		for(long long int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}