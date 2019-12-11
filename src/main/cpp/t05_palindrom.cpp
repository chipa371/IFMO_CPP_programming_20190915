//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>


using namespace std;

int t05_palindrom() {
    string s;
    cin >> s;
    int n = s.length();
    bool a = 1;
    
    for(int i = 0; i < n/2; i++){
        if(s[i] == s[n-1-i])
            a = a&&1;
        else
            a = a&&0;
    }
    if(a == 0)
        cout << "no";
    else
        cout << "yes";
    
}
