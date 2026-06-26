#include <iostream>
using namespace std;

class CareerAccelerator
{
public:
    static void main()
    {
        cout << "India's Graduate Skill Index" << endl;
        cout << "Career Accelerator\n" << endl;

        string skills[] = {
            "Skill Development",
            "Real Projects",
            "Interview Preparation",
            "Career Guidance"
        };

        for (string skill : skills)
        {
            cout << skill << endl;
        }

        cout << "\nContact:" << endl;
        cout << "bevintop@gmail.com" << endl;
    }
};

int main()
{
    CareerAccelerator::main();
    return 0;
}