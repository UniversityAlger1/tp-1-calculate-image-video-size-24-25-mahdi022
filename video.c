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
   // Taille d'un cadre en couleur : 24 bits par pixel
    float sizeColorFrameBits = (float)(w * h * 24);

    // Taille d'un cadre en noir et blanc : 8 bits par pixel
    float sizeGrayFrameBits = (float)(w * h * 8);

    // Taille totale des sections
    float totalColorBits = sizeColorFrameBits * fps * durationMovie;
    float totalGrayBits = sizeGrayFrameBits * fps * durationCredits;

    // Taille totale en bits
    float totalSizeBits = totalColorBits + totalGrayBits;

    // Conversion en fonction de l'unité demandée
    float result = 0.0;
    if (strcmp(unit, "bt") == 0) {
        result = totalSizeBits; // En bits
    } else if (strcmp(unit, "ko") == 0) {
        result = totalSizeBits / 1000.0; // En kilobits
    } else if (strcmp(unit, "mo") == 0) {
        result = totalSizeBits / 1000000.0; // En mégabits
    } else if (strcmp(unit, "go") == 0) {
        result = totalSizeBits / 1000000000.0; // En gigabits
    } else {
        // Unité non reconnue
        printf("Error: Invalid unit '%s'.\n", unit);
        return 0; // Retourne immédiatement en cas d'erreur
    }
 printf("The size of the video is: %.6f %s\n", result, unit);
    
   return 0;
}