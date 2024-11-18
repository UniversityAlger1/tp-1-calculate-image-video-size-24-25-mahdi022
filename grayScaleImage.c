#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // Calcul de la taille en octets
    float sizeInBytes = (float)(w * h);

    // Affiche la taille de l'image
    printf("The size of the grayscale image is: %.2f bytes\n", sizeInBytes);

   return 0;
}