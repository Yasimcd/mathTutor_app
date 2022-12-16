//Math Tutor Program.
// Yasim Cruz


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned seed;
    
    seed = time(0);
    srand(seed);

    int number1 = rand() % 9 + 1;
    int number2 = rand() % 9 + 1;
    int sum;

    cout << "Math Tutor Program!" << endl;
    cout << number1 << " + " << number2 << " = ";
    cin >> sum;
    cout << "Correct Answer is: "<< number1 + number2 << endl;

    



    return 0;

}