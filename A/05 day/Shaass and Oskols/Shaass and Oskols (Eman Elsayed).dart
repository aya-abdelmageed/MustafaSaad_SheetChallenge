import 'dart:io';

main() {
  int n = int.parse(stdin.readLineSync()!);
  List<int> arr = List.filled(n, 0);

  for (int i = 0; i < n; i++) {
    arr[i] = int.parse(stdin.readLineSync()!);
  }

  int m = int.parse(stdin.readLineSync()!);
  for (int i = 0; i < m; i++) {
    int x = int.parse(stdin.readLineSync()!);
    int y = int.parse(stdin.readLineSync()!);
    x--;
    if (x - 1 >= 0) arr[x - 1] = y - 1; // when birds fly to the left
    if (x + 1 < n) arr[x + 1] = arr[x] - y; // when birds fly to the right
    arr[x] = 0; // a dead brid
  }
  print(arr.join('\n'));
}
