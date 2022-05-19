#include "HTTPRequest.hpp"

std::string SolvePuzzleCaptcha(std::string puzzleid)
{
    http::Request request{"https://bolwlproxy.com/api/?api=captcha&id="+puzzleid};
    const auto response = request.send("GET");

  std::string Answer = std::string{response.body.begin(), response.body.end()};

    if (Answer != "") 
        return Answer;
    else
        return "Error";
}