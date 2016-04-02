#include<stdio.h>
#include<string.h>
void main() 
{
	int t;
	scanf("%d",&t);
	while(t--) {
		char s[100005];
		scanf("%s",s);
		char c[4];
		int l = strlen(s);
		int i = 0;
		int flag = 0;
		if(l>2) {
			for(i=0; i <= l-3; i++) {
				c[0] = s[i];
				c[1] = s[i+1];
				c[2] = s[i+2];
				c[3] = '\0';
				if(strcmp(c,"010")==0 || strcmp(c,"101") == 0) {
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1) {
			printf("Good\n");
		} else {
			printf("Bad\n");
		}
	}

}
