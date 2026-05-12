#include<iostream>
using namespace std;

int Binary_search(int nums[], int n, int target)
{ 
    int left = 0;
    int right = n - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            left = mid + 1;

        else 
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int nums[] = {1, 3, 5, 7, 9, 11};
    int n = 6;
    int target = 7;

    int result = Binary_search(nums, n, target);

    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}