#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++){
		long long int x,y;cin>>x>>y;
		long long int ans;
		if(x==y){
			ans=(x*x)-x+1;
		}
		else if(x>y){
			if(x%2==0){
				ans=(x*x)-y+1;
			}
			else{
				ans=(x-1)*(x-1)+1+y-1;
			}
		}
		else if(y>x){
			if(y%2!=0){
				ans=(y*y)-x+1;
			}
			else{
				ans=(y-1)*(y-1)+1+x-1;
			}
		}
		
		cout<<ans<<endl;

	}
	return 0;
}