Future<String> fetchData() async {
  // performing asynchronous operation here.
  return "Data fetched seccesfully";
}

Future<void> processData() async {
  print('processing started ');
  String data = await fetchData();
  print('${data}');
  print('processing Completed');
}

void main(){
  processData();
}