#include <iostream>
using namespace std; 
int main()
{
	char vowel;
	char name[32]; 
	/**		
		char[] describes an array of characters with a fixed number of elements
		for example: Alex has 4 characters.

		char* targets a single character. example: 'A',
		code snippet for char*
		char *name; or char name;
	*/
	char gender[7];
	int A;
	int B;
	int C;
	int score;

	// Inputs for char name
	cout<<"What is your name? "<< endl;
	cin >> name;

	cout<<"Please input the value of A: "<< endl;
	cin >> A;

	cout<<"Please input the value of B: "<< endl;
	cin >> B;

	cout<<"please input the value of C: "<<endl;
	cin >> C;

	// Conditions for char name
	if (A > B and A > C)
	{
		cout << "A has the highest number" << endl;
	}else if (B > A and B > C){
		cout << "B has the highest number" << endl;
	}else {
		cout << "C is the highest number" << endl;
	}

	// Input for char gender
	cout << "Please enter your gender: " << endl;
	cin >> gender;

	// Conditions for char gender
	if (A < 18)
	{
		cout << "Under-aged detected" << endl;
	}else if (B < 18 || C < 18){
		cout << "Under weight! Please do not proceed" << endl;
	}else{
		cout << "Proceed" << endl;
	}


	//Input for char vowel
	cout << "Enter a vowel: " << endl;
	cin >> vowel;

	// Switch statement for char vowel
	switch(vowel){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		break;
		default:
		cout << "invalid response" << endl;
	}
 	cout << "Smart " << gender << endl;
	
 	//Input for PUTME score
	cout << "Please enter your PUTME score: " << endl;
	cin >> score;

	// Condition for PUTME score
	if (score < 180)
	{
		cout << "Chai! "<< name << " You don fail" << endl;
	}else {
		cout << "Congratulations " << name << " You have been given provisional admission" << endl;
	}

	return 0;
}