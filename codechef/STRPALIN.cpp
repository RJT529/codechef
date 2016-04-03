#include<iostream>
#include<map>
using namespace std;
int main()
{
	std::map<char, int> table;
	int t;
	cin>>t;
	int i;
	while(t--) {
		string a;
		string b;
		cin>>a;
		cin>>b;
		i = 0;	
		while(a[i] != '\0') {
			table[a[i]]++;	
			i++;
		}	
		i = 0;
		while(b[i] != '\0') {
			table[b[i]]++;
			i++;
		}
		typedef std::map<char,int>::iterator it;
		for (it iterator = table.begin(); iterator != table.end(); iterator++) {
			

		}
		table.clear();		
	}
	return 0;
}
