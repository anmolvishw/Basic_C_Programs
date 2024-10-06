#include <stdio.h>
#include <math.h>

double equilateralArea(double a);
double equilateralPerimeter(double a);
double isoscelesArea(double a, double b);
double isoscelesPerimeter(double a, double b);
double scaleneArea(double a, double b, double c);
double scalenePerimeter(double a, double b, double c);

int main() {
    double a, b, c;

    printf("Enter First Second Third Triangle Size : \n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a==b && b==c){
        printf("Triangle is equilateral\n");
        printf("Area: %.2lf\n", equilateralArea(a));
        printf("Perimeter: %.2lf\n", equilateralPerimeter(a));
    }else if (a==b || b==c || c==a){
        printf("Triangle is isosceles\n");
        printf("Area: %.2lf\n", isoscelesArea(a, b));
        printf("Perimeter: %.2lf\n", isoscelesPerimeter(a, b));
    }else{
        printf("Triangle is scalene\n");
        printf("Area: %.2lf\n", scaleneArea(a, b, c));
        printf("Perimeter: %.2lf\n", scalenePerimeter(a, b, c));
    }

    return 0;
}


double equilateralArea(double a) {
    return (sqrt(3) / 4) * a * a;
}

double equilateralPerimeter(double a) {
    return 3 * a;
}

double isoscelesArea(double a, double b) {
    return (b / 4) * sqrt(4 * a * a - b * b);
}

double isoscelesPerimeter(double a, double b) {
    return 2 * a + b;
}

double scaleneArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double scalenePerimeter(double a, double b, double c) {
    return a + b + c;
}
