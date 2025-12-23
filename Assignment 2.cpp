/* 
NAME: CHENG ZHI MIN
MATRICS NUMBER: A25CS0050

NAME: NG XUAN YEE
MATRICS NUMBER: A25CS0291

DATE: 25 DECEMBER 2025
*/

#include <iostream>
#include <cmath>
using namespace std;

//function to get age
void getAge(int &age){
	do{
		cout<<"Age [15-80]: ";
		cin>>age;
	}while(age<15 || age>80); //repeat if age not in the range 15 to 80
}

//function to get gender
void getGender(char &gender){
	do{
		cout<<"Gender [F @ M]: ";
		cin>>gender;
	}while(gender!='F' && gender!='f' && gender!='M' && gender!='m'); //repeat if invalid gender character
}

//function to get height
void getHeight(double &height){
	do{
		cout<<"Height (cm): ";
		cin>>height;
		if(height<=0)
			cout<<"Invalid height. Please enter a number greater than 0."<<endl<<endl;
	}while(height<=0); //repeat if height less than or equal to 0
}

//function to get weight
void getWeight(double &weight){
	do{
		cout<<"Weight (kg): ";
		cin>>weight;
		if(weight<=0)
			cout<<"Invalid weight. Please enter a number greater than 0."<<endl<<endl;
	}while(weight<=0); //repeat if weight less than or equal to 0
}

//function to get char yes or no
void yesORno(char &yn){
	do{
		cout<<"Do you want to enter other data? [Y @ N]: ";
		cin>>yn;
		if(yn!='Y' && yn!='y' && yn!='N' && yn!='n')
			cout<<"Invalid input."<<endl<<endl;
	}while(yn!='Y' && yn!='y' && yn!='N' && yn!='n'); //repeat if invalid character
}

//function to calculate BMR
double calcBMR(char gender, double weight, double height, int age){
	double BMR;
	if(gender=='F'||gender=='f')
		BMR = (10 * weight) + (6.25 * height) - (5 * age) - 161; //female
		
	else if(gender=='M'||gender=='m')
		BMR = (10 * weight) + (6.25 * height) - (5 * age) + 5; //male
	return BMR;
}

//main function
int main(){

	//variable declaration
	int age;
	char gender, yes_no;
	double height, weight, BMR;
	
	do{
		cout<<"Basal Metabolic Rate (BMR) Calculator"<<endl<<endl;
		
		//prompt user input
		getAge(age);
		getGender(gender);
		getHeight(height);
		getWeight(weight);
		
		//calculate BMR
		BMR = calcBMR(gender, weight, height, age);
		
		//display BMR result
		cout<<endl;
		cout<<"BMR = "<<round(BMR)<<" Calories/ day (using Mifflin-St Jeor Equation)"<<endl<<endl;

		//display daily calories needs
		cout<<"Daily calorie needs based on activity level"<<endl<<endl;
		cout<<"Activity Level                                           Calorie"<<endl;
		cout<<"Sedentary: little or no exercise                         "<<round(BMR*1.2)<<endl;
		cout<<"Exercise 1-3 times/week                                  "<<round(BMR*1.375)<<endl;
		cout<<"Exercise 4-5 times/week                                  "<<round(BMR*1.465)<<endl;
		cout<<"Daily exercise or intense exercise 3-4 times/week        "<<round(BMR*1.55)<<endl;
		cout<<"Intense exercise 6-7 times/week                          "<<round(BMR*1.725)<<endl;
		cout<<"Very intense exercise daily, or physical job             "<<round(BMR*1.9)<<endl<<endl;
		cout<<"Exercise: 15-30 minutes of elevated heart rate activity."<<endl;
		cout<<"Intense exercise: 45-120 minutes of elevated heart rate activity."<<endl;
		cout<<"Very intense exercise: 2+ hours of elevated heart rate activity."<<endl<<endl;
		
		yesORno(yes_no); //ask user whether to continue enter other data
		cout<<endl;
		
	}while(yes_no=='Y' || yes_no=='y'); //repeat if user enter 'Y' or 'y'
	
	cout<<"Thank you :)";
	return 0;
}
