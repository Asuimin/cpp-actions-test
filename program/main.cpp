#include <fstream>
int main() {
  std::ofstream ofs("../data/test.tsv");
  ofs << "Test\tA\tB\n1\tA1\tB1\n2\tA2\tB2";
}
