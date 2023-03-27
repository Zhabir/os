#include <stdio.h>
#include <stdlib.h>
void readFiles(int argc, const char* file1, const char* file2)
{
    //open files
    FILE* f1 = fopen(file1, "r");
    FILE* f2 = fopen(file2, "r");

    char ch;

    //CHECK IF FILES ARE NULL   
    if (f1 != NULL && f2 != NULL)
    {
        //check end of file1
        while (!feof(f1))
        {
            ch = getc(f1);  //read file by var
            if (ch != EOF) putchar(ch);     //output symbol
        }
        fclose(f1); //closing file1

        //check end of file2
        while (!feof(f2))
        {
            ch = getc(f2);  //read file by var
            if (ch != EOF) putchar(ch); //output symbol
        }
        fclose(f2); //closing file2
    }
}

int main(int argc, char* argv[])
{
    readFiles(2, argv[1], argv[2]);
}
