#include "JayException.h"

#include <sstream>


JayException::JayException(int line, const char* file) noexcept
	:
	line(line),
	file(file)
{}

const char* JayException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* JayException::GetType() const noexcept
{
	return "Chili Exception";
}

int JayException::GetLine() const noexcept
{
	return line;
}

const std::string& JayException::GetFile() const noexcept
{
	return file;
}

std::string JayException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl
		<< "[Line] " << line;
	return oss.str();
}
