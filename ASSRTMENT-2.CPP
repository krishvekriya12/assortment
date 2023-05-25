#include<stdio.h>
main()
{
	int a[1000],i,n,first,second;
	printf("nter the arry size:-");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
			first=second;
				for(i=0;i<n;i++)
				{
					if(a[i]>first)
					{
						second=first;
						first=a[i];
					}
					else if(a[i]<first && a[i]>second)
					{
						second=a[i];
					}
				}
				printf("\nsecond largest number of arry:-%d",second);
			  
				
}