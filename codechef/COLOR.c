#include<stdio.h>
#include<string.h>

void main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		char c;
		int b=0,g=0,r=0;
			fflush(stdin);
			char s[100005];
			scanf("%s",s);
			int i =0;
			for(i = 0; i < strlen(s); i++) {			
				c = s[i];
				if(c == 'B')
					b++;
				if(c == 'R')
					r++;
				if(c == 'G') 
					g++;
			}
			fflush(stdin);		
		
		int max = b;
		if(max < r)
			max = r;
		if(max < g)
			max = g;
		printf("%d\n",strlen(s)-max);
	}
}
