#include	<iostream>
#include	"Counter.h"
using namespace std;

int  main()
{
	Counter  cnt; 	
	cnt.reset();     
	cout << "1 ?" << cnt.getValue() << endl;
	cnt.count();    	
	cnt.count();
	cout << "2 ?" << cnt.getValue() << endl;
	return 0;
}
