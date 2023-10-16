#include <bits/stdc++.h> 
using namespace std;

// void reverse(char str[], int low, int high) {
//   while (low <= high) {
//     swap(str[low], str[high]);
//     low++;
//     high--;
//   }
// }

// void reverseWords(char str[], int n) {
//   int start = 0;
//   for (int end = 0;end < n;end++) {
//     if (str[end] == ' ') {
//       reverse(str, start, end - 1);
//       start = end + 1;
//     }
//   }
//   reverse(str, start, n - 1);
//   reverse(str, 0, n - 1);
// }


// void reverse(char str[], int start, int end)
// {
//   while (start <= end)
//   {
//     swap(str[start], str[end]);
//     start++;
//     end--;
//   }
// }


string reverseWords(string s) {
  int n = s.size();
  int i = n - 1;

  // Require to store the resultant string (output)
  string output = "";

  while (i >= 0) {
    // Skip all the consecutive spaces and find the end point of a word
    while (i >= 0 && s[i] == ' ') i--;
    int endPoint = i;

    // Skip all the consecutive characters and find the start point of that word
    while (i >= 0 && s[i] != ' ') i--;
    int startPoint = i + 1;

    // Store the word to the resultant string (output)
    output.append(s.substr(startPoint, endPoint - startPoint + 1));
    output.push_back(' ');
  }

  // Iterate and remove the additional spaces 
  while (!output.empty() && output.back() == ' ') {
    output.pop_back();
  }

  return output;
}


int main()
{
  string s = " sky is blue  ";
  cout << "before reversing words in the string: " << endl;
  cout << s << endl;
  int n = s.length();
  string t = reverseWords(s);
  cout << "After reversing words in the string:" << endl;
  cout << t << endl;

  return 0;
}