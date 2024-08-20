// These are in-class practice questions for conditional operators from Wed. 10/4/23.

#include <iostream>
#include <string>
using namespace std;

int main()
{
/*	// 2. EVEN/ODD

	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << num << " is " << (num % 2 == 0 ? "even." : "odd.") << endl;


	// 3. ABSOLUTE VALUE
	double x;

	cout << "Enter a number: ";
	cin >> x;

	cout << (x >= 0 ? x : -x ) << " is the absolute value of " << x << ".\n";


	// 4. LETTER OR NOT
	char ch;

	cout << "Enter a character: ";
	cin >> ch;

	cout << ch << " is " << ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? "" : "not ") << "a letter.\n";


	// 5. DIGIT OR NOT
	char ch;

	cout << "Enter a character: ";
	cin >> ch;

	cout << ch << " is " << (ch >= '0' && ch <= '9' ? "" : "not ") << "a digit.\n";


	// 6. MULTIPLE OF N OR NOT - Given an integer m write ONE statement that uses conditional operator that correctly reports if that integer m is a multiple or not of another integer n. Do NOT use any library functions. Both n and m are already declared and initialized with user input.
	int m, n;

	cout << "Enter an integer: ";
	cin >> m;
	cout << "Enter a second integer: ";
	cin >> n;

	cout << m << " is " << (m % n == 0 ? "" : "not ") << "a multiple of " << n << ".\n";
*/

	// 7. HAS DECIMAL PLACES OR DOESN'T - Given a double, x, write ONE statement that uses the conditional operator that correctly reports if that double has or doesn't have any decimal places (other than 0). x is already declared and initialized with user input. Your solution should not have any arithmetic operators!
	double x;

	cout << "Enter a number: ";
	cin >> x;

	cout << x << (static_cast<int>(x) == x ? " does not have" : " has") << " decimal places (other than 0).\n";

	// manually typecast then compare result with original number to see if it's the same 
	// static_cast<datatype>(value)
	// has decimal places = float
	// no decimal places = int
	// double = 4.0
	// see 3.5 Type Casting https://revel-ise.pearson.com/courses/64e80df5802ff723ae47ed74/pages/urn:pearson:entity:f532c70e-f396-487f-ba27-71f2ccbd8460?source=dashboard

	system("pause");
	return 0;
}