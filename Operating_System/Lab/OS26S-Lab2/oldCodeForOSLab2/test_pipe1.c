// test4_3.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char* argv[]) {
   int p1, fd[2];
   char outstr[50];
   char instr[50] = "This is a message!";
   if (pipe(fd) == -1) {      // 创建一个无名管道fd
      perror( "cannot create the IPC pipe!" );
      return 1;
   }

   while ((p1=fork()) == -1) /*!*/ ;
   if (p1 == 0)  {     // 子进程
      printf( "子进程写入的信息是：%s\n", instr );
      write( fd[1], instr, 50 );   // 向无名管道写入信息
      exit(0);
   } else {     // 父进程
      wait(0);
      read( fd[0], outstr, 50 );   // 从无名管道读出信息
      printf( "父进程读出的信息是：%s\n", outstr );
      exit(0);
   }
}

