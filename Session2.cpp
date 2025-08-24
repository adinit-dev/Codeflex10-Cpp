//=================================\\
				  Codeflex10-C++ Session 2
#==================================#


// Problem: 1
Given two integers `a` and `b`, print the maximum of the two.

Input Format:
Two integers – a and b

Output Format:
Maximum : x
(where x is the larger number)

#include<iostream>
using namespace std ;

int main ( ) {
	int a , b ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	cout << " Enter b :" ;
	cin >> b ;
	
	if ( a > b ) {
		cout << "Maximum : " << a << endl ;
	}
	
	else if ( a == b ) {
		cout << " Both are equal " << endl ;
	}
	
	else {
		cout << "Maximum : " << b << endl ;
	}
	
	return 0 ;
}


#《《《《《《《《《》》》》》》》》》》》#


// Problem: 2
Given an integer `a`, determine whether it is positive, negative, or zero.

Input Format:
Single integer a

Output Format:
Positive / Negative / Zero


#include<iostream>
using namespace std ;

int main ( ) {
	int a ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	if ( a > 0 ) {
		cout << " Positive " << endl ;
	}
	
	else if ( a == 0) {
		cout << " Zero " << endl ;
	}
	
	else {
		cout << " Negative " << endl ;
	}
	
	return 0 ;
}

#《《《《《《《《《》》》》》》》》》》》#

// Problem: 3
Given three integers, find the largest among them.

Input Format:
Three integers – a, b, c

Output Format:
Largest : x
OR
a = b = c

#include<iostream>
using namespace std ;

int main ( ) {
	int a , b , c ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	cout << " Enter b : " ;
	cin >> b ;
	
	cout << " Enter c : " ;
	cin >> c ;
	
	if (( a > b ) && ( a > c )){
		cout << " Largest : " << a << endl ;
	}
	
	else if (( b > a ) && ( b > c )) {
		cout << " Largest : " << b << endl ;
	}
	
	else if (( c > a ) && ( c > b )) {
		cout << " Largest : " << c << endl ;
	}
	
	else {
		cout << " a = b = c " << endl ;
	}
	
	return 0 ;
}


#《《《《《《《《《》》》》》》》》》》》#

// Problem: 4
Given an integer, check if it is divisible by both 5 and 11.

Input Format:
Single integer a

Output Format:
Divisible by both 5 and 11  
OR  
Not divisible by both 5 and 11

#include<iostream>
using namespace std ;

int main ( ) {
	int a ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	if (( a % 5 == 0 ) && ( a % 11 == 0 )){
		cout << " Divisible by both 5 and 11 " << endl ;
	}
	
	else {
		cout << " Not divisible by both 5 and 11 " << endl ;
	}
	
	return 0 ;
}

#《《《《《《《《《》》》》》》》》》》》#

// Problem: 5
Given a year, check if it is a leap year.

Input Format:
Single integer – year

Output Format:
Leap Year  
OR  
Not a Leap Year

#include<iostream>
using namespace std ;

int main ( ) {
	int year ;
	
	cout << " Enter year : " ;
	cin >> year ;
	
	if (( year % 4 == 0  && year %100 != 0 ) || ( year % 400 == 0 )){
		cout << " Leap Year " << endl ;
	}
	
	else {
		cout << " Not a Leap Year " << endl ;
	}
	
	return 0 ;
}

#《《《《《《《《《》》》》》》》》》》》#


// Problem: 6
Given a character, check whether it's a vowel or consonant.  
If not an alphabet, print “Not valid input !!!”

Input Format:
Single character ch

Output Format:
Vowel  
OR  
Consonant  
OR  
Not valid input !!!

#include<iostream>
using namespace std ;

int main ( ) {
	char ch ;
	
	cout << " Enter ch : " ;
	cin >> ch ;
	
	if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' )) {
		if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
		     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
			cout << "Vowel" << endl ;
		}
		else {
			cout << "Consonant" << endl ;
		}
	}
	else {
		cout << "Not valid input !!! " << endl ;
	}
	
	return 0 ;
}


#《《《《《《《《《》》》》》》》》》》》#


// Problem: 7
Given coefficients a, b, and c of a quadratic equation, determine the nature of its roots.

Input Format:
Three integers a, b, c

Output Format:
Real and Distinct Roots  
OR  
Real and Equal Roots  
OR  
Imaginary Roots

#include<iostream>
using namespace std ;

int main ( ) {
	int a , b , c , D ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	cout << " Enter b : " ;
	cin >> b ;

	cout << " Enter c : " ;
	cin >> c ;
	
	D = b * b - 4 * a * c ;
	
	if ( D > 0 ){
		cout << " Real and Distinct Roots " << endl ;
	}
	else if ( D == 0 ){
		cout << " Real and Equal Roots " << endl ;
	}
	else {
		cout << " Imaginary Roots " << endl ;
	}
	
	return 0 ;
}


#《《《《《《《《《》》》》》》》》》》》#


// Problem: 8
Given an integer `a`, check if it is even or odd.

Input Format:
Single integer a

Output Format:
Even  
OR  
Odd

#include<iostream>
using namespace std ;

int main ( ) {
	int a ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	if ( a % 2 == 0 ){
		cout << " Even " << endl ;
	}
	else {
		cout << " Odd " << endl ;
	}
	
	return 0 ;
}

#《《《《《《《《《》》》》》》》》》》》#


// Problem: 9
Given a number, check whether it is divisible by either 3 or 7.

Input Format:
Single integer a

Output Format:
Divisible  
OR  
Not Divisible

#include<iostream>
using namespace std ;

int main ( ) {
	int a ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	if ( a % 3 == 0 || a % 7 == 0 ){
		cout << " Divisible " << endl ;
	}
	else {
		cout << " Not Divisible " << endl ;
	}
	
	return 0 ;
}

#《《《《《《《《《》》》》》》》》》》》#

// Problem: 10
Given a number, check if it is a multiple of both 3 and 5.

Input Format:
Single integer a

Output Format:
Multiple of both 3 and 5  
OR  
Not Multiple of both 3 and 5

#include<iostream>
using namespace std ;

int main ( ) {
	int a ;
	
	cout << " Enter a : " ;
	cin >> a ;
	
	if ( a % 3 == 0 && a % 5 == 0 ){
		cout << " Multiple of both 3 and 5 " << endl ;
	}
	else {
		cout << " Not Multiple of both 3 and 5 " << endl ;
	}
	
	return 0 ;
}

//=================================\\

