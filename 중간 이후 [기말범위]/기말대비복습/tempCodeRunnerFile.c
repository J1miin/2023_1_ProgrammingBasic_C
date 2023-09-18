#include <stdio.h>
#include <string.h>
int main()
{
    char strArr[] = "my name is Mint";
    char seps[]=" \t\n";
    char * token;
    
    token=strtok(strArr,seps);
    while(token!=NULL){
        printf("%s \n",token);
        token = strtok(NULL,seps);
    }
    
    return 0;
}
