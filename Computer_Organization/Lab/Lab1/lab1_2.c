#include <stdio.h>    //For input/output
#include <stdint.h>   //For int32_t
#include <stdlib.h> //For exit() function

int main()
{

    FILE *my_file_pointer;
    if ((my_file_pointer = fopen("lab1_2_out.txt", "w")) == NULL)
    {
        printf("Error opening the file, so exiting\n");
        exit(1);
    }


    // Code segment for file I/O

    fprintf(my_file_pointer, "The sizes of different data type for this machine and compiler are -\n");
    fprintf(my_file_pointer, "char data type is %d bytes or %d bits long\n", sizeof(char), sizeof(char) * 8);
    fprintf(my_file_pointer, "unsigned char data type is %d bytes or %d bits long\n", sizeof(unsigned char), sizeof(unsigned char) * 8);
    fprintf(my_file_pointer, "short data type is %d bytes or %d bits long\n", sizeof(short), sizeof(short) * 8);
    fprintf(my_file_pointer, "unsigned short data type is %d bytes or %d bits long\n", sizeof(unsigned short), sizeof(unsigned short) * 8);
    fprintf(my_file_pointer, "int data type is %d bytes or %d bits long\n", sizeof(int), sizeof(int) * 8);
    fprintf(my_file_pointer, "unsigned int data type is %d bytes or %d bits long\n", sizeof(unsigned int), sizeof(unsigned int) * 8);
    fprintf(my_file_pointer, "long data type is %d bytes or %d bits long\n", sizeof(long), sizeof(long) * 8);
    fprintf(my_file_pointer, "unsigned long data type is %d bytes or %d bits long\n", sizeof(unsigned long), sizeof(unsigned long) * 8);
    fprintf(my_file_pointer, "int32_t data type is %d bytes or %d bits long\n", sizeof(int32_t), sizeof(int32_t) * 8);
    fprintf(my_file_pointer, "uint32_t data type is %d bytes or %d bits long\n", sizeof(uint32_t), sizeof(uint32_t) * 8);
    fprintf(my_file_pointer, "int64_t data type is %d bytes or %d bits long\n", sizeof(int64_t), sizeof(int64_t) * 8);
    fprintf(my_file_pointer, "uint64_t data type is %d bytes or %d bits long\n", sizeof(uint64_t), sizeof(uint64_t) * 8);
    fprintf(my_file_pointer, "char* data type is %d bytes or %d bits long\n", sizeof(char*), sizeof(char*) * 8);
    fprintf(my_file_pointer, "float data type is %d bytes or %d bits long\n", sizeof(float), sizeof(float) * 8);
    fprintf(my_file_pointer, "double data type is %d bytes or %d bits long\n", sizeof(double), sizeof(double) * 8);

    // Code segment for console I/O, this can be used instead of the file I/O

    printf("The sizes of different data type for this machine and compiler are -\n");
    printf("char data type is %d bytes or %d bits long\n", sizeof(char), sizeof(char) * 8);
    printf("unsigned char data type is %d bytes or %d bits long\n", sizeof(unsigned char), sizeof(unsigned char) * 8);
    printf("short data type is %d bytes or %d bits long\n", sizeof(short), sizeof(short) * 8);
    printf("unsigned short data type is %d bytes or %d bits long\n", sizeof(unsigned short), sizeof(unsigned short) * 8);
    printf("int data type is %d bytes or %d bits long\n", sizeof(int), sizeof(int) * 8);
    printf("unsigned int data type is %d bytes or %d bits long\n", sizeof(unsigned int), sizeof(unsigned int) * 8);
    printf("long data type is %d bytes or %d bits long\n", sizeof(long), sizeof(long) * 8);
    printf("unsigned long data type is %d bytes or %d bits long\n", sizeof(unsigned long), sizeof(unsigned long) * 8);
    printf("int32_t data type is %d bytes or %d bits long\n", sizeof(int32_t), sizeof(int32_t) * 8);
    printf("uint32_t data type is %d bytes or %d bits long\n", sizeof(uint32_t), sizeof(uint32_t) * 8);
    printf("int64_t data type is %d bytes or %d bits long\n", sizeof(int64_t), sizeof(int64_t) * 8);
    printf("uint64_t data type is %d bytes or %d bits long\n", sizeof(uint64_t), sizeof(uint64_t) * 8);
    printf("char* data type is %d bytes or %d bits long\n", sizeof(char *), sizeof(char *) * 8);
    printf("float data type is %d bytes or %d bits long\n", sizeof(float), sizeof(float) * 8);
    printf("double data type is %d bytes or %d bits long\n", sizeof(double), sizeof(double) * 8);

    fclose(my_file_pointer); // To close the output file, mandatory to actually get an output !

    return 0;
}
