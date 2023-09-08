// This program uses Newton-Raphson Method to calculate the root
// The function can be changed in the function section
// Drawback : we have to calculate the derivative and input it

#include<iostream>
#include<cmath>

using namespace std;

// ************************* Function *****************************

double fn(double x){

	double c;
	c=pow(x,3)+x-1;
        
        return c;	
}

// *********************** Derivative of Function *********************

double fn_1(double x){

	double c;
	
	c= 3*(pow(x,2))+1;

	return c;

}

// ************************ MAIN Code *******************************8

int main(){

	double x,x1;


	cout << "Enter the initial point value "<< endl;
	cin >> x;

	for(;;){
	
		x1= x - (fn(x)/fn_1(x));

		if(fabs(x1-x)<0.0001){
		
			break;
		}
		x = x1;
	}

	cout << "The root is = "<<x1<<endl;

	return 0;
}
