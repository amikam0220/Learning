// rcvfile.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/msg.h>   // <linux/msg.h> for old versions

#define MAXMSG 512
struct my_msg {
   long int my_msg_type;
   char some_text[MAXMSG];
} msg;

int main () {
   int msgid;
   long int msg_to_receive=0;
   
   msgid = msgget( 1234, 0666|IPC_CREAT );
   while (1) {
      msgrcv( msgid, &msg, BUFSIZ, msg_to_receive, 0 );
      printf( "You wrote:%s", msg.some_text );
      if (strncmp(msg.some_text, "end", 3) == 0)
         break;
   }

   msgctl( msgid, IPC_RMID, 0 );
   exit(0);
}

