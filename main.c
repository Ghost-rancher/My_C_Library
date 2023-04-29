#include<stdio.h>
#include<unistd.h>
#include "my_stdio.h"
#include "my_string.h"

int main(void)
{
    //Char arrayi kullanımı
    char test[1024];
    Scanf(1, &test, 1024);
    int len = Lenght(test);
    write(1, test, len);
    //int kullanımı
    int sayi;
    Scanf(2, &sayi, 1024);
    printf("%i", sayi);
    return 0;
}
