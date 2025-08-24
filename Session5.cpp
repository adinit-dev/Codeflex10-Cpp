//=================================\\
			Codeflex10-C++ Session 5
#==================================#

/*
Q1: Check if a number is a perfect square

You are given an integer n. Write a function that returns true if n is a perfect square, else false.
Input: Single integer n
Output: Print "Yes" if perfect square, else "No"
*/

#include<iostream>
#include<cmath>
using namespace std ;

bool isPerfectSquare( int n ){
	
	int original= n;
	long long squareroot = sqrt(n);
	
	
	int x = (int)squareroot ;
	
	long long squareback = x * x ;
	
	if ( squareback == original ){
		return true ;
	}
	
	else{
		return false ;
	}
	
	
}

int main(){
	int n ;
	cout << "Enter n : " ;
	cin >> n ;
	
	isPerfectSquare(n);
	
	bool result = isPerfectSquare(n);
	if(result){
		cout << "Yes\n" ;
	}
		
	else{
		cout << "No \n";
	}
	
	return 0 ;
}

#%%%%%%%%%%%%%%%%%%%%%%%%%%#

/*
Q2: Count digits in a number

Write a function that takes an integer n and returns the number of digits in it.
Input: Single long long integer n
Output: Print number of digits
*/

#include<iostream>
#include<cmath>
using namespace std ;

int countDigit ( long long n ){
	
	int count = 0 ;
	
	if( n == 0 ){
		return 1 ;
	}
			
	while(n > 0){
		count += 1 ;
		n = n / 10 ;
	}
	return count ;	
	
}

int main(){
	long long n ;
	
	cout << "Enter n  " ;
	cin >> n ;
	
	int result = countDigit(n);
	cout << result << endl ;
	return 0 ;
}

#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q3: Find the maximum of 3 numbers

Write a function that takes 3 integers a, b, and c, and returns the maximum among them.
Input: Three integers a, b, c
Output: Print the maximum number
*/

#include<iostream>
#include<cmath>
using namespace std ;

int findMax ( int a , int b ,int c ){
	
	int maxnum = a ;
	
		if ( b > maxnum ){
			maxnum = b ;
		}
		
		if ( c > maxnum ){
			maxnum = c ;
		}
		
			return maxnum ;	
	
}

int main(){
		
		int a , b , c ;
		
		cout << "Enter a : " ;
		cin >> a ;
		
		cout << "Enter b : " ;
		cin >> b ;
		
		cout << "Enter c : " ;
		cin >> c ;
	
		int result = findMax( a , b , c);
		cout << result << endl ;
	
	return 0 ;
}

#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q4: Prime Number Check

Write a function that returns whether a number n is prime or not.
Input: First line t (test cases), followed by t integers
Output: For each number, print "Prime" or "Not Prime"
*/

#include<iostream>

using namespace std ;

bool isPrime( int n ){
	
	if ( n <= 1 ){
		return false ;
	}
	
	for ( int i = 2 ; i < n ; i++ ){
		if ( n % i == 0 ){
			return false ;
		}
	}	
	return true ;
}

int main(){
		
		int t , n ;
		cout << "Enter num of test case , t : " ;
		cin >> t ;
		
		while ( t-- ){
			cin >> n ;
			if(isPrime(n)){
				cout << "Prime " << endl ;
			}
			else{
				cout << "Not Prime " << endl ;
			}
		}
	
	return 0 ;
}


#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q5: Factorial of a Number

Write a function that returns the factorial of a number n.
Input: First line t (test cases), followed by t integers
Output: For each number, print its factorial
*/

#include<iostream>

using namespace std ;

long long factorial( int n ){
	
	long long fact = 1 ;
	
	if( n <= 0 ){
		return 1 ;
	}
	
	for( int i = 1 ; i <= n ; i++ ){
		fact *= i ;
	}
	return fact ;
}
		
	
int main(){
		
		int t , n ;
		cout << "Enter num of test case , t : " ;
		cin >> t ;
		
		while ( t-- ){
			cin >> n ;
		cout << factorial(n) << endl;
		}
			
	return 0 ;
}

#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q6: Reverse a Number

Write a function that takes an integer n and returns its reverse.
Input: First line t (test cases), followed by t integers
Output: For each number, print the reversed number
*/

#include<iostream>

using namespace std ;

int reverseNumber( int n ){
	
	int rev  =  0 ;
	
	while( n > 0 ){
		int digit = n % 10 ;
		rev = rev * 10 + digit ;
		n = n / 10 ;
	}
	return rev ;
}
		
	
int main(){
		
		int t , n ;
		cout << "Enter num of test case , t : " ;
		cin >> t ;
		
		while ( t-- ){
			cin >> n ;
		cout << reverseNumber(n) << endl;
		}
			
	return 0 ;
}

#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q7: Sum of Digits

Write a function that takes an integer n and returns the sum of its digits.
Input: First line t (test cases), followed by t integers
Output: For each number, print the sum of its digits
*/

#include<iostream>

using namespace std ;

int sumofDigit( int n ){
	
	int sum  =  0 ;
	
	while( n > 0 ){
		int digit = n % 10 ;
		sum += digit ;
		n = n / 10 ;
	}
	return sum ;
}
		
	
int main(){
		
		int t , n ;
		cout << "Enter num of test case , t : " ;
		cin >> t ;
		
		while ( t-- ){
			cin >> n ;
		cout << sumofDigit(n) << endl;
		}
			
	return 0 ;
}


#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q8: Count the number of 5s in the digits

Write a function that returns how many times digit 5 appears in number n.
Input: First line t (test cases), followed by t integers
Output: For each number, print the count of digit 5
*/

#include<iostream>

using namespace std ;

int countFives( int n ){
	
	int count = 0 ;
	
	while (n > 0){
		int digit = n % 10 ;
		if ( digit == 5 ){
			count +=1 ;
		}
		n = n / 10 ;
	}
	return count ;
}


int main(){
	int t ,n  ;
	cout << "Enter no of test case, t : " ;
	cin >> t ;
	while(t--){
		cin >> n ;
		cout << countFives(n) << endl ;
	}
	return 0 ;
}


#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q9: Count digits divisible by 3

Write a function that returns how many digits in n are divisible by 3.
Input: First line t (test cases), followed by t integers
Output: For each number, print count of digits divisible by 3
*/

#include<iostream>

using namespace std ;

int countDivby3( int n ){
	
	int count = 0 ;
	
	while (n > 0){
		int digit = n % 10 ;
		if ( digit % 3 == 0 ){
			count +=1 ;
		}
		n = n / 10 ;
	}
	return count ;
}


int main(){
	int t ,n  ;
	cout << "Enter no of test case, t : " ;
	cin >> t ;
	while(t--){
		cin >> n ;
		cout << countDivby3(n) << endl ;
	}
	return 0 ;
}


#%%%%%%%%%%%%%%%%%%%%%%%%%%#


/*
Q10: Count digits greater than 5

Write a function that counts how many digits in n are strictly greater than 5.
Input: First line t (test cases), followed by t integers
Output: For each number, print count of digits > 5
*/

#include<iostream>

using namespace std ;

int countGreaterthan5( int n ){
	
	int count = 0 ;
	
	while (n > 0){
		int digit = n % 10 ;
		if ( digit > 5 ){
			count +=1 ;
		}
		n = n / 10 ;
	}
	return count ;
}


int main(){
	int t ,n  ;
	cout << "Enter no of test case, t : " ;
	cin >> t ;
	while(t--){
		cin >> n ;
		cout << countGreaterthan5(n) << endl ;
	}
	return 0 ;
}

//《《《《《《《《《》》》》》》》》》》\\



