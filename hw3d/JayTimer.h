#pragma once
#include <chrono>

class JayTimer
{
public:
	JayTimer();
	float Mark();
	float Peek() const;
private:
	std::chrono::steady_clock::time_point last;
};