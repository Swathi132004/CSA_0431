#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main() {
 int msgid = msgget(IPC_PRIVATE, 0666 | IPC_CREAT);
 msgsnd(msgid, "Hello", sizeof("Hello"), 0);
 msgrcv(msgid, "Hello", sizeof("Hello"), 0, 0);
 msgctl(msgid, IPC_RMID, NULL);
 return 0;
}

