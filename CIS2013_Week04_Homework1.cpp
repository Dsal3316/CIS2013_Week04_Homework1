#include <iostream>
#include <cmath>

using namespace std;

int AddNum(int,int);
int SubNum(int,int);
int MultiNum(int,int);
int ModNum(int,int);
double DiviNum(int,int);
double sqrt(int);
char question;
bool Keep_running = true;

int main()
{

	while (Keep_running)
	{
	
		int num1, num2, selection;
	
			cout << "Enter first number: ";
			cin >> num1;
		
			cout << "Enter second number: ";
			cin >> num2;
		
			cout << "\n\n\n";
		
			cout << "Select your function: \n";
			cout << "1. Addition\n";
			cout << "2. Subtraction\n";
			cout << "3. Multiplication\n";
			cout << "4. Modular Division\n";
			cout << "5. Division\n";
			cout << "6. SquareRoot\n";
			cout << "Selection: ";
			cin >> selection;
		
			cout << "\n\n\n";
			
			
		
			switch(selection)
			{
			
				case 1:
				{
					int AddNum(int num1,int num2);
					cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << endl;
					break;
				}
				case 2:
				{
					int SubNum(int num1, int num2);
					cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << endl;
					break;
				}
				case 3:
				{
					int MultiNum(int num1, int num2);
					cout << "The product of " << num1 << " and " << num2 << " is " << num1*num2 << endl;
					break;
				}
				case 4:
				{
					int ModNum(int num1, int num2);
					cout << "The remainder of " << num1 << " and " << num2 << " is " << static_cast<double>(num1%num2) << endl;
					break;
				}
				case 5:
				{
					double DiviNum(int num1,int num2);
					cout << "The quotient of " << num1 << " and " << num2 << " is " << num1/num2 << endl;
					break;
				}
				case 6:
				{
					double sqrt(double num1);
					cout << "The square root of " << num1 << " is " << sqrt(num1) << endl;
					break;
				}
			
				
			}
		cout << "Keep running Y/N: " << endl;
				cin >> question;
				if (question != 'y'){Keep_running= false;}	
	
	
	
	}
	
	
	
	
	
	return 0;
}	

