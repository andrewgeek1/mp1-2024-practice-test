// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <ctype.h>
size_t task3(char *s)
{
  size_t count = 0;
    
    while (*s != '\0') {
        if (islower((unsigned char)*s)) {
            count++;
        }
        s++;
    }
    
    return count;
}
