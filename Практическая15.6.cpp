#include <iostream>
#include <vector>
#include <math.h>




void maxSubArraySum(std::vector<int> nums, int startIndex, int endIndex) {
    int max_sum = 0;
    int current_sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        current_sum = 0;
        for (int j = i; j < nums.size(); ++j) {
            current_sum += nums[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
                startIndex = i;
                endIndex = j;
            }
        }
    }
    std::cout << "Max sum = " << max_sum << std::endl;
    std::cout << "Interval (first index and last index) " << startIndex << " " << endIndex << std::endl;
}


void findNumbers(std::vector<int> nums, int sum) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == sum) {
                std::cout << nums[i] << " " << nums[j];
                return;
            }
        }
    }
    std::cout << "numbers not found";
}

void print(std::vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
}
void Sort(std::vector<int>& nums)
{
    for (int i = nums.size() - 1; i >= 0; i--) {
        int maxind = 0;
        for (int j = 0; j <= i; j++) {
            if (nums[j] > nums[maxind]) {
                maxind = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[maxind];
        nums[maxind] = temp;
    }
}


void SortModule(std::vector<int>& nums)
{
    for (int i = nums.size() - 1; i >= 0; i--) {
        int maxind = 0;
        for (int j = 0; j <= i; j++) {
            if (abs(nums[j]) > abs(nums[maxind])) {
                maxind = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[maxind];
        nums[maxind] = temp;
    }
}


int main() {
    //task 1
    /*std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int startIndex = 0, endIndex = 0;

    maxSubArraySum(nums, startIndex, endIndex);
    */

    //task2
    /*std::vector<int> nums = {1, 3, 5, 3};
    findNumbers(nums, 9);*/

    //task3
    /*std::vector<int> nums;
    int num;
    while (true) {
        std::cout << "Input: ";
        std::cin >> num;
        if (num == -1){
            if (nums.size() < 5) {
                std::cout << "vector must be bigger" << std::endl;
            }
            else {
                Sort(nums);
                print(nums);
                if (nums.size() > 5) {
                    while (nums.size() > 6) {
                        nums.pop_back();
                    }
                }
                std::cout << nums[4] << std::endl;
                print(nums);
            }
        }
        else if (num == -2) {
            break;
        }
        else {
            nums.push_back(num);
        }
    }*/

    //task 4
    std::vector<int> nums{ -100, -50, -5, 1, 10, 15 };
    SortModule(nums);
    print(nums);

}