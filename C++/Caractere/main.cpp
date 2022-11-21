#include <iostream>

using namespace std;

void copy1 (char *, const char *);
void copy2 (char *, const char *);

int main ()
{
    char string1[10];
    char *string2 = "Hello, bitch";
    char string3[10];
    char string4 [] = "Goodbye bitch";

    copy1 (string1, string2);
    cout << "String 1 = " << string1 << endl;

    copy2 (string3, string4);
    cout << "String 3 = " << string3 << endl;
    return 0;
}

void copy1 (char *s1, const char *s2)
{
    for (int i = 0; (s1[ i ] = s2[ i ] ) != '\0'; i++);
}

void copy2 (char *s1, const char *s2)
{
    for (; ( *s1 = *s2 ) != '\0'; s1++, s2++);
}
