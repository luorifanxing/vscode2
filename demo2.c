#include<string.h>
#include<stdlib.h>
#include <stdio.h>

int main(void)
{
	int i = 0;
	for(i = 0; i < 20; i++)
	{
		printf("%d\n",i);
		if(i >= 7)
		{
			goto end;
		}
		if(i >= 6)
		{
			goto end;
		}
	}	
end:
	return 0;
}
