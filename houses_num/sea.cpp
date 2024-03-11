#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

std::vector<int> houses(const std::vector<int>& heights) {
    std::vector<int> s_houses;
    int n = heights.size() - 1;
    int max_h = 0;
    
    if (heights.empty()) {
        throw std::invalid_argument("Empty vector");
    }

    for (int i = n; i >= 0; --i) {
        if (heights[i] < 0) {
            throw std::invalid_argument("Negative height");
        }
        if (heights[i] > max_h) {
            max_h = heights[i]; 
            s_houses.push_back(i);
        }
    }

    std::reverse(s_houses.begin(), s_houses.end());
    return s_houses;
}

std::vector<int> houses(const std::vector<float>& heights) {
    throw std::invalid_argument("Float height");
}

std::vector<int> houses(const std::vector<std::string>& heights) {
    throw std::invalid_argument("String height");
}



