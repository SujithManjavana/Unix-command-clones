// Clone of linux cat command
#include <stdio.h>

void readFile(char *path)
{
    FILE *f = fopen(path, "r");
    if (f == NULL)
    {
        printf("Could not read file\n");
    }
    else
    {
        //read file character by character
        char ch;
        while ((ch = fgetc(f)) != EOF)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    fclose(f);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        readFile(argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
        return 1;
    }
    else
    {
        printf("File path expected.\n");
        return 1;
    }
    return 0;
}
