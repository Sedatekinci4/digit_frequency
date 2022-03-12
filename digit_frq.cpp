#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LIMIT 1000

int main()
{
	char str[MAX_LIMIT];
	int s = 0, i;
	char k, idk;
	int nums [10] = {0,0,0,0,0,0,0,0,0,0};
   	fgets(str, MAX_LIMIT, stdin);
  	char *p, *n;
  	for(i = 0; i<10; i++)
  	{
  		k = s+'0';
		p = strchr(str, k);
  		while (p != NULL)
  		{	
			
  			nums[i]++;
  			n = p;
  			if (n[0] == s+'0') n++;
  			p = strchr(n, k);
  			//printf("%s", p);
  		}
  		//printf("%d ", nums[i]);
		s++;
  	}
  	//printf("\n");
  	for(i = 0; i< 10; i++)
  		printf("%d --> %d \n" ,i, nums[i]);
  	return 0;
}
