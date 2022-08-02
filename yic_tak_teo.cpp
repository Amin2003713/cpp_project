#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line_1;
    getline(cin, line_1);
    string line_2;
    getline(cin, line_2);
    string line_3;
    getline(cin, line_3);
    int counter = 0;
    if (line_1 == "XXX" && line_2 == "XXX" && line_3 == "XXX" || line_1 == "OXO" && line_2 == "OXO" && line_3 == "OXO" || line_1 == "XOO" && line_2 == "XOO" && line_3 == "XOO" || line_1 == "")
    {
        cout << "X WINS" ;
    }
    if ( line_1 == "OOO" && line_2 == "OOO" && line_3 == "OOO" || line_1 == "OXX" && line_2 == "OXX" && line_3 == "OXX" || line_1 == "XOX" && line_2 == "XOX" && line_3 == "XOX")
    return 0;
}