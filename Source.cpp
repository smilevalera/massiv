#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*Array21. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N).
Найти среднее арифметическое элементов массива с номерами от K до L
включительно.
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
	for (int i = 0; i < n; i++)cout << arr[i] << ' ';
	int k, l;
	cin >> k >> l;
	int sum = 0;
	int qty = 0;
	for (int i = k; i <= l; i++) {
		sum += arr[i];
		qty++;
	}
	cout << endl <<(double) sum / qty << endl;*/
	//поиск минимального элемента
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
}
	cout << endl;
	int min = arr[0];
	int pos_min = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			pos_min = i;
		}
	}
	cout << min << ' ' << pos_min << endl;*/
	//заполнить массив случайными числами .подсчитать сумму
	//нечётных элементов мвссива
	const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 != 0) {
		cout << arr[i] << ' ';
			sum += arr[i];
		}
	cout << sum << endl;
	return 0;
}