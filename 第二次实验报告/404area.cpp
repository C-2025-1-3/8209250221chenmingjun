//4、合并两个排列好的数组：
//编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//使用size1 + size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。下面是一个运行样例。注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。

#include<iostream>
#include<vector>
using namespace std;
//比较两个数组中的元素，将较小的放入list3
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i <=size1 || j <= size2) {
		if (i == size1)
		{
			while (j < size2)
			{
				list3[k] = list2[j];
				k++;
				j++;
			}
		}
		else if (j == size2)
		{
			while (i < size1)
			{
				list3[k] = list1[i];
				k++;
				i++;
			}
		}
		if (list1[i] <= list2[j]) {
			list3[k] = list1[i];
			k++;
			i++;
			
		}
		else {
			list3[k] = list2[j];
			k++;
			j++;
		}
	}
}
//读取用户输入的数组
void readArray(int arr[], int& size) {
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
//打印数组
void printArray(const int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main() {
	const int MAX_SIZE = 80;
	int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2] = { 0 };
	int size1,size2;
	cout << "Enter list1:";
	readArray(list1, size1);
	cout << "Enter list2:";
	readArray(list2, size2);
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	printArray(list3, size1 + size2);
	cout << endl;
	system("pause");
	return 0;
}
