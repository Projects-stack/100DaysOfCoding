#include<iostream>
#include<string.h>  // included to use strcpy(), strcmp() like functions
#include<string> // included to use string class
using namespace std;

// char array ->

/*  1. Using null-terminated character arrays are not technically data types.
    2. So C++ operators cannot be applied to them
    3. Limitations of char array :
        -> char s1[10] = "Hello";
           s1 = "Students";  // wrong
           strcpy(s1, "Students");
           char s2[20];
           s2 = s1;  // wrong
           strcpy(s1, s2)
           s2 > s1;  // wrong
           int i = strcmp(s1, s2);
           char s3[30];
           s3 = s1 + s2  // wrong
           strcpy(s3, strcat(s1, s2));
*/

// string class ->

/*  1. The string class is a specialization of a more general template class called basic_string
    2. Since defining a class in C++ is creating a new data type, string is derived data type
    3. This means operators can be overloaded for the class.
    4. Time complexity of string class is more than char array.
    5. String is safe than char array
    6. string is an another container class.
      To use string class, you have to include string header.
        - #include<string>
    7. Methods available in string class :
        1) assign()     3) insert()     5) erase()      7) rfind()      9) c_str()
        2) append()     4) replace()    6) find()       8) compare()    10) size()
*/

int main()
{
    string s1;
    s1 = "Hello";

    string s2 = " Students";
    s1 += s2;

    // you can use comparators on string
    if(s1 == s2) {
        cout << s2;
    }
    else {
        cout << s1 << endl;
    }

    string s3;
    cout << "Enter your name : ";
    cin >> s3;
    cout << "Hello," << s3 << endl;


    /*  1. You can mix string objects with another string object or char array
        2. C++ string can also be concatenated with character constants.
    */
    string s4 = "Hello,";
    char str[] = " Students";
    string s5 = s4 + str;
    cout << s5 << endl;

    // assign()
    string s6;
    s6.assign("Hello");
    cout << "After assign : " << s6 << endl;

    // append()
    s6.append(" Students");
    cout << "After append : " << s6 << endl;

    // insert()
    s6.insert(2, "123");
    cout << "After insert : " << s6 << endl;

    // replace()
    s6.replace(2,2,"A");
    cout << "After replace : " << s6 << endl;

    // erase()
    s6.erase();
    cout << "After erase : " << s6 << endl;

    // find() & rfind()
    s6 = "Hello, friends";
    int x = s6.find("friends");
    cout << "String index using find() function : " << x << endl;
    int y = s6.find("asdfad");
    cout << "Searching string which is not present will return : " << y << endl;

    // compare()
    // returns 0 if strings are same
    // returns -1 if string 1 is alphabetically less than string 2
    // returns 1 if string 1 is alphabetically more than string 2
    string s7 = "Amar";
    string s8 = "Amit";
    int z = s7.compare(s8);
    cout << z << endl;

    // c_str()
    // used to convert string to character array
    string s9 = "Hello";
    char str1[20];
    strcpy(str1, s9.c_str());
    cout << str1;

    // size()
    int s = s1.size();
    cout << "Size of string s1 = " << s;
}
