#include <iostream>
using namespace std;
#include <string.h>

bool isPalindrome(int x) {
    int inputValue = x;
    //complete the function
    int division = 1;
    int count = 0;
    while ( x / division > 0)
    {
        division *= 10;
        ++count;
    }

    char palindromeKeeper[count];
    for (int i = 0; i < count; ++i) palindromeKeeper[i] = 0;
    while ( count > 0)
    {
        int oneDigit = x % 10;    
        int newNumber = x / 10;    
        // cout << oneDigit << endl;
        sprintf(palindromeKeeper,"%s%d",palindromeKeeper, oneDigit);
        //cout << newNumber << endl;
        count --;
        x = newNumber;
    }
    int palindromeValue = atoi(palindromeKeeper);
    // cout << palindromeValue << endl;

    return (palindromeValue == inputValue)? true : false;
}

bool isPalindrome2(int x) 
{
    const char * cArr =  to_string(x).c_str();
    int size =  strlen(cArr);
    int pos = 0;
    bool flag = false;
    if(size == 1)
    {
        flag = true;
    }
    else
    {
        while (pos < size/2)
        {
            
            if (cArr[pos] == cArr[size - 1 - pos])
            {
                pos++;
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
};

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome2(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
