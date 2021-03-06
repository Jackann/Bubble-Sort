#include <iostream>
#include <vector>
using namespace std;
vector<int> bubbleSort(vector<int> nums)
{
	int size = nums.size();
	for (int i = 1; i < size; i++)                        //选中size-1次往后比较
	{
		for (int j = 0; j < size - i; j++)            //比较次数从size-1到1
		{
			if (nums[j] > nums[j + 1])            //相邻元素两两对比
			{
				int temp = nums[j + 1];
				nums[j + 1] = nums[j];        //元素交换
				nums[j] = temp;
			}
		}
	}
	return nums;
}

int main() {
	vector<int> nums = {8,6,3,2,5,7,4,2,3,10,-2};
	nums=bubbleSort(nums);
	for (auto  &a:nums)
	{
		cout << a << " ";
	}
	cout << "wait";
	system("pause");
	return 0;
}
