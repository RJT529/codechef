#include<stdio.h>
#include<stdlib.h>
void main() 
{
	int t;
	scanf("%d",&t);
	while(t--) {
		char c;
		fflush(stdout);
		scanf("\n%c",&c);
		fflush(stdout);
		if(c == 'B' || c == 'b')
			printf("Battle Ship\n");
		if(c == 'C' || c == 'c')
			printf("Cruiser\n");
		if(c == 'D' || c == 'd')
			printf("Destroyer\n");
		if(c == 'F' || c == 'f')
			printf("Frigate\n");
	}

}
