//BMI Calculator v2
//by Danyll, Lukhman & Haris
#include <iostream>
using namespace std;

int main() {
	
	//Header
	cout<<"--------------------------------\n";
	cout<<"\nBMI Calculator v2 \nby Danyll, Lukhman & Haris\n";
	cout<<"\n--------------------------------\n";
	
	//Define variables for user weight, height and BMI
	float w, h, bmi;
	
	//Requesting and receiving user's weight and height
	cout<<"\nEnter your weight (kilograms): ";	cin>>w;
	cout<<"Enter your height (meters): ";		cin>>h;
	
	bmi = w/(h*h);
	
	//Determining user BMI range
	if (bmi>0)
		cout<<"\nYour BMI is "<<bmi;
	
		if (bmi>0 && bmi<=16)
			cout<<" (Severe thinness)\n";
	
		else if (bmi>16 && bmi<=17)
			cout<<" (Moderate thinness)\n";
	
		else if (bmi>17 && bmi<=18.5)
			cout<<" (Mild thinness)\n";
	
		else if (bmi>18.5 && bmi<=25)
			cout<<" (Normal)\n";
	
		else if (bmi>25 && bmi<=30)
			cout<<" (Overweight)\n";
	
		else if (bmi>30 && bmi<=35)
			cout<<" (Obese Class I)\n";
	
		else if (bmi>35 && bmi<=40)
			cout<<" (Obese Class II)\n";
	
		else if (bmi>40)
			cout<<" (Obese Class III)\n";
								
	else
		cout<<"\nInvalid input.\n";
		
	return 0;
	
}
       