/// this function takes `String target` and `List<String> wordBank` 
/// 
/// and it `returns` true if the `target` can be contracted only containing elements of the `wordBank` array.
/// 
/// else it `return` false if the `target` can't be constract 
bool canConstract(String target, List<String> wordBank){

  if(target.isEmpty) return true;

  for(var word in wordBank){
    if(target.startsWith(word)){
     String suffix = target.substring(word.length);
     if(canConstract(suffix, wordBank)){
      return true;
     }
    }
  }

  return false;
}



void main(){
  print(canConstract('abcdef', ['ab', 'abc', 'cd', 'def', 'abcd']));
  print(canConstract('skateboard', ['bo', 'rd', 'ate', 't', 'sk', 'boar']));
  print(canConstract('enterapotantpot', ['a', 'p', 'ent', 'enter', 'ot', 'o', 't']));
  print(canConstract('eeeeeeeeeeeeeeeeeeeef', ['e', 'ee,', 'eee', 'eeee', 'eeeee', 'eeeee', 'eeeeeeeee', 'eeeeeeeeeeee', 'eeeeeeeeeeeee']));
}
