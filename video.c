#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
      float colored_image_size=3*w*h*fps*durationMovie;
      float black_white_image_size=w*h*fps*durationCredits;
      float video_size=colored_image_size*8+black_white_image_size*1;

      if(strcmp(unit, "bt") == 0){
      return video_size/8;
    }else if (strcmp(unit, "ko") == 0)
    {
      return (video_size/8)/1024;
    }else if (strcmp(unit, "mo") == 0)
    {
      return ((video_size/8)/1024)/1024;
    }else if (strcmp(unit, "go") == 0)
    {
      return (((video_size/8)/1024)/1024)/1024;
    }else return video_size;
   // YOUR CODE HERE - END
   return 0;
}/*
int main() {
    int width, height, durationMovie, durationCredits, fps;
    char unit[10];

    // Entrées utilisateur
    printf("Entrez la largeur de l'image : ");
    scanf("%d", &width);

    printf("Entrez la hauteur de l'image : ");
    scanf("%d", &height);

    printf("Entrez la durée de la section couleur (en secondes) : ");
    scanf("%d", &durationMovie);

    printf("Entrez la durée de la section noir et blanc (en secondes) : ");
    scanf("%d", &durationCredits);

    printf("Entrez les FPS (Frames Per Second) : ");
    scanf("%d", &fps);

    printf("Entrez l'unité (bytes, KB, MB, GB) : ");
    scanf("%s", unit);

    // Calcul et affichage de la taille
   printf("La taille de la vidéo est : %.2f %s\n", video(width, height, durationMovie, durationCredits, fps, unit), unit);
    

    return 0;
}*/