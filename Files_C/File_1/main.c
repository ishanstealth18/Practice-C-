#include <stdio.h>
#include <stdlib.h>

/**
Description: This function opens the file, writes content into
file, brings the cursor at the beginning of the file and counts the
number of lines in txt file.
@Param: *file
@Return: void
**/
void openFile(char *file)
{
    FILE *pFile;
    pFile = fopen(file,"w+");
    writeFile(pFile);
    rewind(pFile);
    countNumOfLines(pFile);
    closeFile(pFile);
}

/**
Description: This function writes content into file in txt file.
It uses fputc functions.
@Param: *wFile
@Return: void
**/
void writeFile(FILE *wFile)
{
    fputs("My name is Ishan.\n",wFile);
    fputs("My name is Bunty.\n",wFile);
    fputs("Bro!!\n",wFile);
    fputs("Bro!!!\n",wFile);
    fputs("Bro!!\n",wFile);
    fputs("Bro!!",wFile);

}

/**
Description: This function reads each character from file and counts
number of total lines in txt file. It uses fgetc functions.
@Param: *countFile
@Return: void
**/
void countNumOfLines(FILE *countFile)
{
    int count = 0;
    int c;
    while((c = fgetc(countFile)) != EOF)
    {
        if(c == '\n')
        {
            count++;
        }

    }
    printf("Total count: %d", count+1);
}

/**
Description: This function closes file and points it to NULL value.
It uses fclose functions.
@Param: *cFile
@Return: void
**/
void closeFile(FILE *cFile)
{
    fclose(cFile);
    cFile= NULL;
}

int main()
{
    char *fileName = "Test_File.txt";
    openFile(fileName);
    return 0;
}
