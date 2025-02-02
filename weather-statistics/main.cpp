//
// Matthew Sleight
// February 2, 2025
// Weather Statistics Programming Project
// COSC 2030
//

#include <iostream>

using namespace std;

// Declaration of the WeatherData structure
struct WeatherData {
    double rain;        // Total rainfall
    double high;        // High temperature
    double low;         // Low temperature
    double averageTemp; // Average Temperature
};

// Function Prototypes
void getMonthData(WeatherData &);
double totalRain(WeatherData[], int);
double averageMonthlyRainfall(WeatherData[], int);
double averageAverageTemp(WeatherData[], int);
double highestTemp(WeatherData[], int, int &);
double lowestTemp(WeatherData[], int, int &);

int main() {
    // Constant for the number of months
    const int NUM_MONTHS = 12;

    // Create an array of WeatherData structures
    WeatherData year[NUM_MONTHS];

    int highestMonth;   // The month with the highest temp
    int lowestMonth;    // The month with the lowest temp

    // Get the weather data for each month
    cout << "Enter the following information:\n";
    for (int index = 0; index < NUM_MONTHS; index++) {
        // Get the rainfall
        cout << "Month " << (index + 1) << endl;
        getMonthData(year[index]);
    }

    // Display the total rainfall
    cout << "\nTotal Rainfall: "
         << totalRain(year, NUM_MONTHS) << endl;

    // Display the average monthly rain
    cout << "Average Monthly Rain: "
         << averageMonthlyRainfall(year, NUM_MONTHS)
         << endl;
    
    // Display the average of the monthly average temperatures
    cout << "Average Monthly Average Temperature: "
         << averageAverageTemp(year, NUM_MONTHS)
         << endl;
    
    // Display the highest temperature and the month it occurred in
    double highest = highestTemp(year, NUM_MONTHS, highestMonth);
    cout << "Highest Temperature: " << highest;
    cout << " (Month " << highestMonth << ")\n";

    // Display the lowest temperature and the month it occurred in
    double lowest = lowestTemp(year, NUM_MONTHS, lowestMonth);
    cout << "Lowest Temperature: " << lowest;
    cout << " (Month " << lowestMonth << ")\n\n";

    return 0;
}

void getMonthData(WeatherData &data) {
    // Get the total rainfall for the month
    cout << "\tTotal Rainfall: ";
    cin >> data.rain;

    // Get the high temperature
    cout << "\tHigh Temperature: ";
    cin >> data.high;

    // Validate the high temperature
    while (data.high < -100 || data.high > 140) {
        cout << "ERROR: Temperature must be in the range "
             << "of -100 through 140.\n";
        cout << "\tHigh Temperature: ";
        cin >> data.high;
    }

    // Get the low temperature
    cout << "\tLow Temperature: ";
    cin >> data.low;

    // Validate the low temperature
    while (data.low < -100 || data.low > 140) {
        cout << "ERROR: Temperature must be in the range "
             << "of -100 through 140.\n";
        cout << "\tLow Temperature; ";
        cin >> data.low;
    }

    // Calculate the average temperature
    data.averageTemp = (data.high + data.low) / 2.0;
}

// The totalRain function accepts an array of WeatherData
// structures and returns the total of all the elements'
// rain members.

double totalRain(WeatherData data[], int size) {
    double totalRain = 0;   // Accumulator

    // Get the total of the rain members
    for (int index = 0; index < size; index++)
        totalRain += data[index].rain;
    
    // Return the total
    return totalRain;
}

// The averageMonthyRainfall function accepts an array
// of WeatherData structures and returns the average
// monthly rainfall.

double averageMonthlyRainfall(WeatherData data[], int size) {
    // The average is the total amount of rain divided by
    // the number of months.
    return totalRain(data, size) / size;
}

// The averageAverage function accepts an array of
// WeatherData structures and returns the average of all
// the monthly average temperatures.

double averageAverageTemp(WeatherData data[], int size) {
    // Calculate the average monthly average temperature
    double aveTotal = 0;    // Accumulator for average temps
    double aveAve;          // Average of the averages

    // Get the total of the average temperatures
    for (int index = 1; index < size; index++)
        aveTotal += data[index].averageTemp;
    
    // Calculate the average of the average temperatures
    aveAve = aveTotal / size;

    // Return the average of the averages
    return aveAve;
}

// The highestTemp function accepts:
//  (1) a WeatherData array
//  (2) an int indicating the size of the array
//  (3) an int by reference to hold the month with the
//      highest temperature.
// The function returns the highest temperature and sets the
// month parameter to the number of the month with the highest temp.

double highestTemp(WeatherData data[], int size, int &month) {
    // Set the highest to the first month
    double highest = data[0].high;

    // Step through the array looking for the highest
    for (int index = 1; index < size; index++) {
        if (data[index].high > highest) {
            // Save this value. It is the highest so far.
            highest = data[index].high;

            // Save this month's number. (1 = January, etc.)
            month = index + 1;
        }
    }

    // Return the highest temperature
    return highest;
}

// The lowestTemp function accepts:
//  (1) a WeatherData array
//  (2) an int indicating the size of the array
//  (3) an int by reference to hold the month with the
//      lowest temperature.
// The function returns the lowest temperature and sets the
// month parameter to the number of the month with the lowest temp.

double lowestTemp(WeatherData data[], int size, int &month) {
    // Set the lowest to the first month
    double lowest = data[0].low;

    // Step through the array looking for the lowest
    for (int index = 1; index < size; index++) {
        if (data[index].low < lowest) {
            // Save this value. It is the lowest so far.
            lowest = data[index].low;

            // Save this month's number. (1 = January, etc.)
            month = index + 1;
        }
    }

    // Return the lowest temperature
    return lowest;
}