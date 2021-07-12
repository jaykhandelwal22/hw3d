#include "JayTimer.h"

using namespace std::chrono;

JayTimer::JayTimer()
{
	last = steady_clock::now();
}

float JayTimer::Mark()
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	return frameTime.count();
}

float JayTimer::Peek() const
{
	return duration<float>(steady_clock::now() - last).count();
}

