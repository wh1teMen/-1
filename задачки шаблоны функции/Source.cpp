// ������������ ������ C++
#include<iostream>
using namespace std;
template<typename T> T mean(T array[],int lenght) {
	T sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}



int main() {
	setlocale(LC_ALL, "ru");
	int n;

	//������ 1
	cout << "������1\n����������� ������:\n";
	float z1[5] = { 5.0,1.4,3.7,2.8,4.9 };
	for (int i = 0; i < 5; i++)
		cout << z1[i]<<"\t";
	cout << "\n������� �������������� ���������� ������� = " << mean(z1,5)<<endl;




	return 0;
}