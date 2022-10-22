#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  const double pi = 3.141592653589;

  setprecision(3);
  cout << pi << endl;
  cout<<setprecision(16)<<pi<<endl;

}