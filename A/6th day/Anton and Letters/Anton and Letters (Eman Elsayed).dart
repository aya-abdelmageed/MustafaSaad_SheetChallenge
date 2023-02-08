import 'dart:io';
main(){
   
    String s = stdin.readLineSync();
    int count = 0;
    Set <String> set = {};
    for(int i = 0; i < s.length; i++){
        if(s[i] != ' ' && s[i] != '}' && s[i] != '{' && s[i] != ',' && !set.contains(s[i])){
            set.add(s[i]);
            count++;
        }
    }
    print(set.length);


}