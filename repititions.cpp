#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int l=s.length();int max=1;

	for(int i=0;i<l-1;){
		char ch=s[i];int c=1;
		for(int j=i+1;j<l;j++){
			if(s[i]==s[j]){
				c++;
			}
			else{
				break;
			}
		}
		if(c>max){
			max=c;
		}
		i+=c;
	}

	cout<<max;
	return 0;
}