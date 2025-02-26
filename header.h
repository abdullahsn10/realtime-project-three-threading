#ifndef LIBRARIES
#define LIBRARIES

#include <GL/glut.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <limits.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <time.h>
#include <sys/sem.h>
#include <semaphore.h>
#include <pthread.h>
#include <sys/shm.h>
#include <errno.h>
#include <math.h>

#define B_SIZ (_PC_PIPE_BUF / 2)
#define PUBLIC "/tmp/PUBLIC"
struct message
{
    char fifo_name[50];
    char cmd_line[50];
};

#endif