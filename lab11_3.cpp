#include <iostream>
#include<fstream>
#include <cstdlib>
#include <iomanip>
#include<cmath>

using namespace std;

int main(){
    ifstream source;
    int count;
    double sum,sum2;
    source.open("score.txt");
    string line;
    while(getline(source,line)){
        sum += atof(line.c_str());
        sum2 += pow(atof(line.c_str()),2);
        

        count++;
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt((sum2/count)-pow(sum/count,2));
}

