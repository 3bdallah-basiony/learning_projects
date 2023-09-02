# include <iostream>
using namespace std ;


int main()
{
     int n1 , n2 ;
    cout << "enter your first number \n";
    cin >> n1 ;
    cout << "now enter the seconed number \n";
    cin >> n2 ;

      int op ;
    cout << "now choose an operation \n";
    cout << " choose 1 for +\n";
    cout << "choose 2 for - \n";
    cout << "coose 3 for * \n";
    cout << "choose 4 for / \n";
    cin >> op ;

    switch (op)
    {
    case 1:
        cout << n1 +n2 ;
        break;
    case 2 :
        cout << n1 - n2 ;
        break;
    case 3 :
         cout << n1 * n2 ;
         break;
    case 4 :
        cout << n1 / n2 ;
        break;
    default:
        cout << "invalid answer \n";
        break;
    }
    return 0 ;
}