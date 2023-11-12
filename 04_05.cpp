#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string who = "";
    int bonus = 0;
    int total = 0;

    for (int i = 0; i < n; ++i) {
        string name;
        int avg, score, paper;
        bool lead, west;

        cin >> name >> avg >> score;
        string leadStr, westStr;
        cin >> leadStr >> westStr;

        lead = (leadStr == "Y");
        west = (westStr == "Y");

        cin >> paper;

        int temp = 0;

        if (avg > 80 && paper >= 1) 
        {
            temp += 8000;
        }
        if (avg > 85 && score > 80) 
        {
            temp += 4000;
        }
        if (avg > 90) 
        {
            temp += 2000;
        }
        if (avg > 85 && west)
        {
            temp += 1000;
        }
        if (score > 80 && lead) 
        {
            temp += 850;
        }

        if (temp > bonus) 
        {
            who = name;
            bonus = temp;
        }

        total += temp;
    }

    cout << who << endl;
    cout << bonus << endl;
    cout << total << endl;

    return 0;
}
