//not a unix command

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(void){
    
    //original string
    char *s = get_string("Enter your string: ");
    
    //allocate momory for new string 
    char *t = malloc(strlen(s)+1);
    
    //null check
    if(t == NULL){
       return 1;
    }
    
    //copy s to t
    for(int i = 0, n = strlen(s); i <= n; i++){
        *(t+i) = *(s+i);//same as t[i] = s[i]
    }
    
    printf("copied string: %s\n",t);
    
    //release memory allocated by malloc
    free(t);
    
    return 0;
}
