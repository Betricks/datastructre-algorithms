

int countConstract(String target, List<String> wordBank){

  int resultCount = 0;

  if(target.isEmpty) return 1;

  for(String word in wordBank){
    if(target.indexOf(word) == 0){
      String suffix = target.substring(word.length);
      int remainderResult = countConstract(suffix, wordBank);
      if(remainderResult == 1){
        resultCount += 1;

      }
    }
  }

  return resultCount;

}



void main(){
  print(countConstract("purple", ['purp', 'p', 'ur', 'le', 'purpl'])); //2
  print(countConstract('abdef', ['ab', 'abc', 'cd', 'def', 'abcde'])); //1
  print(countConstract('skateboard', ['bo', 'rd', 'ate', 't', 'ska','sk', 'boar'])); //0
  print(countConstract('enterpotentpot', ['a', 'p', 'ent', 'enter', 'ot', 'o', 't']));  //0
  print(countConstract('testing', ['tes', 't', 'i', 'ng', 'ing', 'testi', 'est', 'testing'])); //2
  print(countConstract('eeeeeeeeeeeeeeeeeeeeeef', ['e', 'ee', 'eee', 'eeee', 'eeeee', 'eeeeee', 'eeeeeeee', 'eeeeeeee', 'eeeeeeeee', 'eeeeeeeeeee']));  //0
}