 #include<iostream>
 int main()
 {
 int input; 
std::cin >> input;
 if (input < 10) 
{ 
if (input != 5)
 std::cout << "wow ";
 else input++; } 
else 
{ 
if (input == 17) input += 10;
 else 
std::cout << "whoa "; 
} 
std::cout << input << '\n'; 
}

