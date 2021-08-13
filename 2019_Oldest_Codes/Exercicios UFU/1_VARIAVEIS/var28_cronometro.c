#include <stdio.h>
#include <unistd.h> // sleep() | Para linux, windows.h para windows
int main(){
    int i = 0, seconds = 0, minutes = 0, hours = 0;
    
    do{
        if(seconds == 60){
            seconds = 0;
            minutes++;
        }
        if(minutes == 60){
            minutes = 0;
            hours++;
        }
        if(hours == 24){
            hours = 0;
        }
        
        if(hours >= 10 && minutes > 10 && seconds > 10)
        printf("%d:%d:%d\n", hours, minutes, seconds);
        
        if(hours < 10 && minutes < 10 && seconds < 10)
        printf("0%d:0%d:0%d\n", hours, minutes, seconds);

        if(hours < 10 && minutes < 10 && seconds >= 10)
        printf("0%d:0%d:%d\n", hours, minutes, seconds);
        
        if(hours < 10 && minutes >= 10 && seconds > 10)
        printf("0%d:%d:%d\n", hours, minutes, seconds);
        
        sleep(1);
        printf("\e[H\e[2J");
        seconds++;
    }while(i == 0);

    return 0;
}