#include <iostream>
#include <fstream>
using namespace std;

void openFile(string filePath)
{
	try
	{
		ofstream myfile;
		myfile.open(filePath);
		myfile << "Writing this to a file.\n";
		myfile.close();
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}

int main()
{


	return 0;
}