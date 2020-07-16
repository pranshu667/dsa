#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[1007],i,b,j,k,m;
	for(cin>>t;t--;puts("")){
		set<int> s;
		for(cin>>n,i=0;i<n;i++){
			cin>>b;
			for(j=2;b%j;j++);
			a[i]=j;
			s.insert(j);
		}
		cout<<s.size()<<endl;
		set<int>:: iterator k=s.begin();
		for(m=1;k!=s.end();k++,m++)
			for(i=0;i<n;i++)
				if(a[i]==*k) a[i]=m;
		for(i=0;i<n;i++) cout<<a[i]<<' ';
	}
	return 0;
}
