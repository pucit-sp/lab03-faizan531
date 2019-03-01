#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceAll(char *str, const char *oldWord, const char *newWord)
{
    char *pos, temp[1000];
    int index = 0;
    int owlen;
    owlen = strlen(oldWord);
    while ((pos = strstr(str, oldWord)) != NULL)
    {

        strcpy(temp, str);

        index = pos - str;

        str[index] = '\0';


        strcat(str, newWord);
        

        strcat(str, temp + index + owlen);
    }
}

void myreplace(FILE *fp,char *find, char* replace)
{
    FILE * fTemp;
    char buffer[1000];
    fTemp = fopen("replace.tmp", "w"); 
    if (fp == NULL || fTemp == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }
    while ((fgets(buffer, 1000, fp)) != NULL)
    {
        replaceAll(buffer, find, replace);
        fputs(buffer, fTemp);
    }
    fclose(fTemp);
    printf("\nSuccessfully replaced all occurrences of '%s' with '%s'.\n", find, replace);
}
int main(int argc, char *argv[])
{
	char *filename=argv[1];
	char find[100], replace[100];
	FILE * fPtr=fopen(filename,"r");
	printf("Enter word to replace: ");
	scanf("%s", find);
	printf("Replace '%s' with: ",find);
	scanf("%s", replace);
	myreplace(fPtr,find,replace);
	remove(filename);
	rename("replace.tmp", filename);
	return 0;
}
