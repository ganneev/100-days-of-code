/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>

int main() {
    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area of the rectangle is %.2f\n", area);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);

    return 0;
}