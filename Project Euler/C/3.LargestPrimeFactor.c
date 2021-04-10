#include<stdio.h>
#include<math.h>
void main()
{
	int num = 79, i = 2;
	while(i <= sqrt(num))
	{
		if(num%i == 0)
		{
			while(num%i==0)
        		{
            			num/=i;
        		}           
        		if(num==1)
        		{
            			num=i;
            			break;
        		}
		}
		else
		{
			i++;
		}
	}
	printf("%d",num);
}
