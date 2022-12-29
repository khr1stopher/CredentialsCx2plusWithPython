// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// #include <curl/curl.h>
#include <iostream>
#include <stdlib.h> // for system function

using namespace std;

int main()
{
    string command = "ls -la"; // shell command to execute
    string result; // string to store the output

    // execute the command and store the output in result
    result = system(command.c_str());

    cout << "Result: " << result << endl;

    return 0;
}
