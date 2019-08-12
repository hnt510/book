#include <stdio.h>
#include <std;ib.h>
/*2.25*/
float sum_elements(float a[], unsigned length)
{
	int i;
	float result = 0;

	for (i = 0; i < length; ++i)
	{
		result += a[i];
	}
}

/*2.26*/


int main()
{
	float sum_arr[] = {1.1, 1.2, 1.3, 1.4, 1.5};
	sum_elements(sum_arr, 0);
		
	return 0;
}

