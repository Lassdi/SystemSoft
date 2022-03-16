#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *memPointer = NULL;

    memPointer = (char*) malloc(100 * sizeof(char));

    if(memPointer != NULL){
        printf("Dynamic memory allocation was successfull\n");
    } else {
        printf("Dynnamic memory allocation failed\n");
        return 0;
    }

    strcpy(memPointer, "I'm now in allocated memory.");

    printf("What's in the memory? \n%s\n", memPointer);

    free(memPointer);

}