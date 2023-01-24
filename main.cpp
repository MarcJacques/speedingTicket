#include <iostream>
using namespace std;

int main() 
{
  int speed;
  const int LIMIT = 100;
  cout << "Enter speed:" << endl;
  cin >> speed;

  if (speed > LIMIT) {
    cout << "You must pay $1000 fine.\nYou must appear in court on Monday." << endl;
    
  } else {
    cout << "Thank you for being a shining example of driving safe." << endl;
  }
  return 0;
}