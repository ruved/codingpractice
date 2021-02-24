#include <bits/stdc++.h>
using namespace std;
int main(){
	int T, N, id, sum, root;
	cin>>T;
	while(T--){
		cin>>N;
		root=0;
		while(N--){
			cin>>id>>sum;
			// Every node appears once as an id, and
			// every node except for the root appears
			// once in a sum.  So if we subtract all
			// the sums from all the ids, we're left
			// with the root id.
			root+=id-sum;
		}
		cout<<root<<endl;
	}
	return 0;
}