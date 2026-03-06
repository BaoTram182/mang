/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int k, x, n = 5;
    double a[10]={ 21, 9, 06, 94, 18};
    
    for ( int i = 0; i < n; i++)
    {
        cout << "Giá trị phần tử thứ " << i+1 << " : ";
        cin >> a[i];
    }
    
    cout << "Giá trị muốn xóa: ";
    cin >> x;
    cout << "Vị trí muốn xóa: ";
    cin >> k;
    
    for ( int i = k; i < n - 1; i++)
    {
        a[i] = a[ i + 1 ];
    }
    
    n--;
    cout << "Mảng sau khi xóa: ";
    
    for ( int i = 0; i < n; i++ )
    {
        cout << a[i] << " ";
    }
    
    

    return 0;
}