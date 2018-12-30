#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input;
    //open file
    input.open("C:\\Users\\angele\\Desktop\\git\\advent-of-code\\AOCday1\\puzzle_input.txt");
    //make sure file is open
    if (!input){
        cerr<<"Unable to open file";
        exit(1);
    }
    //read file and calculate sum
    int sum=0;
    int x=0;
    while (input>>x){
        sum = sum + x;
        cout<<x<<endl;
    }
    input.close();
    //print sum
    cout<<sum<<endl;

}
