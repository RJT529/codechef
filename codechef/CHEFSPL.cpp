#include<iostream>
#include<string>

using namespace std;

int check(string x, string y)
{
	int lx = x.length();
	int ly = y.length();
	int i , j;
	int flag = 0;
	if(lx > ly) {
		for(i = 0, j = 0; x[i] != '\0' || y[j] != '\0';) {
			if(x[i] != y[j]) {
				i++;
				flag++;
				if(flag == 2)
					return 0;
				continue;
			} 
			i++;
			j++;
		}
	} else {
		 for(i = 0, j = 0; x[i] != '\0' || y[j] != '\0';) {
                        if(x[i] != y[j]) {
                                j++;
                                flag++; 
                                if(flag == 2)
                                        return 0;
                                continue;
                        }
                        i++;
                        j++;
                }

	}
	if(flag == 0 || flag == 1) 
		return 1;

}

int main() 
{
	int t;
	cin>>t;
	while(t--) {
		string a;
		cin>>a;
		string x,y;
		int l = a.length();
		int flag = 0;
		if(l%2 == 0) {
			y = a.substr(l/2,l);
			x = a.substr(0,l/2);
			if(y.compare(x) == 0) {
				flag = 1;
				cout<<("YES\n");
				continue;
			} 
				
		} else { 
			y = a.substr(l/2,l);
			x = a.substr(0,l/2);
			if(check(x,y)) {
				flag = 1;
                                cout<<("YES\n");
                                continue;
                        } 
			y = a.substr(l/2+1,l);
                        x = a.substr(0,l/2+1);
			if(check(x,y)) {
				flag = 1;
				cout<<("YES\n");
				continue;
			}
			
			
		}
		if(flag == 0) {
			cout<<("NO\n");
		}
	}
	return 0;

}
