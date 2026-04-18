#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    int quantityinput;
    cout << "How many names you want to write? : ";
    cin >> quantityinput;
    vector<string> names;
    string NameInputs;
    for (int i = 1; i < quantityinput + 1; i++)
    {
        cout << "Enter " << "name " << i << ": ";
        cin >> NameInputs;
        names.push_back(NameInputs);
    }
    ofstream file("projectPeopleNames.txt");
    for (string name : names)
    {
        file << name << endl;
    }
}
