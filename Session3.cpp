//=================================\\
				 Codeflex10-C++ Session 3 
====================================

Q1. Solid Square Pattern

Print a solid square using asterisks.

Input:
4

Output:
* * * *
* * * *
* * * *
* * * *

#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << ch << " ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#

Q2. Hollow Square Pattern

Input:
4

Output:
* * * *
*     *
*     *
* * * *

#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
				cout << ch << " ";
			else
				cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#


Q3. Left-Aligned Triangle Pattern

Input:
4

Output:
*
* *
* * *
* * * *


#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << ch << " ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#


Q4. Inverted Left-Aligned Triangle

Input:
4

Output:
* * * *
* * *
* *
*

#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = n; i > 0; i--){
		for(int j = 0; j < i; j++){
			cout << ch << " ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#


Q5. Hollow Left-Aligned Triangle

Input:
4

Output:
*
* *
*   *
* * * *


#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(i == n - 1 || j == 0 || j == i)
				cout << ch << " ";
			else
				cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#

Q6. Right-Aligned Triangle

Input:
4

Output:
      *
    * *
  * * *
* * * *

#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			cout << "  ";
		}
		for(int j = 0; j <= i; j++){
			cout << ch << " ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#


Q7. Hollow Right-Aligned Triangle

Input:
4

Output:
      *
    * *
  *   *
* * * *


#include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			cout << "  ";
		}
		for(int j = 0; j <= i; j++){
			if(i == n - 1 || j == 0 || j == i)
				cout << ch << " ";
			else
				cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}


#@@@@@@@@@@@@@@@@@@@@@#


Q8. Solid Diamond Pattern

Input:
4

Output:
      *
    * *
  * * *
* * * *
  * * *
    * *
      *
      
      
 #include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i <= n; i++){
		for(int j = 0; j < n - i; j++)
			cout << "  ";
		for(int j = 0; j < i; j++)
			cout << ch << " ";
		cout << "\n";
	}
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < n - i; j++)
			cout << "  ";
		for(int j = 0; j < i; j++)
			cout << ch << " ";
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#


Q9. Hollow Diamond Pattern

Input:
4

Output:
      *
    * *
  *   *
*     *
  *   *
    * *
      *
      
      
  #include<iostream>
using namespace std;

int main(){
	int n;
	char ch = '*';
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++) cout << "  ";
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i) cout << ch << " ";
			else cout << "  ";
		}
		cout << "\n";
	}
	for(int i = n - 2; i >= 0; i--){
		for(int j = 0; j < n - i - 1; j++) cout << "  ";
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i) cout << ch << " ";
			else cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}

#@@@@@@@@@@@@@@@@@@@@@#



Q10. Hollow Right-Aligned Triangle with Numbers

Input:
4

Output:
      1
    1   2
  1       3
1 2 3 4 5	



#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++)
			cout << "  ";

		for(int j = 0; j <= i; j++){
			if(i == n - 1 || j == 0 || j == i)
				cout << j + 1 << " ";
			else
				cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}

//<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>\\

