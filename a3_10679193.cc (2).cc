#include <iostream>
using namespace std;
int main()
{
int score=0;
cout << "Please enter your score :";
cin >> score;

switch(score)
{
    case 80 ... 100:
    cout << "Your grade is A";
    break;

    case 75 ... 79:
    cout << "Your grade is B+";
    break;

    case 70 ... 74:
    cout << "Your grade is B";
    break;

    case 65 ... 69:
    cout << "Your grade is C+";
    break;

    case 60 ... 64:
    cout << "Your grade is C";
    break;

    case 55 ... 59:
    cout << "Your grade is D+";
    break;

    case 50 ... 54:
    cout << "Your grade is D";
    break;

    case 45 ... 49:
    cout << "Your grade is E";
    break;

    default:
    cout << "Your grade is F";
    break;
}
    return 0;

}
