#include "ChronosClass.h"
#include "Utilities.h"
using namespace std;

int main()
{
	steadyTime time;
	time.addTimePoint("1");
	Sleep(40);
	time.addTimePoint("2");
	time.duration(Make("1", "2"),"test");
	getchar();
	return 0;
}