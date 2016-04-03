#include<stdio.h>
void main()
{
int t;
int n;
int i;
int arr[3] = {0,0};
int sum;
scanf("%d",&t);
while(t--) {
	scanf("%d",&n);
	sum = 0;
	for(i = 0; i < n; i++) {
		scanf("%d",&arr[1]);
		if(i == 0){
			arr[0] = arr[1];
			continue;
		}
		if(arr[0] < arr[1]) {
			sum = sum+arr[0];
		} else {
			arr[0] = arr[1];
			sum = sum + arr[0];
		}
	}
	printf("%d\n",sum);	

}


}
