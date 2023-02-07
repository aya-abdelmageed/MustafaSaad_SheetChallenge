// author : Eman Elsayed
import 'dart:io';

main() {
  int? k = int.parse(stdin.readLineSync()!);
  int? r = int.parse(stdin.readLineSync()!);
  // iterate over the numbers to find the first number that is divisible by k and the last digit is r
  int i = 1;
  while (true) {
    if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
      print(i);
      break;
    }
    i++;
  }
}
