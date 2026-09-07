// sender.c
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

// remove \n from the end of string
void remove_newline(char *str){
    str[strcspn(str, "\n")] = '\0';
}

int main(){
    int msgid;
    char buffer[BUFSIZ];

    msgid = msgget(1234, 0666|IPC_CREAT);
    msg.my_msg_type = 1;

    while (1){
        puts("Please Enter a person info.");

        // receive each member in the struct and remove \n
        puts("Name:");
        fgets(buffer, BUFSIZ, stdin);
        remove_newline(buffer);
        strcpy(msg.std.name, buffer);

        // end and set an empty object
        if (strncmp(msg.std.name, "end", 3) == 0){
            msg.std.gender[0] = '\0';
            msg.std.age[0] = '\0';
            msg.std.mobil[0] = '\0';
            msgsnd(msgid, &msg, sizeof(msg.std), 0);
            break;
        }

        puts("Gender:");
        fgets(buffer, BUFSIZ, stdin);
        remove_newline(buffer);
        strcpy(msg.std.gender, buffer);

        puts("Age:");
        fgets(buffer, BUFSIZ, stdin);
        remove_newline(buffer);
        strcpy(msg.std.age, buffer);

        puts("Number:");
        fgets(buffer, BUFSIZ, stdin);
        remove_newline(buffer);
        strcpy(msg.std.mobil, buffer);

        // more accurate size to send
        msgsnd(msgid, &msg, sizeof(msg.std), 0);
    }

    exit(0);
}