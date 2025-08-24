//=================================\\
	Codeflex10-C++ Session 6( 6 Questions)
====================================

// Q1. Function Overloading // Write a program to find the maximum of two integers and two floats using function overloading.

#include<iostream> #include<cmath> using namespace std ;

int findMax( int a , int b ) { int maximum = max(a ,  b); return maximum ; }

float findMax( float a , float b ){ float maximum = max(a , b ); return maximum ; }

int main(){ int a, b , t ; cin >> t ;

while (t--){
    cout << "Enter a " ;
    cin >> a ;

    cout << "Enter b " ;
    cin >> b ;

    cout << findMax( a , b ) << endl ;

    float fa , fb ;
    cout << "Enter fa " ;
    cin >> fa ;

    cout << "Enter fb " ;
    cin >> fb ;

    cout << findMax(fa , fb ) << endl ;
}
return 0 ;

}

// Q2. Default Arguments // Write a program to calculate area of square or rectangle depending on number of sides given.

#include<iostream> using namespace std ;

int findArea( int length , int breadth = -1 ){ if ( breadth == -1 ){ return  length * length  ; } else { return length * breadth ; } }

int main(){ int l , b , t , N ; cout << "t : "; cin >> t ;

while( t-- ){
    cout << "Enter no of side given by user(1 or 2 ) : " ;
    cin >> N;

    if (N == 1){
        cout << "Enter l " ;
        cin >> l ;
        cout << findArea( l )<< endl ;
    }
    else{
        cout << "Enter l " ;
        cin >> l ;
        cout << "Enter b " ;
        cin >> b ;
        cout << findArea( l , b )<< endl ;
    }
}
return 0 ;

}

// Q3. Pass by Reference // Write a program to swap two numbers using pass by reference.

#include<iostream> using namespace std;

void swappingNum(int &a , int &b ){ int x = a ; a = b ; b = x ;

cout << "a : " << a << endl ;
cout << "b : " << b << endl ;

}

int main(){ int t , a , b ; cout << "t : " ; cin >> t ;

while(t--){
    cout << "a : " ;
    cin >> a ;
    cout << "b : " ;
    cin >> b ;

    cout << "After swapping -->" << endl ;
    swappingNum( a , b);
}
return 0 ;

}

// Q4. Global vs Local Scope // Demonstrate global vs local scope using a counter variable.

#include<iostream> using namespace std;

int counter = 100 ;

void increment(){ int counter = 0 ; cout << "Local counter: " <<counter << endl; cout << "Global counter : " << ::counter << endl; }

int main(){ increment(); return 0 ; }

// Q5. Pure vs Impure Functions // Show pure and impure functions using a global variable.

#include<iostream> using namespace std;

int counter = 10 ;

int sumnum(int a , int b ){ int sum =  a + b ; return sum ; }

int globaleffect( int a ){ counter += a ; return counter ; }

int main(){ int a , b ,sum  ; cout << "a : " ; cin >> a ; cout << "b : " ; cin >> b ;

sum = sumnum(a, b);
cout << "Sum :  " << sum << endl;

int updatedcounter = globaleffect(a);
cout << "impure : " << updatedcounter << endl;

return 0 ;

}

// Q6. Inline Function // Write an inline function to calculate cube of a number.

#include<iostream> using namespace std ;

inline int cube(int n){ return n * n * n ; }

int main(){ int n , t ; cin >> t ;

while(t--){
    cout << " enter n : " ;
    cin >> n ;
    int result = cube(n);
    cout << result << endl;
}
return 0;

}

#%%%%%%%%%%%%%%%%%%%%%%%%%%