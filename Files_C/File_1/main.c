#include <stdio.h>
#include <stdlib.h>




void openFile(char *file)
{
    FILE *pFile;
    pFile = fopen(file,"w+");
    writeFile(pFile);
    rewind(pFile);
    countNumOfLines(pFile);
    closeFile(pFile);
}


void writeFile(FILE *wFile)
{
    fputs("My name is Ishan.\n",wFile);
    fputs("My name is Bunty.\n",wFile);
    fputs("Bro!!\n",wFile);
    fputs("Bro!!!\n",wFile);
    fputs("Bro!!\n",wFile);
    fputs("Bro!!",wFile);

}

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

void closeFile(FILE *cFile)
{
    fclose(cFile);
    cFile= NULL;
}

int main()
{
    char *fileName = "Test_File.txt";
    //pFile = fopen("Test_File.txt","w+");
    //fputs("Hi my name is ishan.",pFile);
    //fclose(pFile);
    openFile(fileName);
    //writeFile(&pFile);
    //closeFile(&pFile);
    return 0;
}
