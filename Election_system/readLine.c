#include <stdio.h>
#include <string.h>

void readLine(char *buffer, int size){
    while(getchar() != '\n' && !feof(stdin));
    fgets(buffer, size, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
}