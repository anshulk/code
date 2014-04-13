//cookie 

#include<stdio.h>

int main()
{
	int t,i ;  //test cases
	double c, f, x, r = 2.0, tp, tf, tt;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		tt = 0; r = 2.0; 
		scanf("%lf %lf %lf", &c, &f, &x);
		
		while(1)
		{
			tp = (x/r);
			tf = (c/r) + (x/(r+f));

			//printf("tp = %lf tf = %lf\n", tp, tf);
			
			if(tf < tp)
			{
				tt += c/r;
				r += f;
			}
			else 
			{
				printf("Case #%d: %.7lf\n", i+1, tt+tp);
				break;
			}
		}
	}

	return 0;
}
