#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "my_stdio.h"
#include "my_string.h"

int Scanf(int mod,void *deger, int leng)
{
	if(mod == 1)
	{
		int i = 0;
		char test[leng];
		char read_;
		while(read_ != '\n')
		{
			read(0, &read_, 1);
			if(read_ != '\n')
			{
				test[i] = read_;
				i++;
			}
		}
		test[i] = '\0';
		int h = 0;
		while(h != i)
		{
			((char *)deger)[h] = test[h];
			h++;
		}
		((char *)deger)[i] = '\0';
	}
	else if(mod == 2)
	{
		int i = 0;
		char test[leng];
		char read_;
		while(read_ != '\n')
		{
			read(0, &read_, 1);
			if(read_ != '\n')
			{
				test[i] = read_;
				i++;
			}
		}
		int d = 0;
		char f = 48;
		int len = Lenght(test);
		while(d < len)
		{
			f = 48;
			while(f != 58)
			{
				if(test[d] == f)
				{
					break;
				}
				if(f == 57)
				{
					printf("hata");
					exit(0);
				}
				f++;
			}
			d++;
		}
		*(int*)deger = atoi(test);
		((char *)deger)[i] = '\0';
	}
	else
	{
		printf("Hatali mod");
		exit(0);
	}
	return -1;
}