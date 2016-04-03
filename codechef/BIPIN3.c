#include<stdio.h>
#include<math.h>
void main()
{
	unsigned long long int i;
	int t;
	scanf("%d",&t);
	while(t--) {
		unsigned long long int n,k;
		scanf("%llu %llu",&n,&k);
		unsigned long long int c =(int)( pow(((k-1)%(1000000000+7)),n-1))%(1000000000+7) ;
		c = ((k%(1000000000+7))*((c)%(1000000000+7))%(1000000000+7));
		
		printf("%llu\n",c);		
	}


}
