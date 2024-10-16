#include<new> // new, delete
#include<istream> // cin
#include<ostream> // cout
#include<iostream>

#include<thread>
#include<string>
#include<mutex>// mutex, lock_gaurd

//containers
#include<array>
#include<vector>
#include<deque>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

std::mutex mx;
void printMessage(const std::string& message)
{
	std::lock_guard<std::mutex> lock(mx);
	for (int i = 0; i < 10; i++)
	{
		cout << message << endl;
	}	
}

//int main(int argc, char* argv[])
//{
//	cout << "maint thread id : " << _threadid << endl;
//	std::thread t1(printMessage, "Thread 1");
//	std::thread t2(printMessage, "Thread 2");
//
//	t1.join();
//	t2.join();
//
//	return 0;
//}

//maint thread id : 29040
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 2
//Thread 1
//Thread 1
//Thread 1
//Thread 1
//Thread 1
//Thread 1
//Thread 1
//Thread 1
//Thread 1
//Thread 1