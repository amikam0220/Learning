/* All of rio function implementations are obtained from csapp.c */
/* Please note the usage of wrapper function */

/* $begin cpfile */
#include "csapp.h"

int main(int argc, char **argv) 
{
    int n;
    int size = 10;
    char buf[MAXLINE];

    while((n = Rio_readn(STDIN_FILENO, buf, size)) != 0) 
	Rio_writen(STDOUT_FILENO, buf, n);
    exit(0);
}
/* $end cpfile */