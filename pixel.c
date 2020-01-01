#include "pixel.h"

Pixel* new_pixel(unsigned x, unsigned y, Color* color){
    Pixel* new_pixel = (Pixel*) malloc(sizeof(Pixel));
    new_pixel->x = x;
    new_pixel->y = y;
    new_pixel->color = color;

    return new_pixel;
}

void print_pixel(Pixel* pixel){
    printf("Coordinate: (x: %u, y: %u)\t Color: ", pixel->x, pixel->y);
    print_color(pixel->color);
}

int main(int argc, char const *argv[]){
    Color* red = new_color(255, 0, 0, 0);

    Pixel* pixel = new_pixel(1, 1, red);
    print_pixel(pixel);
    return 0;
}
