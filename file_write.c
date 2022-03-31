//not a unix command

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(){
    FILE *f;
    f = fopen ("file.csv", "a");
    char *name = get_string("enter name: ");
    char *num = get_string("enter number: ");
    fprintf(f, "%s, %s\n", name, num);
    fclose(f);
}
