#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
     // Taille brute en bits
    float sizeInBits = (float)(w * h * 24);
    float result = 0.0;

    // Conversion selon l'unité demandée
    if (strcmp(unit, "bt") == 0) {
        result = sizeInBits; // En bits
    } else if (strcmp(unit, "ko") == 0) {
        result = sizeInBits / 1000.0; // En kilobits
    } else if (strcmp(unit, "mo") == 0) {
        result = sizeInBits / 1000000.0; // En mégabits
    } else if (strcmp(unit, "go") == 0) {
        result = sizeInBits / 1000000000.0; // En gigabits
    } else {
        printf("Error: Invalid unit '%s'.\n", unit);
        return 0; // Retourne 0 en cas d'erreur
    }
   return 0;
}