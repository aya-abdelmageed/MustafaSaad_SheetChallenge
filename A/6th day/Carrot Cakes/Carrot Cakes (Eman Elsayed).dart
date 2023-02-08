import 'dart.io'

main(){
    int n = int.parse(stdin.readLineSync());
    int t = int.parse(stdin.readLineSync());
    int k = int.parse(stdin.readLineSync());
    int d = int.parse(stdin.readLineSync());
    int time1 = 0;
    int time2 = d;
    int count1 = 0;
    int count2 = n - k;
    while(count1 < n){
        time1 += t;
        count1 += k;
    }
    while(count2 > 0){
        time2 += t;
        count2 -= k;
    }
    if(time1 <= time2){
        print("NO");
    }else{
        print("YES");
    }
}