//=================================\\
		 		Codeflex10-C++ Session 4
====================================

// Q1. Write a program to check whether a number is an Armstrong number or not.

// A number is called an Armstrong number if the sum of the cubes of its digits is equal to the number itself.
// Example: 153 → 1³ + 5³ + 3³ = 153 → Armstrong number.


#include<iostream>
using namespace std ;

int main() {
	int n , digit ;
	
	cout << "Enter n : " ;
	cin >>n ;
	
	int original = n ;
	int sum = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		int digit1 = digit * digit * digit ;
		sum += digit1 ;
		n = n / 10 ;
	}
	
	cout << "Sum : " << sum << endl ;
	if( sum == original ){
		cout << "Armstrong " << endl ;
	}
	
	else {
		cout << " Not Armstrong " << endl ;
	}
	return 0 ;
}

#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#
// Q2. Write a program to check whether a number is a Palindrome or not.

// A number is a palindrome if it reads the same backward as forward.
// Example: 12321 → Palindrome

#include<iostream>
using namespace std ;

int main() {
	int n, digit  ;
	
	cout << "Enter n : " ;
	cin >>n ;
	
	int original = n ;
	int rev = 0 ;

	while ( n > 0 ){
		digit = n % 10 ;
		 rev = rev * 10 + digit ;
		n = n / 10 ;
	}
		if ( rev == original ){
			cout << "Palindrome" << endl;
		}
		
		else {
			cout << " Not a Palindrome" << endl;
		}
	

	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#
// Q3. Write a program to count the number of digits in a given number.
// Example: Input = 93633 → Output = 5

#include<iostream>
using namespace std ;

int main() {
	int n, digit  ;
	
	cout << "Enter n : " ;
	cin >>n ;
	
	int count = 0 ;

	while ( n > 0 ){
		digit = n % 10 ;
		count += 1 ;
		n = n / 10 ;
	}
	cout << "Num of digit : " << count << endl;
	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#

// Q4. Write a program to find the sum of all digits in a given number.
// Example: Input = 1846482 → Output = 33

#include<iostream>
using namespace std ;

int main() {
	int n, digit  ;
	
	cout << "Enter n : " ;
	cin >>n ;
	
	int sum = 0 ;

	while ( n > 0 ){
		digit = n % 10 ;
		sum += digit ;
		n = n / 10 ;
	}
	cout << "Sum : " << sum << endl;
	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#
// Q5. Write a program to count the frequency of a given digit in a number.
// Example: n = 13836133, digit = 3 → Output = 4

#include<iostream>
using namespace std ;

int main() {
	int n, digit , d ;

	cout << "Enter n : " ;
	cin >> n ;

	cout << " Enter digit(0 to 9) : " ;
	cin >> d ;

	int count = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		if ( digit == d ){
			count += 1 ;
		}
		n = n / 10 ;
	}

	cout <<" frequency of d : " << count << endl ;
	return 0 ;
}



#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#

// Q6. Write a program to reverse a given number.
// Example: Input = 1936 → Output = 6391

#include<iostream>
using namespace std ;

int main() {
	int n, digit  ;

	cout << "Enter n : " ;
	cin >> n ;

	int rev = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		rev = rev * 10 + digit ;
		n = n / 10 ;
	}

	cout <<" Reverse : " << rev << endl ;
	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#

// Q7. Write a program to check whether a number is a Harshad Number.
// A number is Harshad if it's divisible by the sum of its digits.
// Example: Input = 18 → Output = Harshad Number

#include<iostream>
using namespace std ;

int main() {
	int n, digit  ;

	cout << "Enter n : " ;
	cin >> n ;

	int temp = n ;
	int sum = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		sum += digit ;
		n = n / 10 ;
	}

	if ( temp % sum == 0){
		cout <<" Harshad Number " << endl ;
	}
	else {
		cout << "Not a Harshad Number";
	}
	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#

// Q8. Write a program to check whether a number is a Spy Number.
// A number is spy if sum of digits == product of digits.
// Example: Input = 1124 → Sum = 1+1+2+4=8, Product = 1×1×2×4=8 → Spy


#include<iostream>
using namespace std ;

int main() {
	int n, digit  ;

	cout << "Enter n : " ;
	cin >> n ;

	int prod = 1 ;
	int sum = 0 ;
	while ( n > 0 ){
		digit = n % 10 ;
		sum += digit ;
		prod *= digit ;
		n = n / 10 ;
	}

	if ( sum == prod ){
		cout <<" Spy Number " << endl ;
	}
	else {
		cout << "Not a Spy Number ";
	}
	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#

// Q9. Write a program to check whether a number is a Perfect Number.
// A number is perfect if sum of its proper divisors equals itself.
// Example: Input = 28 → Output = Perfect Number


#include<iostream>
using namespace std ;

int main() {
	int n, i ;

	cout << "Enter n : " ;
	cin >> n ;

	int original = n ;

	int sum = 0 ;

	for( i = 1 ; i < n ; i++ ){
		if ( n % i == 0 ){
			sum += i ;
		}
	}

	if ( sum == original ){
		cout <<" Perfect Number " << endl ;
	}
	else {
		cout << "Not a perfect Number ";
	}
	return 0 ;
}


#¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥#

// Q10. Write a program to check whether a number is a Neon Number.
// A number is neon if sum of digits of its square equals the number itself.
// Example: 9 → 9^2 = 81 → 8+1 = 9 → Neon Number


#include<iostream>
using namespace std ;

int main() {
	int n, i ;

	cout << "Enter n : " ;
	cin >> n ;

	int original = n ;

	int square = n * n ;
	cout << square << endl ;

	int sum = 0 ;
	while ( square  > 0 ){
		int digit = square % 10 ;
		sum += digit ;
		square = square / 10 ;
	}

	if ( sum == original ){
		cout <<" Neon Number " << endl ;
	}
	else {
		cout << "Not a Neon Number ";
	}
	return 0 ;
}


//{{{{{{{{{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}}}}}}}}}}\\

