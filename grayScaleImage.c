#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN

   // YOUR CODE HERE - END
   return w*h;
}/*
int main() {
    int width, height;
    printf("Entrez la largeur de l'image : ");
    scanf("%d", &width);
    printf("Entrez la hauteur de l'image : ");
    scanf("%d", &height);
    // Appel de la fonction pour calculer la taille de l'image
    float imageSize = grayScaleImage(width, height);

    // Affichage de la taille de l'image
    printf("La taille de l'image en niveaux de gris est : %.2f bytes\n", imageSize);

    return 0;
}*/