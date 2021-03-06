#pragma once
#include <iostream>
#include <string>
#include <regex>

class URLParser
{
private:
    std::string URL;
public:
    URLParser(std::string input);

    std::string getURL() const {
        return this->URL;
    };

    std::string getScheme() const{
        std::string tempURL = this->URL;
        std::string Scheme = tempURL.substr(0, tempURL.find(":") + 1);
        return Scheme;
    }

    std::string getAuthority() const {
        std::regex authParser("^//(?:[a-z]+\\.)?(?:.+?)\\.[a-z]{3}");
        std::smatch urlMatch;

        std::string tempURL = this->URL;
        tempURL.erase(0, tempURL.find(":") + 1);

        std::regex_search(tempURL, urlMatch, authParser);

        return  urlMatch.str(0);
    }

    std::string getPath() const{
        std::regex authParser("^//(?:[a-z]+\\.)?(?:.+?)\\.[a-z]{3}");
        std::smatch urlMatch;

        std::string tempURL = this->URL;
        tempURL.erase(0, tempURL.find(":") + 1);
        
        std::regex_search(tempURL, urlMatch, authParser);
        

        return tempURL.erase(0, urlMatch.str(0).length());
    }

};

void printURL(const URLParser& URL);

std::ostream& operator<<(std::ostream& out, const URLParser& URL);
