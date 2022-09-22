#include <fstream>
#include <iomanip>
#include <string>
#include <ctime>

std::string getDate() {
    std::time_t t = std::time(nullptr);
    const std::tm* localTime = std::localtime(&t);
    std::stringstream s;
    s << localTime->tm_year + 1900 << "/";
    s << std::setw(2) << std::setfill('0') << localTime->tm_mon + 1 << "/";
    s << std::setw(2) << std::setfill('0') << localTime->tm_mday << " ";
    s << std::setw(2) << std::setfill('0') << localTime->tm_hour << ":";
    s << std::setw(2) << std::setfill('0') << localTime->tm_min << ":";
    s << std::setw(2) << std::setfill('0') << localTime->tm_sec;
    return s.str();
}

int main() {
  std::ofstream ofs("../data/test.tsv");
  ofs << "Test\tA\tB\n1\tA1\tB1\n2\tA2\tB2";
  
  std::ofstream ofs2("../data/README.md");
  ofs2 << "# Update Date\n";
  ofs2 << getDate();
}
