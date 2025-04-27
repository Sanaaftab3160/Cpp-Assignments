#include<iostream>
#include<cmath>
using namespace std;
double calculateArea(double radius){
	return M_PI*radius*radius;
	}
	int main(){
		double radius;
		cout<<"Enter the radius of the circle";
		cin>>radius;
		if(radius<0){
			cout<<"Radius cannot be negative";
		}else{
			double area=calculateArea(radius);
			cout<<"The area of the circle is"<<area;
		}
		return 0;
	}
