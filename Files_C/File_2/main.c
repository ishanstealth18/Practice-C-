#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
Description: This function opens the file, writes content into
file, brings the cursor at the beginning of the file and converts lower case letters
to upper case letters and prints it to new file. Before renaming files it closes
both the files.
@Param: *file, *anotherFile
@Return: void
**/
void openFile(char *file, char *anotherFile)
{
    FILE *pFile;
    pFile = fopen(file,"w+");
    FILE *tempFile;
    tempFile = fopen(anotherFile,"w+");
    writeFile(pFile);
    rewind(pFile);
    convertUpper(pFile,tempFile);
    closeFile(pFile,tempFile);
    updateFileName();
}
/**
Description: This function writes content into file in txt file.
It uses fputc functions.
@Param: *wFile
@Return: void
**/
void writeFile(FILE *wFile)
{
    fputs("My name is Ishan\n",wFile);
    fputs("My name is Bunty\n",wFile);
    fputs("Bro\n",wFile);
    fputs("Bro\n",wFile);
    fputs("Bro\n",wFile);
    fputs("Bro",wFile);
}

/**
@Description: This function takes 2 file pointers and checks if any lower level
letters are present and converts them to upper case. It also writes the upper case letters
to new file.
@param: *convertFile, *tempFile
@return: void
**/
void convertUpper(FILE *convertFile, FILE *tempFile)
{

    char c;
    char upperChar;
    int count = 0;
    while((c = fgetc(convertFile)) != EOF)
    {
        if(!isupper(c))
        {
            count++;
            upperChar = toupper(c);
            fputc(upperChar,tempFile);
            printf("%c",upperChar);
        }
        else
        {
            fputc(c,tempFile);
            printf("%c",c);
        }

    }
}

/**
@Description: This function first removes the old file and renames the new file with
the original file name.
@param: NA
@return: void
**/
void updateFileName()
{
    remove("Test_File.txt");
    if(rename("Temp_File.txt","Test_File.txt"))
    {
        printf("\nName not changed!!");
    }
    else
    {
        printf("\nName changed..");
    }
}

/**
Description: This function closes file and points it to NULL value.
It uses fclose functions.
@Param: *cFile
@Return: void
**/
void closeFile(FILE *cFile, FILE *temp_File)
{
    fclose(cFile);
    cFile= NULL;
    fclose(temp_File);
    temp_File = NULL;
}


int main()
{
    char *fileName = "Test_File.txt";
    char *tempFile = "Temp_File.txt";
    openFile(fileName,tempFile);
    return 0;
}
