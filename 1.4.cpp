#include <iostream>

int main()
{
	// int x;		// define an integer variable named x (preferred)
	// int y, z;	// define two integer variables, named y and z

	// int width;	// define an integer variable named width
	// width = 5;	// assignment of value 5 into variable width

	// variable width now has value 5

	// std::cout << width; 	// prints 5
	 
	// width = 7; 		// change value stored in variable width to 7
	
	// std::cout << width; 	// prints 7
	
	// int width  {5};		// define variable width and initialize with initial value 5
	// std::cout << width;	// prints 5
	
	// int a;			// default-initialization (no initiallizer)
	
	// Traditional initialization forms:
	// int b = 5;		// copy-initialization (initial value after equals sign)
	// int c ( 6 );		// direct-initialization (initial value in parenthesis)
	
	// Modern initialization forms (preferred):
	// int d {7};		// direct-list-initialization (initial value in braces)
	// int e {};		// value-initialization (empty braces)
	
	// An integer can only hold non-fractional values.
    	// Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    	// Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    	// int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

    	int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    	int w3 (4.5);   // compiles: w3 direct-initialized to value 4
	return 0;
}
