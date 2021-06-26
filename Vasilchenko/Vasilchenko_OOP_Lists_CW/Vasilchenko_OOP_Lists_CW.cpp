#include <iostream>
#include "List.h"




int main()
{
    List list;

    char s[] =  "Hello World!!!\n";

    cout << s << "\n\n";
    
    for (int i = 0; i < strlen(s); i++)
    {
        list.AddFirst(s[i]);
    }

    list.Print();

    list.AddAny('d', 5);

    list.Print();




}
