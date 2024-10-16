#include<iostream>
#include<thread>

using namespace std;
//void printMessage() 
//{
//	std::cout << "Hello from a separate thread!" << std::endl;
//}
//
//void increamentValue(int& number)
//{
//	++number;
//}
//
//int main(int argc, char* argv[])
//{
//	cout << "Welcome to c++ threading demo" << endl;
//
//	//create thead
//	std::thread printMessageThread(printMessage);
//	//join the thread so main thread will wait for completion of the printMessageThread.
//	printMessageThread.detach();
//	cout<<"printMessageThread.get_id() :: " << printMessageThread.get_id() <<endl;
//
//	int number = 0;
//	cout << "number value : " << number << endl;
//	std::thread incrementThread(increamentValue, std::ref(number));
//	incrementThread.join();
//	cout << "number value after incrementThread : " << number<< endl;
//	return 0;
//}