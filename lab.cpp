#include <iostream>
using namespace std;
int main()

{
    long marks[3];
    string grade[7] = {"A+", "A", "B+", "B", "C+", "C", "D+"};
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter the marks of subject no." << i << " is: ";
        cin >> marks[i];
    }
    cout << "=============================================" << endl <<endl;
    for (int i = 1; i <= 3; i++)
    {
        if (marks[i] >= 90 && marks[i] <= 100)
        {
            cout << "The grade of subject no." << i << " is: " << grade[0] << endl;
        }
        else if (marks[i] >= 85 && marks[i] < 90)
        {
            cout << "The grade of subject no." << i << " is: " << grade[1] << endl;
        }
        else if (marks[i] >= 80 && marks[i] < 85)
        {
            cout << "The grade of subject no." << i << " is: " << grade[2] << endl;
        }
        else if (marks[i] >= 75 && marks[i] < 80)
        {
            cout << "The grade of subject no." << i << " is: " << grade[3] << endl;
        }
        else if (marks[i] >= 70 && marks[i] < 75)
        {
            cout << "The grade of subject no." << i << " is: " << grade[4] << endl;
        }
        else if (marks[i] >= 65 && marks[i] < 70)
        {
            cout << "The grade of subject no." << i << " is: " << grade[5] << endl;
        }
        else if (marks[i] >= 60 && marks[i] < 65)
        {
            cout << "The grade of subject no." << i << " is: " << grade[6] << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
    return 0;
}
