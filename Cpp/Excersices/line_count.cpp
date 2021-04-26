#include "line_count.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void line_count::fileLineCount(char* file_name)
{
    ifstream LineCount(file_name);
    int count = 0;
    char c;
    while (LineCount.get(c))
    {
        if (c == '\n')
            count++;
    }
    cout << "The count of lines is: " << count;
}