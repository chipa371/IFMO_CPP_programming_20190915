//Вводится один символ, измените его регистр. 
// То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. 
// Символы, не являющиеся латинской буквой, нужно выводить без изменений.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t03_toggle.h"
#include <iostream>


using namespace std;

int t03_toggle() {
    char a;
    cin >> a;
    int c;
    if(int(a) <= 122 && int(a) >= 97){
      c = int(a);
      c -= 32;
    }
  esle{
    if(int(a) <=  && int(a) >= ){
      int c = int(a);
      c += 32;
    }
    else{
      c = int(a);
    }
  }
    cout << char(c);
    return 0;

}
