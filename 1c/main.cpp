#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// int main()
// {
//     char var;
//     // cin >> var;
//     // cout << var;
//     cout << "Hello,\tworld!" << endl << "\"Privet\"";
// }

// int main() 
// {
//     int a = 5;
//     int b = 2;
//     // int c = a + b;
//     int c = a + 2; //так же мы можем не присваивать название переменой и просто это делать в cout  и там уже вписывать к примеру a / b 
//     // cout << c;
//     // cout << a/b;
//     // cout << a % b;
// }

// int main()
// {
//     int a = 11;
//     int b = 3;
//     float c = (float)a / b; //если мы хотим указать чтобы нам посчитала даже после запятой то нам нужно прописать когда называем переменую тип например как здесь указано float и после равно в душках мы так же указываем float
//     cout << c;
// }

// int main()
// {
//     int var = 5;
//     ++var;
//     cout << var << endl;
//     var++;
//     cout << var << endl;

// }

// int main()
// {
//     int var = 5;
//     int var2 = 2 * var++;
//     cout << var2 << endl;
// }

// int main()
// {
//     int count = 10;
//     cout << "count = " << count << endl;
//     cout << "count = " << --count << endl;
//     cout << "count = " << count << endl;
//     cout << "count = " << count-- << endl;
//     cout << "count = " << count << endl;

// }

// int main()
// {
//     int count = 10;
//     count /= 5;
//     cout << count; 
// }

// int main()
// {
//     int count = 10;
//     cout << "count =" << count-- <<endl;
//     cout << "count =" << count << endl;
// }

// int main() 
// {
//     // string Month = "July";
//     // cout << Month.length() << endl;
//     // Month.clear();
//     // cout << Month.empty();
//     string input; //это для того чтобы водить данные в консоли (у меня почему-то пока что не получается вести)
//     cin >> input;
//     cout << input;
// }

// int main()
// {
//     string var1 = "Hello";
//     string var2 = "_";
//     string var3 = "Pon4ik";
//     cout << var1 + var2 + var3;
// }

// int main()
// {
//     string s;
//     getline(cin,s);
//     cout << s << endl;

// }

// int main()
// {
//     bool choice = false;
//     if (choice) {
//         cout << "True";
//     }
//     else {
//         cout << "False";
//     }
// }

// int main()
// {
//     int a = 12;
//     if (a == 15) {
//         cout << "True";
//     }
//     else {
//         cout << "False";
//     }
// }

// int main()
// {
//     int a = 13;
//     if (a == 15) {
//         cout << "a = 15";
//     }
//     else if(a == 3) {
//         cout << "a = 3";
//     }
//     else {
//         cout << "Nope!";
//     }
// }

int main()
{
    int a,b;
    float pole;
    printf("Program oblicza pole prostokata");
    printf("\nPodaj bok a.");
    scanf("%Id", &a);
    printf("\nPodaj bok b.");
    scanf("%Id", &b);
    pole = a*b;
    printf("\nPole prostokata o boku a = %Id i boku b = %Id wynosi %10.2E",a,b,pole);
    return 0;

}