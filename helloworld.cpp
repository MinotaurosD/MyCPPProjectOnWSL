#include <iostream>
#include <vector>
#include <string>

using namespace std;

int GetSize(int data[]);

int main()
{
    vector<string> msg = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

int GetSize(int data[])
{
    return sizeof(data);
}
