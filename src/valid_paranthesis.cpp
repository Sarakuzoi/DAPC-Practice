#include <iostream>
#include <stack>

using namespace std;

bool valid_parantheses(stack<char> myStack, char s[]) {
  for (int i = 0; i < strlen(s); i++) {
    switch (s[i]) {
    case '(':
    case '[':
    case '{':
      myStack.push(s[i]);
      break;
    case ')':
      if (myStack.top() == '(')
        myStack.pop();
      else {
        return false;
      }
      break;
    case ']':
      if (myStack.top() == '[')
        myStack.pop();
      else {
        return false;
      }
      break;
    case '}':
      if (myStack.top() == '{')
        myStack.pop();
      else {
        return false;
      }
      break;
    }
  }

  return true;
}

int main() {
  stack<char> myStack;
  char s[256];

  cin.getline(s, 256);

  cout << valid_parantheses(myStack, s);
}