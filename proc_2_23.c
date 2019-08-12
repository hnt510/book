#include <stdio.h>
#include "show_bytes.h"

int func(unsigned word)
 {
 	return (int) (( word << 24) >> 24);
 }


int func2(unsigned word)
{
	return ((int) word << 24) >> 24;
}

int main()
{
	unsigned w1 = 0x00000076;
	unsigned w2 = 0x87654321;
	unsigned w3 = 0x000000c9;
	printf("w1 func %x\n", func(w1));
	printf("w1 func2 %x\n", func2(w1));
	printf("w2 func %x\n", func(w2));
	printf("w2 func2 %x\n", func2(w2));	
	printf("w3 func %x\n", func(w3));
	printf("w3 func2 %x\n", func2(w3));	
	show_int(func(w1));
	show_int(func2(w1));
	show_int(func(w3));
	show_int(func2(w3));

	int x = 53191;			//0xcfc7
	short sx = (short) x;
	int y = sx;

	show_int(x);		
	show_short(sx);
	show_int(y);
	
	return 0;
}
