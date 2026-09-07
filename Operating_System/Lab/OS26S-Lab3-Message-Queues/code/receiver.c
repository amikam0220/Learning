// receiver.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/msg.h>   // <linux/msg.h> for old versions

#define MAXMSG 50
struct my_msg{
    long int my_msg_type;
    struct stdmsg{
        char name[MAXMSG];
        char gender[MAXMSG];
        char age[MAXMSG];
        char mobil[MAXMSG];
    } std;
} msg;

int main(){
    int msgid;
    long int msg_to_receive=0;

    msgid = msgget(1234, 0666|IPC_CREAT);

    // the head of the table
    printf("Person Info as Follows:\n");
    printf("Name   Gender  Age  Mobile\n");
    printf("-------------------------\n");
    
    while (1){
        // receive the message from queue
        msgrcv(msgid, &msg, sizeof(msg.std), msg_to_receive, 0);
        
        // break if end
        if (strncmp(msg.std.name, "end", 3) == 0){
            break;
        }

        // format output
        printf("%-8s", msg.std.name);
        printf("%-8s", msg.std.gender);
        printf("%-5s", msg.std.age);
        printf("%-15s\n", msg.std.mobil);

    }

    // close the queue
    msgctl(msgid, IPC_RMID, 0);
    exit(0);
}

