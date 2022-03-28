//Daniel Farone
//CSCI 3110-001
//Project #1
//Due: 01//25/22
//This program simulates just-in time memory allocation by dynamically allocating an array
//then reallocating it as the size reaches a breaking point.
//This will be achieved using the doubleArray function to update the contents and expand the array
//and calcAvg to calculate the average of the array, and of course the main() function.
//When complete the program will output the size of the array for all three allocation along with the average.
//The last allocation of the array will also display the amount of elements in the array that were read.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int *doubleArray(int *a, int *s);
double calcAvg(int *arr, int n);
int main()
{
        ifstream inFile;
        inFile.open("nums.txt");
        ofstream outFile;
        outFile.open("p1out.txt");

        int size = 200;
        int val = 0;
        int *array = new int[size];
        int num = 0;

        while(inFile >> val)
        {
                array[num] = val;
                num++;
                if(num == size)
                {
                        cout << setprecision(3) << fixed;
                        cout << num << " " << calcAvg(array, num) << endl;
                        outFile << num << " " << calcAvg(array, num) << endl;
                        array = doubleArray(array, &size);
                        size += num;
                }
        }

        cout << setprecision(3) << fixed;
        cout << size << " " << num << " " << calcAvg(array, num) << endl;
        outFile << size << " " << num << " " << calcAvg(array, num) << endl;

        delete [] array;
        array = nullptr;
        return 0;
}
//This function dyanmically allocates memory for an array by copying elelments from the old array
//to the new one and deallocationg memory for the expanding array.
//Inputs: (integer pointer) pointing to array, (integer pointer) pointing for the size of the array
//Outputs: (integer pointer) pointing to the array
int *doubleArray(int *a, int *s)
{
        int sz;
        sz = *s;
        int *a_new = new int[sz * 2];
        for(int j = 0; j < sz; j++)
                a_new[j] = a[j];
        delete [] a;
        a = nullptr;
        return a_new;

}
//This funciton calculates the average of the dynamic array from the number of values read into it
//Inputs: (integer pointer) pointing  to array, (integer) number of elements in the array.
//Outputs: (double) average of the array
double calcAvg(int *arr, int n)
{
        double avg, sum = 0;
        for(int k = 0; k < n; k++)
                sum += arr[k];
                avg = sum / n;
        return avg;
}
