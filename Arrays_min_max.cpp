#include<iostream>
using namespace std;
int first[5];
//print array
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Elememnt at" << i << "is" << arr[i] << endl;
	}
}
//Reverse Array Elements 
void reverseArray(int arr[], int size) {
	int start = 0;
	int end = size - 1;
	for (int i = 0; i < size; i++) {
		if (start <= end) {
			swap(arr[start], arr[end]);
			start++;
			end--;
		}
	}
}
//reverse Array end
//searching in array start
bool searchArray(int arr[], int size, int key){
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return true;
		}
}
	return false;
}
// searching in array end
//finding the sum of array elements start
int getSum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	return sum;
}
//finding the sum of array elements end
//finding the max number in array
int getMax(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}			
	return max;
}
//finding min number in array
int getMin(int arr[], int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
//taking input for array
void inputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter value at" << " " << i << endl;
		cin >> arr[i];
	}
}
int main() {
	inputArray(first, 5);
//get max 
	cout << "Max Value is" << getMax(first, 5)<<endl;
	//get min 
	cout << "Min Value is" << getMin(first, 5) << endl;
	//get sum 
	cout << "Sum of array Elements is" << getSum(first, 5) << endl;;
	//linear search in array
	if (searchArray(first,5,3)) {
		cout << "elements is found in array" << endl;
	}
	else {
		cout << "Element is not found in array" << endl;
	}
	//reverse array in cpp
	reverseArray(first, 5);
	printArray(first, 5);


}