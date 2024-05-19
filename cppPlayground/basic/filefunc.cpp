#include <cstdlib>
#include <fstream>
#include <iostream>

void file_it(std::ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main() {
  std::ofstream fout;
  const char *fn = "ep-data.txt";
  fout.open(fn);
  if (!fout.is_open()) {
    std::cout << "Can't open file " << fn << std::endl;
    exit(EXIT_FAILURE);
  }
  double objective;
  std::cout << "Give the focal length of the telescope: ";
  std::cin >> objective;
  double eps[LIMIT];
  std::cout << "give me a focal length of" << LIMIT << "spectacles"
            << std::endl;
  for (int i = 0; i < LIMIT; i++) {
    std::cout << "Spectacles nr. " << i + 1 << ": ";
    std::cin >> eps[i];
  }
  file_it(fout, objective, eps, LIMIT);
  file_it(std::cout, objective, eps, LIMIT);
  std::cout << "DONE";
}

void file_it(std::ostream &os, double fo, const double fe[], int n) {
  std::ios_base::fmtflags initial;
  initial = os.setf(std::ios_base::fixed);
  os.precision(0);
  os << "focal length of the objective " << fo << "mm\n";
  os.setf(std::ios::showpoint);
  os.precision(1);
  os.width(12);
  os << "f spectacle";
  os.width(15);
  os << "zoom" << std::endl;
  for (int i = 0; i < n; i++) {
    os.width(12);
    os << fe[i];
    os.width(15);
    os << int(fo / fe[i] + 0.5) << std::endl;
  }
  os.setf(initial);
}