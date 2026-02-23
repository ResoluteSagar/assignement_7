#include <stdio.h>

float circleArea(float radius) {
    float area = (22.0/7.0) * radius * radius;
    return area;
}

int main() {
    float result = circleArea(10.5);
    printf("The area of the circle is %f\n", result);
    return 0;
}
