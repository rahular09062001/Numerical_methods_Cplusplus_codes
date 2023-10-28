#include<iostream>
#include<cmath>

using namespace std;

int main() {

	cout << "Enter the value of range " << endl;
	 double x0,x1,f0,f1,x2=0,f2,rel,er=0.0000000000001;
	 cin >> x0;
	 cin >> x1;
	 cout << "The value you entered are "<<x0<< " " << x1 << endl;
	
		 f0=pow(x0,2) + x0 - 7;
		 f1=pow(x1,2) + x1 - 7;
	
         if (f0*f1<0){
	 
		 cout << "The range is accepted" << endl;

	 }

	 else{
	 
		 cout << "The range is not accepted" << endl;
	 }

	 for (;;){

		 rel = x2 ;

		 f0=pow(x0,2) + x0 - 7;
		 f1=pow(x1,2) + x1 - 7;
		 x2 = (x1+x0)/2;
		 f2=pow(x2,2) + x2 - 7;

                 if_1:if(f0*f2<0){

			      x1=x2;
		      }

		      else{
		      
			      x0=x2;
		      }

		      if(fabs(rel-x2)<er){
		      
			      break;
		      }

		      

	 }

	 cout << " The square root value = " << x2 << endl;


	 return 0;

}
