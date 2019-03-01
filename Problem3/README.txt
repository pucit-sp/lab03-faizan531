The program is template for 3rd task of exercise 3 that students are required to
 complete in a exercise. 

Write a program using C-standard I/O library in which main() function receives a file name, search string and replace string via command line arguments

if the name of executable is mygrep than, Pass the file and search string to a function void mygrep(FILE*, char*), which displays all the lines in that file  containing the string given to the function as second argument.

if the name of executable is myreplace than, Pass the file search string and replace string to a function void myreplace(FILE*, char*, char *), which displays all the lines in that file  containing the string given to the function as second argument and replaced first occurance of it with string given as third argument.


The main function is partially written. Complete the code of the following functions.


void mygrep(FILE *fp,char *find)

void myreplace(FILE *fp,char *find, char * replace)



Example of myreplace


if the string found is :

	This exercise is SP exercise 1.


and you have to replace exercise with exercise. 
than answer should be

 :	This exercise is SP exercise 1.
