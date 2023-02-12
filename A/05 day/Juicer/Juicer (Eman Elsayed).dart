import 'dart:io';

main() {
  // take input
  int? n = int.parse(stdin.readLineSync()!);
  int? b = int.parse(stdin.readLineSync()!);
  int? d = int.parse(stdin.readLineSync()!);
  int sum = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    int? x = int.parse(stdin.readLineSync()!); // n items
    if (x <= b) {
      // if the size of the orange is less than or equal to the size of the juicer
      sum += x; // add the size of the orange to the sum
    }
    if (sum > d) {
      // if the sum of the oranges is greater than the size of the waste
      sum = 0;
      count++; // empty the waste
    }
  }
  print(count); // print the number of times the waste was emptied
}
