#include <sstream>
#include <string>
#include <vector>

int part_two(std::string_view input) {
    std::istringstream stream((std::string(input)));
    std::vector<int> list1, list2;

    std::string line;
    while (std::getline(stream, line)) {
        list1.push_back(std::stoi(line.substr(0, 5)));
        list2.push_back(std::stoi(line.substr(8, 5)));
    }

    int totalSimilarity = 0;

    for (size_t i = 0; i < list1.size(); i++) {
        int similarity = list1[i] * count(list2.begin(), list2.end(), list1[i]);
        totalSimilarity += similarity;
    }

    return totalSimilarity;
}
