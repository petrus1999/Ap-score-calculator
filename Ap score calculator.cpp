// Ap score calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int SepediHL, EngFal, LO, Mathematics, Physicalsciences, Lifesciences, Agriculturalsciences;
    int Totalapscore;

    cout << "Enter your sepedi level of your  marks" << endl;
    cin >> SepediHL;
    cout << "Enter your English level of your  marks" << endl;
    cin >> EngFal;
    cout << "Enter your LO level of your  marks" << endl;
    cin >> LO;
    cout << "Enter your Mathematics level of your  marks" << endl;
    cin >> Mathematics;
    cout << "Enter your Physical sciences level of your  marks" << endl;
    cin >> Physicalsciences;
    cout << "Enter your  Life sciences level of your  marks" << endl;
    cin >> Lifesciences;
    cout << "Enter your Agricultural sciences level of your  marks" << endl;
    cin >> Agriculturalsciences;

    Totalapscore = SepediHL + EngFal + LO + Mathematics + Physicalsciences + Lifesciences + Agriculturalsciences;
   
    
    cout << "The total apscore  is " << Totalapscore << endl;
    if (Totalapscore >= 30 ) {
        cout << "You qualify to do medicine" << endl;
    }
    else if (Totalapscore >=25 && Totalapscore < 30 ) {

        cout <<"You qualify to do nursing" << endl;    
    }
    else if (Totalapscore >= 22 && Totalapscore < 25) {

        cout << "You qualify to art" << endl;
    }
    else if(Totalapscore >= 19&&Totalapscore < 22) {

        cout << "You qualify to do social work" << endl;
    }
    else if (Totalapscore >= 15 &&Totalapscore < 19) {

        cout << "You qualify to do marketing " << endl;

    }


    return 0;
    



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
