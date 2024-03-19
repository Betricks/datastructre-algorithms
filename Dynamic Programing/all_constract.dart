/// this function takes `String target` and `array[] wordBank` 
/// 
/// it `returns` 2D array containing all of the ways that the target can be constract using elements in the `wordBank`
///
///else if you pass empty `string` in the `target` it `returns` an empty array.
List allConstract(String target, List<String> wordBank){

    if(target == '') return [[]];

    List result = [];

    for(String word in wordBank){
      if(target.indexOf(word) == 0){
        String suffix = target.substring(word.length);
        List remainder = allConstract(suffix, wordBank);
        Iterable<List> suffixway = remainder.map((way) => [word, ...way]);
        result.addAll(suffixway);
      }
    }

    return result;
}



void main(){
  print(allConstract('abcdef', ['ab', 'abc', 'cd', 'def', 'ef', 'abcdef', 'c'])); 
  print(allConstract('purple', ['purp', 'p', 'ur','le', 'purpl']));
  print(allConstract('skateboard', ['bo','rd', 'ate', 't', 'ska', 'sk', 'boar']));
  print(allConstract('aaaaaaaaaaaaaaaaaz', ['aa', 'aaaa', 'aaaaaaaa', 'aaaaaaaaaaaaaaa']));
}