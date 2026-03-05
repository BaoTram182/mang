/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double a[10] = {10, 15, 30, 40, 2};
    int n = 5;
    double tim;
    
    cout << "Nhập giá trị cần tìm: ";
    cin >> tim;
    bool thay = false;
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] == tim )
        {
         thay = true;
        cout << "Đã tìm thấy " << tim << " tại vị trí " << i;
        break;
        }
    }
    if ( thay == false )
    {
        cout << "Không tìm thấy " << tim << " trong mảng ";
    }


    return 0;
}