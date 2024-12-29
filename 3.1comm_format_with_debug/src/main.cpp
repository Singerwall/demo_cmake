#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++20", "World", "from", "VS Code", "and the C++ extension!","https://code.visualstudio.com/docs/cpp/config-linux"};

    for (const string& word : msg)
    {
        cout << word << " "<<endl;
    }
    cout << endl;
}
