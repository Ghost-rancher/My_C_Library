#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "my_stdio.h"
#include "my_string.h"

#pragma region NumberToChar

char NumberToChar(int deger)
{
	if(deger < 0 || deger > 9)
	{
		printf("Bir sayi girin.");
	}
	else
	{
		char i = 48;
		int y = 0;
		while(i != 58)
		{
			if(deger == y)
			{
				return i;
			}
			y++;
			i++;
		}
		return 0;
	}
}

#pragma endregion

#pragma region CharToNumber

int CharToNumber(char deger)
{
	if(deger < 47 && deger > 57)
	{
		printf("Bir char girin.");
	}
	else
	{
		char i = 48;
		int y = 0;
		while(i != 58)
		{
			if(deger == i)
			{
				return y;
			}
			y++;
			i++;
		}
		return 0;
	}
}

#pragma endregion

#pragma region Get_Char

char Get_Char(int deg)
{
	char r;
	read(0, &r, 1);
	if(deg == 0)
	{
		char c;
		while (read(0, &c, 1) > 0 && c != '\n');
	}
	//fflush(stdin); 
	return r;
}

#pragma endregion

#pragma region Put_Char

void Put_Char(char t)
{
	write(0, &t, 1);
}

#pragma endregion

#pragma region FGets

int FGets(char *test, int len)
{
	char c;
	int y = 0;
	while ((c = Get_Char(1)) != '\n' && y != len)
	{
		test[y] = c;
		y++;
	}

	test[y] = '\0';

	return 1;
}

#pragma endregion

#pragma region Puts

void Puts(char* test)
{
	int len = Lenght(test);
	write(0, test, len);
}

#pragma endregion

#pragma region Scanf

int Scanf(int mod,void *deger, int leng)
{
	if(mod == 1)
	{
		FGets((char *)deger, leng);

	}
	else if(mod == 2)
	{
		FGets((char *)deger, leng);
		int *ptr = (int *)deger;
		*ptr = atoi((char *)deger);
	}
	return -1;
}

#pragma endregion

#pragma region Printf

int Printf(int mod,void *deger)
{
	if (mod == 1)
	{
		char *chararray = (char*)deger;
		Puts(chararray);
	}
	else if (mod == 2)
	{
		int *dh = (int*)deger;
		char array[1024];
		int g = 0;
		int dg = *dh;
		while(dg > 0)
		{
			int rakam = dg % 10;
			array[g] = NumberToChar(rakam);
			dg /= 10;
			g++;
		}
		int len = Lenght(array);
		while(len > -1)
		{
			Put_Char(array[len]);
			len--;
		}
	}
	else if (mod == 3)
	{
		char char_ = *(char*)deger;
		Put_Char(char_);
	}
}

#pragma endregion

#pragma region tamalanicaklar_bazi_fonksiyonlar

/*int CharArrayToInt(char* test)
{
	int len = Length(test);
	int f;
	while(len > 0)
	{
		int deg = CharToNumber(test[len]);
		len--;
	}
	return;
}*/

#pragma endregion
