#include <string>
#include <iostream>
#include <filesystem>

using namespace std;

  
namespace fs = std::filesystems;
for (auto& p : fs::directory_iterator("../"))
if (is_regular_file(p))
cout << p << endl;
else if (is_directory(p))
cout << p << "else" << endl;
else
cout<< p << endl;