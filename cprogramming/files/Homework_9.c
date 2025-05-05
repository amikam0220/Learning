#include <stdio.h>
#include <stdlib.h>
#define Lsize 120
int checkupperletter(char letter)
{
    return (letter <= 'Z') && (letter >= 'A');
}
int main()
{
    FILE *infile;
    FILE *outfile1;
    FILE *outfile2;
    infile = fopen("test.txt", "r");
    outfile1 = fopen("outputfile1.txt", "w");
    outfile2 = fopen("outputfile2.txt", "w");
    if (infile == NULL || outfile1 == NULL || outfile2 == NULL)
    {
        printf("Failed.\n");
        return 1;
    }
    char tmpline[120] = {0};
    while (fgets(tmpline, 121, infile) != NULL)
    {
        int cnt = 0;
        char tmpchr;
        for (int i = 0; tmpline[i] != '\0'; i++)
        {
            if (checkupperletter(tmpline[i]))
            {
                cnt++;
            }
        }
        if (cnt % 3 == 0)
        {
            fputs(tmpline, outfile1);
        }
        else
        {
            fputs(tmpline, outfile2);
        }
    }
    fclose(infile), fclose(outfile1), fclose(outfile2);
    return 0;
}