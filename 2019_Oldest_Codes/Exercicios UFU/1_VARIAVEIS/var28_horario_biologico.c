/*
Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário
(hora, minuto e segundo) do termino da mesma.
*/

#include <stdio.h>
int main(){
    int hr, min, sec, time, day = 0;
{   //Entrada de dados sobre a hora
    printf("Digite as horas: ");
    scanf("%d", &hr);
    printf("Digite os minutos: ");
    scanf("%d", &min);
    printf("Digite os segundos: ");
    scanf("%d", &sec);    
    printf("Digite a duracao em segundos: ");
    scanf("%d", &time);
    printf("\e[H\e[2J");
}   
    //Coloca o zero no formato de um relógio
        if(hr >= 10 && min > 10 && sec > 10)
        printf("Horário anterior:%d:%d:%d\n", hr, min, sec);
        
        if(hr < 10 && min < 10 && sec < 10)
        printf("Horário anterior:0%d:0%d:0%d\n", hr, min, sec);

        if(hr < 10 && min < 10 && sec >= 10)
        printf("Horário anterior:0%d:0%d:%d\n", hr, min, sec);
        
        if(hr < 10 && min >= 10 && sec > 10)
        printf("Horário anterior:0%d:%d:%d\n", hr, min, sec);

    printf("Duração: %d segundos\n", time);

    sec += time;

    while(sec >= 60){
    min++;
    sec -= 60;
    }
    while(min >= 60){
    hr++;
    min -= 60;
    }
    while(hr >= 24){
    day++;
    hr -= 24;
    }

        if(day == 0){

            if(hr >= 10 && min > 10 && sec > 10)
            printf("Horário posterior:%d:%d:%d\n", hr, min, sec);
            
            if(hr < 10 && min < 10 && sec < 10)
            printf("Horário posterior:0%d:0%d:0%d\n", hr, min, sec);

            if(hr < 10 && min < 10 && sec >= 10)
            printf("Horário posterior:0%d:0%d:%d\n", hr, min, sec);
            
            if(hr < 10 && min >= 10 && sec > 10)
            printf("Horário posterior:0%d:%d:%d\n", hr, min, sec);

        }else{

            if(hr >= 10 && min > 10 && sec > 10)
            printf("Horário posterior: %d Dias %d:%d:%d\n", day, hr, min, sec);
            
            if(hr < 10 && min < 10 && sec < 10)
            printf("Horário posterior: %d Dias 0%d:0%d:0%d\n",  day, hr, min, sec);

            if(hr < 10 && min < 10 && sec >= 10)
            printf("Horário posterior: %d Dias 0%d:0%d:%d\n",  day, hr, min, sec);
            
            if(hr < 10 && min >= 10 && sec > 10)
            printf("Horário posterior: %d Dias 0%d:%d:%d\n",  day, hr, min, sec);
        }

    return 0;
}