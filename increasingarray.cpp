#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;cin>>n;
	vector<int> a;
	for(long long int i=0;i<n;i++){
		int ele;cin>>ele;
		a.push_back(ele);
	}
	long long int count=0;
	for(long long int i=0;i<n-1;i++){
		if(a[i]<=a[i+1]){
			;
		}
		else{
			count+=a[i]-a[i+1];
			a[i+1]=a[i];
		}
	}
	cout<<count;
	return 0;
}