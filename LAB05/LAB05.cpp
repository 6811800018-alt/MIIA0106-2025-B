#include  <iostream>
#include <string>


using namespace std;
double circleArea(int radius)
{ 	
	return 3.14 * radius * radius; 
}
double rectArea(double width, double hight)
{
	return width * hight;
	}

int main() 
{
	double radius; // declare radius variable
	
	double result;// declare result variable
	
	cout << "Enter the radius : ";// prompt user for radius
	cin >> radius;// read radius from user

	result = circleArea (radius); // calculate area 
	cout << "The area of the circle is: " << result << endl; // display result

	

	//width, height
	double width, height;
	cout << "Enter heigh";// prompt user for width 
	cin >> width; // read width from user
	cout << "enter width"; // prompt user for height
	cin >> height;// read height from user

	result = rectArea(width, height); // call function calculate area
	cout << "The area of the rectangle is: " << result << endl; // display result



	return 1;
}

