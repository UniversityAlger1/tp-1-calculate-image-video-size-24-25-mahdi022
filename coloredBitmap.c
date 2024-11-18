#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
    float size=w*h*3;
    if(strcmp(unit, "bt") == 0){
      return size*8;
    }else if (strcmp(unit, "ko") == 0)
    {
      return size/1024;
    }else if (strcmp(unit, "mo") == 0)
    {
      return (size/1024)/1024;
    }else if (strcmp(unit, "go") == 0)
    {
      return ((size/1024)/1024)/1024;
    }else return size;
    
   // YOUR CODE HERE - END
}/*
int main() {
    int width, height;
    char unit[10];

    printf("Entrez la largeur de l'image : ");
    scanf("%d", &width);

    printf("Entrez la hauteur de l'image : ");
    scanf("%d", &height);

    printf("Entrez l'unité (bytes, KB, MB, GB) : ");
    scanf("%s", unit);
    printf("La taille de l'image est : %.2f %s\n", coloredBitmap(width, height, unit), unit);
  
    return 0;
}*/