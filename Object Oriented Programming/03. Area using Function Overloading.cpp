//Calculate the area of circle, rectangle and triangle using function overloading
#include<iostream>
#define PI 3.1416
using namespace std;

double area(double radius){
    return (PI*radius*radius);
}

double area(double length, double width){
    return (length*width);
}

double area(double half, double base, double height){
    return (half*base*height);
}

int main()
{
    double r,l,w,b,h;
    cout<<"Enter the radius of a circle: ";
    cin>>r;
    cout<<"Area of the circle: "<<area(r)<<" square unit\n\n";
    cout<<"Enter the length and width of a rectangle: ";
    cin>>l>>w;
    cout<<"Area of the rectangle: "<<area(l,w)<<" square unit\n\n";
    cout<<"Enter the base and height of a triangle: ";
    cin>>b>>h;
    cout<<"Area of the triangle: "<<area(0.5,b,h)<<" square unit\n";
    return 0;
}
