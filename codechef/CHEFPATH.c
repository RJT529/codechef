#include<stdio.h>
void main()
{
	int t ;
	scanf("%d",&t);
	while(t--) {
		unsigned long long int n, m;
		scanf("%llu %llu",&n, &m);
		if(n%2 == 0 || m %2 == 0 ) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	
}
