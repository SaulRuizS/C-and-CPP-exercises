#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream LinesCount(argv[1]);
    int count = 0;
    char c;

    while (LinesCount.get(c))
    {
        if (c == '\n')
        {
            count++;
        }
    }
    
    cout << "The count of lines is: " << count;

    return 0;
}
