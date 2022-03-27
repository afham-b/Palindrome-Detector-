#include <cctype>
#include <iostream>
#include <string>
using namespace std;
 
string alpha(string s);
string lower(string s);
string reverse(string s);
 
bool ispalindrome(string s);
 
int main() {
  string sentence;
  cout << "This program recognizes palindromes." << endl;
  cout << "Enter one sentence at a time." << endl;
  cout << "When finished, just press ENTER." << endl << endl;
 
  cout << "Enter a sentence:" << endl;
  getline(cin, sentence);
  while (sentence.size() > 0)
  {
    if (ispalindrome(sentence))
      cout << reverse(sentence) << endl;
    else
      cout << "This is not a palindrome." << endl;
    cout << endl;
    cout << "Enter a sentence:" << endl;
    getline(cin, sentence);
  }
 
  return 0;
}
 
bool ispalindrome(string s) {
  return alpha(lower(s)) == reverse(alpha(lower(s)));
}
 
string alpha(string s) {
  string s_alpha;
  for (int i = 0; i < s.size(); i++)
    if (isalpha(s[i]))
      s_alpha = s_alpha + s[i];
  return s_alpha;
}
 
string lower(string s) {
  string s_lower;
  for (int i = 0; i < s.size(); i++)
//    s_lower = s_lower + char(tolower(s[i]));
    s_lower += tolower(s[i]);
  return s_lower;
}
 
string reverse(string s) {
  string s_rev; // Reverse of s, to be returned
  for (int i = s.size() - 1; i >= 0; i--)
    s_rev = s_rev + s[i];
  return s_rev;
}