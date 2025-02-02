#include <iostream>
#include <vector>
#include <limits.h>

int maxSubArraySum(const std::vector<int>& nums) {
    int max_sum = INT_MIN; // Инициализируем максимальную сумму минимально возможным значением

    // Перебираем все возможные подмассивы
    for (size_t start = 0; start < nums.size(); ++start) {
        int current_sum = 0; // Сумма текущего подмассива
        for (size_t end = start; end < nums.size(); ++end) {
            current_sum += nums[end]; // Добавляем текущий элемент к сумме
            if (current_sum > max_sum) {
                max_sum = current_sum; // Обновляем максимальную сумму
            }
        }
    }

    return max_sum;
}

int main() {
    std::vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int result = maxSubArraySum(nums);
    std::cout << "Максимальная сумма подмассива: " << result << std::endl;
    return 0;
}