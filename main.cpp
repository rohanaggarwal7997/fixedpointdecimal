#include "decimal.h"

int main() {

  /*To test multiplication replace lines 26-33 with below and file name to decimal_multiplication_test.txt
    std::stringstream linestream(line);
    std::string decimal1, decimal2, result;
    uint32_t scale_decimal1, scale_decimal2, scale_result;
    linestream >> decimal1 >> scale_decimal1 >> decimal2 >> scale_decimal2 >> result >> scale_result;
    Decimal d_1(decimal1, scale_decimal1);
    Decimal d_2(decimal2, scale_decimal2);
    Decimal d(result, scale_result);
    d_1.SignedMultiplyWithDecimal(d_2, scale_decimal1);
  */

  std::ifstream infile("decimal_division_test.txt");
  if (!infile.is_open()) {
    std::cout<<"exited before file opening";
    return 0;
  }

  std::cout<<"file opened testing started";
  int count = 0;
  std::string line;
  while (std::getline(infile, line)) {
    std::stringstream linestream(line);
    std::string decimal1, decimal2, result;
    unsigned scale_decimal1, scale_decimal2, scale_result;
    linestream >> decimal1 >> scale_decimal1 >> decimal2 >> scale_decimal2 >> result >> scale_result;
    Decimal d_1(decimal1, scale_decimal1);
    Decimal d_2(decimal2, scale_decimal2);
    Decimal d(result, scale_result);
    d_1.SignedDivideWithDecimal(d_2, scale_decimal2);
    if(d==d_1) {
      count++;
    } else {
      std::cout<<"found mismatch";
    }
  }
  std::cout<<count<<" no of tests verified";
}