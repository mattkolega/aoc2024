#include <sstream>
#include <string>
#include <vector>

int part_one(std::string_view input) {
    std::istringstream stream((std::string(input)));
    std::vector<int> list1, list2;

    std::string line;
    while (std::getline(stream, line)) {
        list1.push_back(std::stoi(line.substr(0, 5)));
        list2.push_back(std::stoi(line.substr(8, 5)));
    }

    stable_sort(list1.begin(), list1.end());
    stable_sort(list2.begin(), list2.end());

    int totalDifference = 0;

    for (size_t i = 0; i < list1.size(); i++) {
        int difference = abs(list1[i] - list2[i]);
        totalDifference += difference;
    }

    return totalDifference;
}
