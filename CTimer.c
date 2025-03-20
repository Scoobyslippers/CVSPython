#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[]){
    printf("Timer started for: %s",argv[1]);
    printf("seconds");
    int TimeRemaining = atoi(argv[1]);
    for(int k = TimeRemaining; k>0; k--){
        printf("Time left: %d",TimeRemaining);
        TimeRemaining = TimeRemaining - 1;
        sleep(1000);
    }

    printf("Timer Up");

}