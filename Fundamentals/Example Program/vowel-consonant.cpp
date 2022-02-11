// Checking vowel-consonant

/* 
two library function: toupper(char), tolower(char)


 */

#include<iostream>
using namespace std;

int main()
{
    char letter;
    cout<< "Enter a letter to check vowel or consonant :";
    cin>>letter;
    letter = tolower(letter);
    if(letter =='a' || letter =='e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout<<letter<<" is vowel";
    }
    else
    {
        cout<<letter<<" is consonant";
    }

    return 0;
}