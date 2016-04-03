#include<stdio.h>
#include<string.h>
void main()
{
	int n,i;
	int t;
	scanf("%d",&t);
	while(t--) {
		char s1[15],s2[15];
		scanf("%s",s1);
		scanf("%s",s2);
		n = strlen(s1);
		i = 0;
		while(s1[i] != '\0') {
			if(s1[i] == s2[i] || s1[i] == '?' || s2[i] == '?') {
				i++;
				continue;

			}
			break;
		}
		if(i != n) {
			printf("No\n");
		} else {
			printf("Yes\n");
		}


	}
}
