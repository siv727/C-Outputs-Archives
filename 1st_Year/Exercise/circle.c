#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct{
    int x;
    int y;
}Point;

typedef struct{
    Point center;
    float radius;
}Circle;

float diameter(Circle circ);
float area(Circle circ);
float circumference(Circle circ);

int main(){
    Circle circ;
    printf("Input the center and radius of the circle: ");
    scanf("%d %d %f", &circ.center.x, &circ.center.y, &circ.radius);
    printf("Diameter: %.2f\nArea: %.2f\nCircumference: %.2f", diameter(circ), area(circ), circumference(circ));
    return 0;
}

float diameter(Circle circ){
    return circ.radius*2;
}
float area(Circle circ){
    return PI*pow(circ.radius, 2);
}
float circumference(Circle circ){
    return 2*PI*circ.radius;
}