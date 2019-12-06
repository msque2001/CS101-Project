#include <iostream>
using namespace std;

void string_sorter(char [], int =10);

int main()
{
    char theString[10];
    string_sorter(theString);




    return 0;
}

void string_sorter(char str[], int str_length)
{
    int index, char1, char2;
    char temp;
    bool sorted = false;

    cout << "Please enter a string of size less then or equal 10 characters: ";
    cin >> str, cout << endl;
    cout << "The Orginal string: " << str << endl;
    while(sorted == false)
    {
        index = 0;
        sorted = true;
        while(str[index] != '\0' && str[index + 1] != '\0')
        {
            char1 = int(str[index]);
            char2 = int(str[index + 1]);
            if(char1 > char2)
            {
                temp = str[index + 1];
                str[index + 1] = str[index];
                str[index] = temp;
                sorted = false;
            }
            index++;
            
        }   
    }

    cout << "The string in alphabetical order is: " << str;
}