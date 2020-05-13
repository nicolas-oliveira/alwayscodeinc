#include <stdio.h>
#include <unistd.h> // sleep() | Para linux, windows.h para windows
int main() {
    int min = 24, sec = 60, pomodoro = 0, wish = 0;
    bool intervalo = false;
    printf("Escolha a quantidade de pomodoros:");
    scanf("%d",&wish);
    do {
        sec--;
        if(min == 0 && sec == 0) {
            pomodoro++;
            intervalo = !intervalo;
            if(intervalo){
                min = 4;
                sec = 60;
            }else if(pomodoro < wish){
                min = 24;
                sec = 60;
            }
        }
        printf("\e[H\e[2J");
        if(intervalo){
            printf("Hora de descansar!\n");
        }
        if(sec >= 10 && min >= 10){
            printf("Pomodoro: %d\n%d:%d\n",pomodoro,min,sec);
        }else if(sec < 10 && min >=10){
            printf("Pomodoro: %d\n%d:0%d\n",pomodoro,min,sec);
        }else if(sec >= 10 && min < 10){
            printf("Pomodoro: %d\n0%d:%d\n",pomodoro,min,sec);
        }else if(sec < 10 && min < 10){
            printf("Pomodoro: %d\n0%d:0%d\n",pomodoro,min,sec);
        }
        if(sec == 0) {
            min--;
            sec = 60;
        }
        sleep(1);
    } while((sec > 0 && min > 0) || pomodoro < wish);
    return 0;
}