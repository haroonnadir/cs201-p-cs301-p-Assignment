//BC210209070
#include<iostream>
using namespace std;
int main(){
	int menuChoice;
	char condition;
	cout<<"Hello Student!!,Student VUID=BC210209070 Welcome to the main Menu"<<endl; 
	//using do while loop becuse i want to print menu at least one time when program run!!!
do{
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>menuChoice; //
	switch(menuChoice){
		case 1 : //case 1 perfoming addition opration of multiple numbers!!
		{
			int counter=0, num;
			int sum=0;
			cout<<"How many number do you want to add?  ";
			cin>>num;
			while(counter!=num){
				int numForAdd;
				cout<<"Enter number "<<counter+1<<" :  ";
				cin>>numForAdd;
				sum=sum+numForAdd;
				counter++;
			}
			cout<<"Result of Addition: "<<sum<<endl;
			break;
		}
		case 2: //case 2 perfoming Subtraction opration of multiple numbers!!
			{
		
				int counter=1, num, num1;
			int sum=0;
			cout<<"How many number do you want to Subtract?  ";
			cin>>num;
			cout<<"Enter number 1 :  ";
			cin>>num1;
			while(counter!=num){
				int numForAdd;
				cout<<"Enter number "<<counter+1<<" :  ";
				cin>>numForAdd;
				num1=num1-numForAdd;
				counter++;
			}
			cout<<"Result of Subtraction: "<<num1<<endl;
			break;
			}	
			case 3: //case 3 perfoming multiplication of multiple numbers!!
			{
				int counter=0, num;
			int sum=1;
			cout<<"How many number do you want to Multiply?  ";
			cin>>num;
			while(counter!=num){
				int numForAdd;
				cout<<"Enter number "<<counter+1<<" :  ";
				cin>>numForAdd;
				sum=sum*numForAdd;
				counter++;
			}
			cout<<"Result of Multiplication: "<<sum<<endl;
			break;		
		
			}	
			
		case 4: //case 4 perfoming Division opration of multiple numbers!!
			{
		
				int counter=1, num;
			float num1;
			cout<<"How many number do you want to Divide?  ";
			cin>>num;
			cout<<"Enter number 1 :  ";
			cin>>num1;
			while(counter!=num){
				float numForAdd;
				cout<<"Enter number "<<counter+1<<" :  ";
				cin>>numForAdd;
				num1=num1/numForAdd;
				counter++;
			}
			cout<<"Result of Divition: "<<num1<<endl;
			break;
			}
		case 5: //case 5 Exit the program!!
			{
			condition='n';
			cout<<"Program Exit :";
			break;	
			}
		default:
			{
				cout<<"Please Enter Corect number given in menu : "<<endl;
			}	
	}
	//if condition check a person want to exit program or not !!
	if(condition!='n'){
	cout<<"Do you want to continue (y/n) ? : ";
	cin>>condition;
		}
	}while(condition=='y'||condition=='Y');
}
