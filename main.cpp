#include <iostream>

using namespace std;

int main()
{
    cout << "hello" << scrapeWebPage() << fetchGoogleSearchResult();
    return 0;
}

string scrapeWebPage()
{
    return "dummy";
}
int fetchGoogleSearchResult()
{
    return 0;
}

string searchMyName()
{
    string result = "Sumit Dey";
    printf("Searching your name.... ");
    return result;
}
