# Histogram Generator Library

This C library provides a function to generate a histogram representation of an array of integers. The library allows you to customize the width of each bar and provides the option to scale down larger values for better visualization.

## Getting Started

1. **Clone the Repository:**

   Clone this repository to your local machine:

   ```sh
   git clone https://github.com/Priyans-hu/Histogram-in-c.git
   cd histogram-library

2. **Include the Library:**

   Place the histogram_generator.h header file in your project directory.

3. **Include the Header:**

   In your C code where you want to use the library, include the histogram_generator.h header at the top of your file:

   ```sh
   #include "histogram_generator.h"

4. **Call the Function:**

   To use the library's functionality, call the generateHistogram function from your code (i.e. int main()):

   ```sh
   int arr[] = {10, 25, 50, 75, 100};
   int size = sizeof(arr) / sizeof(arr[0]);
   int barWidth = 5; // Adjust the width of each bar
   int scale = 10;   // Adjust the scale(unit size of bars) for larger values
   
   generateHistogram(arr, size, barWidth, scale);
