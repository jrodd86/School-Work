#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string str)
{
  int length = str.length();
  for (int i = 0; i < length / 2; i++){
    if (tolower(str[i]) != tolower(str[length - 1 - i])){
      return false;

    }
  }
  return true;
}

int main() {

cout << isPalindrome("madam")<<endl;
  if(isPalindrome("madam")== true){
    cout << "madam is a palindrome"<<endl;
  }
  else{
    cout << "madam is not a palindrome"<<endl;
  
  }
cout << isPalindrome("22")<<endl;
  if(isPalindrome("22")== true){
    cout << "22 is a palindrome"<<endl;
  }
  else{
    cout << "22 is not a palindrome"<<endl;
  }
cout << isPalindrome("abBa")<<endl;
 if(isPalindrome("abBa")== true){
    cout << "abBa is a palindrome"<<endl;
  }
  else{
    cout << "abBa is not a palindrome"<<endl;
  }
cout << isPalindrome("67876")<<endl;
if(isPalindrome("67876")== true){
    cout << "67876 is a palindrome"<<endl;
  }
  else{
    cout << "67876 is not a palindrome"<<endl;
  }
cout << isPalindrome("444244")<<endl;
if(isPalindrome("444244")== true){
    cout << "444244 is a palindrome"<<endl;
  }
  else{
    cout << "444244 is not a palindrome"<<endl;
  }
cout << isPalindrome("trYmeuemyRT")<<endl;
if(isPalindrome("trYmeuemyRT")== true){
    cout << "trYmeuemyRT is a palindrome"<<endl;
  }
  else{
    cout << "trYmeuemyRT is not a palindrome"<<endl;
  }
    return 0;
}
