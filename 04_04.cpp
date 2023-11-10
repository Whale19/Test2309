#include <iostream>
using namespace std;

int main() 
{
    string m;
    getline(cin, m);
    int n = m.length();
    for (int i = 0; i < n; i++)
    {
        if (islower(m[i])) 
        {
            m[i] = toupper(m[i]); 
        }
        else if (isupper(m[i]))
        {
            m[i] = tolower(m[i]); 
        }
    }
    cout << m;
    return 0;
}