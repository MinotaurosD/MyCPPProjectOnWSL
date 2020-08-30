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

    int data1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(data1); //求数组的大小

    int *data2 = data1;
    int size2 = sizeof(data2); //

    int size3 = GetSize(data1);

    cout << size1 << endl
         << size2 << endl
         << size3 << endl;
}

int GetSize(int data[])
{
    return sizeof(data);
}
