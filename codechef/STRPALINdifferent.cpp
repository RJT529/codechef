#include<iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--) {
		string a;
		string b;
		cin>>a>>b;
		int i ,j;
		int flag = 0;
		for(i = 0; a[i]!= '\0'; i++) {
			for(j = 0; b[j] != '\0'; j++) {
				if(a[i] == b[j]) {
					flag = 1;
					break;
				}
			}

		}
		if (flag == 1) {
			cout<<("Yes\n");
		} else {
			cout<<("No\n");
		}
	}
	return 0;
}
