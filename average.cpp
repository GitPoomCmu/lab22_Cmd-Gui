#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int total=0, num = argc-1; 
    for(int i=0; i<argc; i++){
        total += atoi(argv[i]);
    }
    
    if(num < 1) cout << "Please input numbers to find average.\n";
    else{
    cout << "---------------------------------\n";
    cout << "Average of " << num << " numbers = " << total/num <<"\n";
    cout << "---------------------------------\n";
    }
    
    return 0;
}
