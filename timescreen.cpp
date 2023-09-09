/*

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {

    int i, j, k = 1;

    for(i = 1; i = 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }

    return 0;
}

*/


/*
#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout <<"*"<< " ";
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {

    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}




#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int count = 1;
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << count << " ";
            ++count;
        }

        cout << endl;
    }

    return 0;
}









#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int age;
    cout << "Enter you age!";
    cin >> age;
    switch (age) {
        case 0 ... 12:
            cout << "Infant";
        case 13 ... 19:
            cout << "Teen";
        case 20 ... 35:
            cout << "Youth";
            break;
        default:
            cout << "seniors";
    }
}




  int main() {

    int a = 2, b = 6, temp;
    temp = a;
    a = b;
    b = temp;
    cout << " Hello, World! I just started learning c++" << endl;

    double x = 10;
    int y = 5;
    double z = (x + 10) / (3 * y);
    cout << z  << endl;


   double m = 10;
    int n = 5;
    double q = (m + 10) / (3 * n);
    cout << q << endl;


    double result = pow(2, 5);
    cout << result;

    auto num = 3.2487;
    cout << num;

    int xx {0xF};
   cout << xx << endl;

   cout << "Enter max value!";
   int maxValue;
   cin >> maxValue;

    cout << "Enter min Value!";
    int minValue;
    cin >> minValue;

   int game_Name = (rand() % (maxValue - minValue + 1)) + minValue;
   cout << game_Name << endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

   return 0;
}



//how to use comment?
//






#include <iostream>
using namespace std;

int main(){
    int numRows;
    cout << "\nDisplay a pattern like a pyramid with numbers increased by 1:\n";
    cout << "Enter the number of rows: ";
    cin >> numRows;

    int spaces = numRows + 3,  number = 1, row, spaceCount, count;

    for (row = 1; row <= numRows; ++row){
        for (spaceCount = spaces; spaceCount >= 1; --spaceCount){
            cout << " ";
        }

        for (count = 1; count <= row; ++count){
            cout << number++ << " ";
        }
        cout << endl;
        --spaces;
    }

    return 0;
}


//past question - there's an error
#include <iostream>
using namespace std;
int main() {
    double a = 2.5;
    int b = 3;
    b = a;
    cout << b;
}


//program to calculate lcm

#include <iostream>
using namespace std;

    int lcm (int, int);
    int main (){
    int n1 = 11;
    int n2 = 22;
    cout << "lcm of  " << n1 << " and " << n2 <<" is  " << lcm(n1, n2);
    return 0;
    }

    int lcm(int a, int b) {
    int i = a;
    int j = b;
    while (i != j){
        if (i < j){
            i = i + a;
        }
        else {
            j = j + b;
        }
    }
    return i;
    }




//global and local scope

#include <iostream>
using namespace std;
 int salary = 5000;
 int main(){
     int x = 100;
     cout<< "salary = " << salary <<endl;
     return x;

 }
 int showx(){
     cout<< "salary from main"<< salary <<endl;
     cout <<"value of x" << x << endl;
     cout<<"x from function"<< showx();
 }
      return 0;
}







//variable reassignment, pre & post-increment/decrement
 #include<iostream>
 using namespace std;

 int main()
 {
 	int num1 =3, num2 =8, num3 =0;
 	num3 = num2;
 	cout<<"num3 = "<<num3<<endl;
 	num2 += num1;
 	cout<<"num2 = "<<num2<<endl;
 	num2 -= num1;
 	cout<<"num2= "<<num2<<endl;
 	return 0;
 }







//variable reassignment, pre & post-increment/decrement


  #include<iostream>
 using namespace std;
 int main()
 {
 	int n = 5;
 	cout << n++ <<endl;
 	cout << ++n <<endl;
 	cout << n-- <<endl;
 	cout << --n <<endl;
 	return 0;
 }







//boolean expression and manipulation

 #include<iostream>
using namespace std;

 int main()
 {
 	bool b1 = false;
 	bool b2 = true;
 	cout<<"b1||b2 = " <<(b1 || b2)<<endl;
 	cout<<"b1&&b2 = " <<(b1 && b2)<<endl;
 	cout<<"!b1 =    " << !b1 << endl;
 	cout<<"!b2 =    " << !b2 << endl;
 	return 0;
 }




//bitwise operation in c++ (leftshift, rightshift, xor, compliment(tilde)

#include<iostream>
 using namespace std;

 int main()
 {
 	int x = 11;
 	int y = 22;
 	cout<< "(x&y)= " <<(x & y) <<endl;
 	cout << "(x|y)= " <<(x | y)<<endl;
 	cout<< "(x^y) = " <<(x ^ y)<<endl;
 	cout<<"(~y)= "<<(~y)<<endl;
 	cout<<" (y<<1)= "<<(y<<1)<<endl;;
 	cout<<"(y>>2)= "<<(y>>2);
 	return 0;
 }




//ternary operator in c++
#include <iostream>
 using namespace std;

 int main(){
 	char score = 80;
 	char grade = (score >= 70)? 'p':'f';
 	cout << grade;
 	return 0;
 }




//bitwise operators
#include <iostream>
 using namespace std;

 int main()
 {
 	int num1 = 11;
 	int num2 = 22;

 	cout<< "~num1 = " << (~num1)<<endl;
 	cout<< "num1<<1 = " <<(num1<<1)<<endl;
 	cout<< "num1>> 2 = " << (num2>>1)<<endl;
 	cout<< "num1>> 2 = " << (num2>>2)<<endl;

 	return 0;
 }





 //addition of numbers gotten from user input
 #include<iostream>
 using namespace std;

 int main()
 {
 	int a, b, sum;
 	cout<<"enter a: ";
 	cin>>a;
 	cout<<"enter b: ";
 	cin>>b;
 //	cout<<"a"<<"+"<<"b"<<"="<<" "<<(a+b)<<endl;
 cout<<"sum of a and b is : "<<(a+b);
 	return 0;
 }




 //addition of numbers gotten from user input using functions

#include<iostream>
 using namespace std;
 int sum(int ,  int );
 int main(){

 	int a, b;
 	cout<<"enter a: ";
 	cin>>a;
 	cout<<"enter b: ";
 	cin>>b;
 	cout<<"sum of a and b is: "<<sum(a,b);
 	return 0;
 }
 int sum(int a, int b){;
 int c=a+b;

 return c;}






//program to calculate the lcm of two numbers
#include<iostream>
 using namespace std;
 int lcm(int, int);
 int main(){
     int a, b;
 cout<<"enter a: ";
 cin>>a;
 cout<<"enter b: ";
 cin>>b;
 cout<<"lcm of "<<a<<" and"<< b <<"is: "<<lcm(a, b);
 return 0;
 }
 int lcm(int a, int b){
     int i =a;
     int j =b;
     while (i!=j){
         if (i<j){
             i =i +a;}
             else {
                 j = j+b;}
     }
     return i;
 }






   //program to calculate a square of a number from user input
 #include<iostream>
 using namespace std;
int sqr(int);
 int main(){
     int a;
     cout<<"enter a: ";
     cin>>a;
     cout<<"square of"<<" "<<a<<" "<< "is"<<" "<<sqr(a);
     return 0;
 }
 int sqr(int a){
     int b = a*a;
     return b;
 }




//how to use the pow function
 #include<iostream>
 #include<(math>
 using namespace std;
 int main()
 {
 	cout<<"2 to power5 is"<<" "<<pow(2, 5);
 	return 0;
 }


// program to calculate factorial of a number
 #include<iostream>
 using namespace std;
 int main (){

 	int n, factn;
 	factn = 1;
 	n =5;
 	for(int i=1; i<=n; i++){
 	    factn *=i;
 	}
 	cout<< "factorial of "<<n<<"is "<<factn;
 	return 0;
 }

// acessing elements of an array

 #include<iostream>
 using namespace std;
 int main()
 {
 	int n[] = {4, 3, 2, 1, 0};
 	for (int i =0; i<5;i++){
 	    cout<<n[i]<<endl;}
 	    return 0;
 }




//factorial of a number using recursion

#include<iostream>
 using namespace std;
 int factn(int n){
     if(n<=1){
         return 1;
     }
     else
     return n*factn(n-1);}

 	int main(){
 	    int n=5;
 	    cout<<"the fact of " << n << " is " << factn(n);
 	    return 0;
 }






//program to calculate lcm of a number
#include<iostream>
 using namespace std;
 int lcm(int, int);
 	int main(){
 	      int  n1 = 15;
 	      int  n2 = 6;
 	      cout<<"lcm of "<<n1<<" "<<"and"<<" "<<n2<<" "<<"is  "<< " "<<lcm(n1, n2);
 	    return 0;
 }
 int lcm(int a, int b){
    int i = a;
    int j =b;

  while(i !=j){
      if (i<j){
          i = i+a; }
          else{
             j = j+b;
             }
  }
 }




 //BMI (Body Mass Index) calculator

#include<iostream>
 using namespace std;
 void bmi_weight(double h){
     double lower, upper;
     lower = 18.5*h*h;
     upper = 24.9*h*h;
     cout<<"your weight range should be within"<<" "<< lower<<" "<<"to"<<" "<<upper<<endl; }
 int main(){
     double height;
     cout<<"enter your height:";
     cin>>height;
     bmi_weight(height);
     return 0;

 }



*/


#include<iostream>
 using namespace std;
 class Polygon {
 int sides;
 public:
     Polygon(int n){
     this -> sides = n;
     }

     double calcExtAngle(){
     return 360/this -> sides;
     }

     ~ Polygon() {
     cout << "goodbye" << endl;
     }

     int calcSumofIntAngle() {
     return 180 * (this -> sides - 2);
     }
};

int main () {
Polygon P1(3), P2(5);

cout << "Exterior angle " << P2.calcExtAngle() << endl;
cout << "sum of interior angle " << P1.calcSumofIntAngle();
return 0;
}










/*

#include<iostream>
 using namespace std;
 class Polygon {
 int sides;
 public:
     void setsides(int n){
     this -> sides = n;
     }

     double calcExtAngle(){
     return 360/this -> sides;
     }
     int calcSumofIntAngle() {
     return 180 * (this -> sides);
     }
};

int main () {
Polygon P1(3), P2(5), P3(10);

cout << "Exterior angle " << P1.calcExtAngle() << endl;
cout << "sum of interior angle " << P1.calcSumofIntAngle();
return 0;
}
*/







