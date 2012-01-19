#include <ctime>
#include <windows.h>

bool QueryPerformanceCounterEmulation(LARGE_INTEGER* out)
{
	out->QuadPart = clock();
	return true;
}

void QueryPerformanceFrequencyEmulation(LARGE_INTEGER* out)
{
	out->QuadPart = CLOCKS_PER_SEC;
}
