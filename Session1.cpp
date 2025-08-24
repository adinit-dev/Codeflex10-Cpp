====================================
				  Codeflex10-C++ Session 1
====================================

//Problem: 1
Take two integers as input and print:
- Their Sum
- Their Difference
- Their Product
- Their Quotient (using integer division)

Input Format:
Two integers a and b

Output Format:
Sum: <value>
Difference: <value>
Product: <value>
Quotient: <value>

Sample Input:
9 5

Sample Output:
Sum: 14
Difference: 4
Product: 45
Quotient: 1

#include<iostream>  
using namespace std;  
  
int main(){  
	int a , b ;  
	  
	cout << "Enter a : " ;  
	cin >> a ;  
	  
	cout << "Enter b : " ;  
	cin >> b ;  
	  
	cout << "Sum : " << a + b << endl ;  
	cout << "Difference : " << a - b << endl;  
	cout << "Product : " << a * b << endl;  
	cout << "Quotient : " << a / b << endl;  
	  
	return 0;  
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem:2
Input a floating-point number n. Print:
- Square: n * n
- Cube: n * n * n

Input Format:
A float n

Output Format:
Square: <value>
Cube: <value>

Sample Input:
2.5

Sample Output:
Square: 6.25
Cube: 15.625

#include<iostream>
using namespace std;

int main(){
	
	float n ;
	
	cout << "Enter n : " ;
	cin >> n ;
	
	cout << "Square : " << n * n << endl ;
	cout << "Cube : " << n * n * n << endl ;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 3
Given principal (P), rate of interest (R), and time (T), calculate:
Simple Interest = (P × R × T) / 100

Input Format:
Three floats: P R T

Output Format:
Simple Interest: <value>

Sample Input:
1000 5 2

Sample Output:
Simple Interest: 100

#include<iostream>
using namespace std;

int main(){
	
	float p , r , t  ;
	
	cout << "Enter p : " ;
	cin >> p ;
	
	cout << "Enter r : " ;
	cin >> r ;
	
	cout << "Enter t : " ;
	cin >> t ;
	
	cout << "Interest : " << ( p * r * t ) / 100 << endl ;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 4
Given two integers, swap their values.

Input Format:
Two integers: a and b

Output Format:
After swapping: a = <value>, b = <value>

Sample Input:
4 9

Sample Output:
After swapping: a = 9, b = 4

#include<iostream>
using namespace std;

int main(){
	
	int a , b , x ;
	
	cout << "Enter a : " ;
	cin >> a ;
	
	cout << "Enter b : " ;
	cin >> b ;
	
	x = a ;
	a = b ;
	b = x ;
	
	cout << "After swapping: a = " << a << ", b = " << b << endl;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 5
Given temperature in Celsius, convert it to Fahrenheit.

Formula:
F = (C × 9/5) + 32

Input Format:
Float C

Output Format:
Fahrenheit: <value>

Sample Input:
67

Sample Output:
Fahrenheit: 152.6

#include<iostream>
using namespace std;

int main(){
	
	float C , F ;
	
	cout << "Enter °Celsius Temperature : " ;
	cin >> C ;
	
	F = 9.0 / 5.0 * C + 32 ;
	
	cout << " Fahrenheit Temperature  : " << F  << endl ;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 6
Given radius r of a circle, calculate:
- Area = π × r × r
- Circumference = 2 × π × r

Use π = 3.14159

Input Format:
Float r

Output Format:
Area: <value>
Circumference: <value>

Sample Input:
5

Sample Output:
Area: 78.5397
Circumference: 31.4159

#include<iostream>
using namespace std;

int main(){
	
	float r ;
	
	cout << " Enter radius , r : " ;
	cin >> r ;
	
	cout << " Area : " << 3.14159 * r * r  << endl ;
	cout << "Circumference : " << 2 * 3.14159 * r << endl ; 
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 7
Given a positive integer n, print the sum of its digits.

Input Format:
Integer n

Output Format:
Sum of digits: <value>

Sample Input:
28462

Sample Output:
Sum of digits: 22


#include<iostream>
using namespace std;

int main(){
	
	int n , digit , sum ;
	
	cout << " Enter n : " ;
	cin >> n ;
	
	sum = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		sum += digit ;
		n = n / 10 ;
	}	
	
	cout << " Sum of digits : " << sum << endl ;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 8
Given a three-digit number n, reverse it.

Input Format:
Integer n (100 ≤ n ≤ 999)

Output Format:
Reverse: <value>

Sample Input:
123

Sample Output:
Reverse: 321

#include<iostream>
using namespace std;

int main(){
	
	int n , digit , rev ;
	
	cout << " Enter n : " ;
	cin >> n ;
	
	rev = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		rev = rev * 10 + digit ;
		n = n / 10 ;
	}	
	
	cout << " Reverse : " << rev << endl ;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆

// Problem: 9 
Given a number n, print its last digit.

Input Format:
Integer n

Output Format:
Last digit: <value>

Sample Input:
8794

Sample Output:
Last digit: 4

#include<iostream>
using namespace std;

int main(){
	
	int n , digit  ;
	
	cout << " Enter n : " ;
	cin >> n ;
	
	digit = n % 10 ;
		
	cout << " Last digit : " << digit << endl ;
	
	return 0 ;
}

#☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆


// Problem: 10
Given an integer n, check if it is even or odd.

Input Format:
Integer n

Output Format:
Even
OR
Odd

Sample Input:
28

Sample Output:
Even

#include<iostream>
using namespace std;

int main(){
	
	int n ;
	
	cout << " Enter n : " ;
	cin >> n ;
	
	if ( n % 2 == 0 ){
		cout  << " Even " << endl ;
	}
	else {
		cout << " Odd " << endl ;
	}
	
	return 0 ;
}

====================================