#include "stdio.h"
#include "string.h"
#include "stdlib.h"

char* replaceSpace(char* s){
    int sLen = strlen(s);
    char* rS = (char *) malloc((sLen+1)*sizeof(char));
    for (int i=0; i<sLen; i++){
        char tempC = *(s + i);
        if ( tempC == ' ')
            strcat(rS, "%20");
        else{
            printf("%c\n",tempC);
            char tempS[2] = {tempC, '\0'};
            strcat(rS, tempS);
        }
    }
    return rS;
}

int main(){
    char s[] =" Hello world. I will see you again.";
    char *rs = replaceSpace(s);
    for (int i = 0; i < strlen(rs); i++){
        printf("%c", rs[i]);
    }
    return 0;
}