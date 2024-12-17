#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0; // Initialize counter
    float sum = 0.0; // Initialize sum
    float sum_of_square = 0.0; // Initialize sum of squares
    string textline;
    ifstream source("score.txt"); // Open score.txt for reading

    while (getline(source, textline)) // Read each line from the file
    {
        float score = stof(textline); // Convert string to float
        sum += score; // Add score to sum
        sum_of_square += score * score; // Add square of score
        count++; // Increment counter
    }

    source.close(); // Close the file

    float mean = sum / count; // Calculate mean
    float standard_deviation = sqrt((sum_of_square / count) - (mean * mean)); // Calculate standard deviation

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_deviation << endl;

    return 0;
}
