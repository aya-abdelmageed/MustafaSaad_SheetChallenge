// author : Eman Elsayed
import 'dart:io';

main() {
  int k = int.parse(stdin.readLineSync());
  int r = int.parse(stdin.readLineSync());
  int i = 1;
  while (true) {
    if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
      print(i);
      break;
    }
    i++;
  }
}
