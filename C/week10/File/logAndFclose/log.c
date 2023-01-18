#include <stdio.h>
int main()
{
    FILE *logFile, *inputFile;
    logFile = fopen("log.txt", "a");
    inputFile = fopen("hijibiji", "r");
    if (inputFile == NULL)
    {
        fprintf(logFile, "Not found! at 10:35 AM\n");
        return 0;
    }
    fclose(inputFile);
    return 0;
}