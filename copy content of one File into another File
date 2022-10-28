#include<stdio.h>
#include<stdio.h>

void main()
{
    /*
        File_1.txt is the file with content and,
        File_2.txt is the file in which content of File_1
        will be copied.
    */
    FILE *fp1, *fp2;
    char ch;
    int pos;

    if ((fp1 = fopen("File_1.txt", "r")) == NULL)
    {
        printf("\nFile cannot be opened.");
        return;
    }
    else
    {
        printf("\nFile opened for copy...\n ");
    }
    fp2 = fopen("File_2.txt", "w");
    fseek(fp1, 0L, SEEK_END);   // File pointer at end of file
    pos = ftell(fp1);
    fseek(fp1, 0L, SEEK_SET);   // File pointer set at start
    while (pos--)
    {
        ch = fgetc(fp1);    // Copying file character by character
        fputc(ch, fp2);
    }
    fcloseall();
}
