#include <stdio.h>

int main ()
{

    double width;
    double height;
    double perimeter;
    double area;

    width = 32.3;
    height = 15.3;
    perimeter = 0.0;
    area = 0.0;

    perimeter = (height+width)*2.0;
    area = width*height;

    printf("Width of the rectangle = %.2f\n",width);
    printf("Height of the rectangle = %.2f\n",height);
    printf("Perimeter = %.2f\n",perimeter);
    printf("Area = %.2f\n",area);

    return 0;
}



