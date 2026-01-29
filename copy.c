#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) { //tips: the main function should be able to receive parameters from the command line
    if(argc<3)
        return 1;

    // Get the file names
    char* file1 = argv[1];
    char* file2 = argv[2];

    FILE  *fp1,*fp2;

    char ch;

    // Read the source file
    if((fp1=fopen(file1,"r"))==NULL)
       printf("Error: File doesn't exist!\n");

    // Create the target file
    if((fp2=fopen(file2,"w"))==NULL)
       printf("Error: File can't be created!\n");

    // Read and write the file
    while((ch=fgetc(fp1))!=EOF)
        fputc(ch,fp2);

    fclose(fp1);
    fclose(fp2);
	return 0;
}
