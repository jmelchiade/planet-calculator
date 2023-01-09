int main() {
  double weight;
  int x;

  std::cout << "Please enter your weight: ";
  std::cin >> weight;

  std::cout << "For weight conversions, choose Planet ID:\n";
  std::cout << "1. Venus  2. Mars  3. Jupiter\n";
  std::cout << "4. Saturn  5. Uranus  6. Neptune\n";
  std::cout << "My weight on Planet ";
  std::cin >> x;

 if (x == 1) {
 
    weight = weight * 0.78;
 
  } else if (x == 2) {
 
    weight = weight * 0.39;
 
  } else if (x == 3) {
 
    weight = weight * 2.65;
 
  } else if (x == 4) {
 
    weight = weight * 1.17;
 
  } else if (x == 5) {
 
    weight = weight * 1.05;
 
  } else if (x == 6) {
 
    weight = weight * 1.23;
 
  }
 
  std::cout << "\nYour weight is: " << weight << "\n";


}