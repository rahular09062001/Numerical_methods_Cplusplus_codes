// This Code will use False-Position method to calculate the root
// The function can be changed in the function section
// Be care full about the caution I have mentioned
#include<iostream>
#include<cmath>

using namespace std;

// *************************** FUNCTION *********************************

double fn(double x){

	double c;

	c = pow(x,3) + 2*x - 2;

	return c;
}

// *************************** Main Program *****************************

int main(){

	double x0,x1,rle,x2=0; 

	// caution :: x2 = 0 
	// After the first iteration the value of x2 = 0
	// then it will create problem
	// change the x2 value accordingly

	cout << "Enter the value " << endl;
	cin >> x0;
	cin >> x1;

	if(fn(x0)*fn(x1)<0){

		cout << "The range is acceptable " << endl;
		cout << "f(x0) = " << fn(x0) << " f(x1) = " << fn(x1) << endl;

		for(;;){

			rle = x2;
		
			x2 = x0 - (fn(x0)/(fn(x1)-fn(x0)))*(x1 - x0);



			if(fn(x2)*fn(x0)<0){
			
				x1=x2;
			}
			else{
			
				x0=x2;
			}

			if(fabs(rle-x2)<0.0000001){
			break;
			}
		

		}
	        
			cout << "The root = " << x2 << endl;
	
	}

	else {
	
		cout << "The range is not acceptabel" << endl;
		cout << "f(x0) = " << fn(x0) << "f(x1) = " << fn(x1) << endl;
	}

	return 0;

}
