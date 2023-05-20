#include<stdio.h>
#include<unistd.h>
#include "my_stdio.h"
#include "my_string.h"

int main(void)
{
    /*
    #pragma region NumberToChar
    int number = 6;
    char chr = NumberToChar(number);
    Printf(3, &chr);
    #pragma endregion
    */
    /*
    #pragma region CharToNumber
    char sayi_char = 52;
    int sayi = CharToNumber(sayi_char);
    Printf(2, &sayi);
    #pragma endregion
    */
    /*
    #pragma region Get_Char
    char ch = Get_Char(0);
    Printf(3, &ch);
    #pragma endregion
    */
    /*
    #pragma region Put_Char
    char tre = 'C';
    Put_Char(tre);
    #pragma endregion
    */
    /*
    #pragma region FGets
    char array[1024];

    FGets(array, 1024);
    #pragma endregion
    */
    /*
    #pragma region Puts
    Puts("Hello World");
    #pragma endregion
    */
    /*
    #pragma region Scanf
    char array2[1024];
    Scanf(1, array2, 1024);
    Printf(1, array2);
    #pragma endregion
    */
    /*
    #pragma region Printf
    char test[] = "Hello";
    Printf(1,test);

    int deg = 123;
    Printf(2, &deg);
    
    char test1 = 'D';
    Printf(3, &test1);
    #pragma endregion
    */
    /*
    #pragma region Length
    char array3[] = "Merhaba";
    int leng = Length(array3);
    Printf(2, leng);
    #pragma endregion
    */
    return 0;
}
