#include<string.h>
#include<stdlib.h>
#include <stdio.h>

int main(void)
{
	int i = 0;
	for(i = 0; i < 20; i++)
	{
		printf("%d\n",i);
		if(i >= 3)
		{
			goto end;
		}
	}	
end:
	return 0;
}
