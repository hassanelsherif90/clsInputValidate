
#include <iostream>
#include "clsInputValidate.h"
#include <string>

using namespace std;

int main()
{
    cout << clsInputValidate::IsNumbeBetween(5, 1, 10) << endl;
    cout << clsInputValidate::IsNumbeBetween(5.6, 1.3, 10.3) << endl;
    cout << clsInputValidate::IsNumbeBetween(clsDate(), clsDate(1, 8, 2023), clsDate(31, 12, 2023))<< endl;
    cout << clsInputValidate::IsNumbeBetween(clsDate(), clsDate(31, 12, 2023), clsDate(1, 8, 2023))<< endl;

    cout << "\nPlease Enter Integer Number ? \n";
    int x = clsInputValidate::ReadIntNumber("Invalide Integer : try again : \n");
    cout << x << endl;


    cout << clsInputValidate::IsValiDate(clsDate(31, 12, 2023)) << endl;
    cout << clsInputValidate::IsValiDate(clsDate("32/12/2023")) << endl;
   
}


