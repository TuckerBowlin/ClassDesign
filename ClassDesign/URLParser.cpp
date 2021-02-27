#include "URLParser.h"

URLParser::URLParser(std::string input) {
	URL = input;
}

void printURL(const URLParser& URL) {
	std::cout << "URL: " << URL.getURL() << std::endl;
	std::cout << "	Scheme: " << URL.getScheme() << std::endl;
	std::cout << "	Authority: " << URL.getAuthority() << std::endl;
	std::cout << "	Path: " << URL.getPath() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const URLParser& URL)
{
	out << "URL: " << URL.getURL() << std::endl;
	out << "	Scheme: " << URL.getScheme() << std::endl;
	out << "	Authority: " << URL.getAuthority() << std::endl;
	out << "	Path: " << URL.getPath() << std::endl;
	
	return out;
}
