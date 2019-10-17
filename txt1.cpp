
//1st Code
#include<bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main(){
	int tt,n;
	cin>>tt;
	while(tt--){
		cin>>n;
		int ar[n],cnt=0,tmp;
		for(int i=0;i<n;++i){
			scanint(ar[i]);
		}
		for(int i=n-1;i>cnt;--i){
			tmp=0;
			for(int j=0;j<i;++j){
				if(ar[j]-ar[i]*(ar[j]/ar[i])==0)
				++tmp;
			}
			if(tmp>cnt)
			cnt=tmp;
		}
			printf("%d\n", cnt);
	}
	return 0;
}

