#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

extern std::mutex mx;
std::condition_variable cv;
bool ready = false;
using namespace std;

bool GetReady()
{
	return ready;
}
int counter = 0;
void ping()
{
	
	while(counter  < 20)
	{
		std::unique_lock<std::mutex> lock(mx);
		cv.wait(lock, GetReady);
		counter++;
		cout << "Ping" << endl;
		ready = false;
		cv.notify_one();
	}
	
}
void pong()
{
	while (counter < 20)
	{
		std::unique_lock<std::mutex> lock(mx);
		cv.wait(lock, [] { return !ready; });
		cout << "Pong" << endl;
		ready = true;
		counter++;
		cv.notify_one();
	}
}
using namespace std;
extern int main(int argc, char* argv[])
{
	std::thread t1(ping);
	std::thread t2(pong);
	
	t1.join();
	t2.join();
	return 0;
}