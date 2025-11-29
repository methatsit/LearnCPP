#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Hello" << " world!";
    
    int x{ 5 };
    std::cout << "\nx is equal to: " << x << std::endl;

    std::cout << "Hi!" << std::endl;
    std::cout <<  "My name is Alex." << std::endl;
    
    std::cout << "x is equal to: " << x << '\n';	// single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";			// double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";		// between double quotes in existing text (conventional)

    std::cout << "Enter a number: "; // ask user for a number

    int y{};			     // define variable y to hold user input (and value-initialize it)
    std::cin >> y;		     // get number from keyboard and store it in variable x

    std::cout << "You entered " << y << '\n';

    std::cout << "Enter two numbers separeted by a space: ";

    int w{};			// define variable w to hold user input (and value-initialize it)
    int z{};			// define variable z to hold user input (and value-initialize it)
    std::cin >> w >> z;		// get two numbers and store in variable w and z respectively

    std::cout << "You entered " << w << " and " << z << '\n';

    std::cout << "Enter two numbers: ";

    int a{};
    std::cin >> a;

    int b{};
    std::cin >> b;

    std::cout << "You entered " << a << " and " << b << '\n';

    return 0;
}
