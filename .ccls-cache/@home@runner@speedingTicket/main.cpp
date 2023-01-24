#include <iostream>
using namespace std;

int main() 
{
  int speed;
  cout << "Enter speed:" << endl;
  cin >> speed;

  if (speed > 100) {
    cout << "You must pay $1000 fine.\nYou must appear in court on Monday." << endl;
    
  } else {
    cout << "Thank you for being a shining example of driving safe." << endl;
  }
  return 0;
}