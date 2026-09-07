// test4_2.c
// 子进程循环每秒显示一次"I am child",
// 父进程显示三次"How are you"后, 向子进程发送软中断信号，中断子进程的执行
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int goOnFlag;
void int12_func (int sig) {
   goOnFlag = 0;
}

int main() {
   int p1;
   while ((p1=fork()) == -1) /*!*/ ;
   if (p1 > 0) {   // 父进程
      printf( "父进程安装软中断信号12的处理程序 !\n" );
      signal( 12, int12_func );   // 安装软终端信号12
      for (int i=1; i <= 3; i++) {
         printf( "How are you!\n" );
         sleep(1);
      }
      printf( "向子进程发软中断信号12 !\n" );
      kill( p1, 12 );      // 向p1子进程发送软终断信号12
      wait(0);
      printf( "父进程退出!\n" );
      exit(0);
   } else {      // 子进程
      printf( "子进程安装软中断信号12的处理程序 !\n" );
      signal( 12, int12_func );   // 安装软终端信号12
      goOnFlag = 1;
      while (goOnFlag == 1) {
         printf( "I am child\n" );
         sleep(1);
      }
      printf( "Child exited!\n" );
      exit(0);
   }
}

