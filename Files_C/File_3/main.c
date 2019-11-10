#include <stdio.h>
#include <stdlib.h>

/**Global variabel for to keep count of characters**/
int count = 0;

/**
Description: This function opens the file, writes content into
file, brings the cursor at the beginning of the file and reverses
text in file.
@Param: *file
@Return: void
**/
void openFile(char *file)
{
    FILE *pFile;
    pFile = fopen(file,"w+");
    writeFile(pFile);
    rewind(pFile);
    reverseText(pFile);
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
Description: This function first gives the position of the file as its end using
fseek() function. It calculates total bytes stored in text file and stores in variable
called position. It then again uses fseek() function to indicate position from the end
of the file and prints text in reverse order.
@Param: *revFile
@Return: void
**/
void reverseText(FILE *revFile)
{
    int position = 0;
    char c;

    if((fseek(revFile,0,SEEK_END)) == 0)
    {
        printf("\nSeek successful");
    }
    else
    {
        printf("\nSeek unsuccessfull");
    }
    position = ftell(revFile);
    printf("\nPosition: %d\n",position);


    while(position>0)
    {
        if((fseek(revFile,position,SEEK_SET)) == 0)
        {
            c = fgetc(revFile);
            printf("%c",c);
            position--;
        }

    }
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
