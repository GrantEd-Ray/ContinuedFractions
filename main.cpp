#include <iostream>
#include <vector>

std::vector<int> ContinuedFractions(int a, int b)
{
    std::vector<int> nums;
    while ((a != 1) && (b != 1))
    {
        int p = a / b;
        int temp = a - b * p;
        a = b;
        b = temp;
        nums.push_back(p);
    }
    nums.push_back(a);
    return nums;
}

int main() {
    std::vector<int> res = ContinuedFractions(389, 157);
    for (int num : res)
    {
        std::cout << num << " ";
    }
    return 0;
}
