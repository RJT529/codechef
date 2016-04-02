#include<stdio.h>
#include<math.h>
void main()
{
	int t;
	scanf("%d",&t);
	int counter = 0;
	while(t--) {
		
		int a,b;
		int c,d;
		int e,f;
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		int m1 = 0, m2 = 0, m3 = 0;
		m1 = ((a-c)*(a-c) + (b-d)*(b-d));
		m2 = ((a-e)*(a-e) + (b-f)*(b-f));
		m3 = ((c-e)*(c-e) + (d-f)*(d-f));
//		printf("\n%d %d %d\n",m1,m2,m3);		
		if(m1 == m2 + m3) {
			counter++;
		}
		else if  (m2 == m1 + m3) {
			counter++; 
		}
		else if (m3 == m2 + m1) {
			counter++;
		}

	}
	printf("%d",counter);
}
