#include <iostream>
#include <fstream>      // For ifstream and ofstream

using namespace std;

int main() {
    ifstream fin(R"(D:\Developing\Projects\C++\HomeWorks\FilesAndStreams\read_file.txt)");

    if (fin.fail()) {
        cout << "Can't open the file\n";
        return 0;
    }

    int x, y;
    fin >> x >> y;

    cout << x + y;

    fin.close();

    // you can read from several files

    return 0;
}