#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

void write_something(ostream& os) {
  os<<"hi 3*3 = ? "<<3*3<<endl;
}

int main(int argc, char* argv[]) {
  ofstream myfile("example.txt");
  stringstream mysstream;

  write_something(cout);
  write_something(myfile);
  write_something(mysstream);

  cout<<"mysstream : "<<mysstream.str()<<endl;
}