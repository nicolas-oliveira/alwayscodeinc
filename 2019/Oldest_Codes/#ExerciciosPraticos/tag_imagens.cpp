#include <iostream>
using namespace std;
int main(){
    char var[100];
    
    system("exiftool -geosync=-1.20 -geotag=track.log /home/nicolas/Downloads");

    
    return 0;
}