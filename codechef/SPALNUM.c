#include<stdio.h>
void main()
{
	int arr[100004] = {0,0};
	int n;
	int x;
	int i,sum1 =0,sum = 0;
	for(i = 1; i < 100004; i++) {
		n = i;
		sum = 0;
		while(n!=0) {
			x = n%10;
			sum = sum*10 + x;
			n= n/10;		
		}
//                printf("i:%d sum:%d",i,sum);
	
		if(i == sum)
			sum1 = sum1 + sum;
  //              printf(" sum1:%d\n",sum1);

		arr[i] = sum1;
	}

//	for(i = 1; i < 20; i++) {
//		printf("%d: %d\n",i,arr[i]);
//	}
	scanf("%d",&n);
	while(n--) {
		int l,r;
		scanf("%d %d",&l,&r);
		printf("%d\n",arr[r]-arr[l-1]);

	}

}
