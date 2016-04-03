#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--) {
		unsigned long long int c =0;
		unsigned long long int k, r,g,b;
		scanf("%llu %llu %llu %llu",&r,&g,&b,&k);
		unsigned long long int min = r;
		if(g< min)
			min = g;
		if(b < min )
			min = b;
		if(min >= k) {
			printf("%llu\n", (k-1)*3 + 1);
		} else if ( min < k) {
			unsigned long long int c;
			c = min*3;
			k = k - min;
			if(min == r) {
				g = g - min;
				b = b - min;
				min = g;
				unsigned long long int max = b;
				if(b < min ){
					min = b;
					max = g;
				}
				if(min >= k) {
					printf("%llu\n",c+ (k-1)*2 + 1);
				} else {
					c = c+ min*2 + k - min ;
					printf("%llu\n",c);
					
				}
			} else if (min  == g) {
				r = r - min;
                                b = b - min;
                                min = r;
                                unsigned long long int max = b;
                                if(b < min ){
                                        min = b;
                                        max = r;
                                }
                                if(min >= k) {
                                        printf("%llu\n",c+ (k-1)*2 + 1);
                                } else {
                                        c = c+ min*2 + k - min ;
                                        printf("%llu\n",c);

                                }
                        } else {
				  r = r - min;
                                g = g - min;
                                min = r;
                                unsigned long long int max = g;
                                if(g < min ){
                                        min = g;
                                        max = r;
                                }
                                if(min >= k) {
                                        printf("%llu\n",c+ (k-1)*2 + 1);
                                } else {
                                        c = c+ min*2 + k - min ;
                                        printf("%llu\n",c);

                                }

			} 
		}
	}

}
