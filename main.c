#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "includes.h"

struct ListFunc root[] = {
    { 50, "myPow", func50 }
};

int main(int argc, char **argv)
{
    if (argc == 2) {
        int count;
        int id = atoi(argv[1]);
        int size = sizeof(root) / sizeof(struct ListFunc);
        
        for (count = 0; count < size; count++)
            if (id == root[count].id)
                root[count].func();
    }
        
    return 0;
}
