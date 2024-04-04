#include <stdio.h>
void leftUp(){printf("\u250C");}
void leftDown(){printf("\u2514");}
void rightUp(){printf("\u2510");}
void horizontal(){printf("\u2500");}
void vertical(){printf("\u2502");}
void rightDown(){printf("\u2518");}
void newLine(){printf("\n");}
void clearConsole(){printf("\e[H\e[2J");}
int main(){
    // ┌ └ ┐ ┘│ ─ 
    clearConsole();
    int index;
    
    char texto[60];
    printf("Digite um texto: ");
    scanf("%[^\n]s",texto);
    newLine();
    for(index=0;texto[index];index++);
   
    for(int i = 0; i <= 10; i++){
        if(i==0)leftUp();
        if(i==1){
            int i = 0;
            while(i < index){
                horizontal();
                i++;
            }           
        }
        if(i==2)rightUp();
        if(i==3)newLine();
        if(i==4)vertical();
        if(i==5){printf("%s",texto);};
        if(i==6)vertical();
        if(i==7)newLine();
        if(i==8)leftDown();
        if(i==9){
            int i = 0;
            while(i < index){
                horizontal();
                i++;
            }     
        };
        if(i==10)rightDown();
    }

    return 0;
}