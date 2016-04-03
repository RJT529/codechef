#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	
	while(t--) {
		long int n;
		long int x = 0;
		scanf("%ld",&n);
		while(n--) {
			long int a;
			scanf("%ld",&a);
			x= x^a;
		}	
		printf("%ld\n",x);
	}


}
