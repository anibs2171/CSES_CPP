#include <bits/stdc++.h>

using namespace std;
long long int n;
int searching(vector<int> a){
	long long int mid=(n-1)/2;

	if(a[mid]==mid+1){
		for(long long int i=mid;i<a.size()+1;i++){
			if(a[i]==i+1){
				continue;
			}
			else{
				cout<<i+1;
				break;
			}
		}
	}
	else{
		for(long long int i=0;i<mid+1;i++){
			if(a[i]==i+1){
				continue;
			}
			else{
				cout<<i+1;
				break;
			}
		}
	}
	return 0;
}

int main(){
	//long long int n;
	cin>>n;
	vector <int> a;

	for(long long int i=0;i<n-1;i++){
		long long int ele;cin>>ele;
		a.push_back(ele);
	}
	sort(a.begin(),a.end());
	searching(a);
	return 0;
}
