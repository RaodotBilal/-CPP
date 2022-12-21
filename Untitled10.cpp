#include<iostream>
 int main() {
 std::cout << "Please in value in the range 1...5: ";
 int month; 
std::cin >> month;
 // Translate number into its English word 
if (month == 1) {
std::cout << "You entered a";
 std::cout << "one"; 
std::cout << '\n';
}
 else if (month == 2)
 {
  std::cout << "You entered a";
 std::cout << "two"; 
std::cout << '\n';
}
 else if (month == 3) {
 std::cout << "You entered a";
 std::cout << "three"; 
std::cout << '\n';
}
 else if (month == 4)
 {
   std::cout << "You entered a";
 std::cout << "four";
 std::cout << '\n';
}
 else if (month == 5)
 {
   std::cout << "You entered a";
 std::cout << "five"; 
std::cout << '\n'; 
}
else // Value out of range std::cout << "You entered a";
 {
 std::cout << "value out of range";
 std::cout << '\n';
 } 
}

