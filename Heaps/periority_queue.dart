class MaxHeap{
  late List<int> heap;
  MaxHeap(){
    heap = [];
  }   

  void push(int value){
    heap.add(value);
    _trickleUp(heap.length -1);
  }

  void _trickleUp(int index){
    int parentIndex = (index - 1) ~/ 2;
    if(index <= 0) return;
    if(heap[parentIndex] < heap[index]){
      _swap(parentIndex, index);
      _trickleUp(parentIndex);
    }
  
  }

  void _swap(int parent, int child){
    int temp = heap[parent];
    heap[parent] = heap[child];
    heap[child] = temp;
  }

  void remove(){
    if(heap.isEmpty) throw Exception("Heap is Empty");
    final last = heap.removeLast();
    if(heap.isNotEmpty){
      heap[0] = last;
      _sinkDown(0);
    }
  }

  void _sinkDown(int index){
    final leftIndex = 2 * index + 1;
    final rightIndex = 2 * index + 2;
    int largestIndex = index;

    if(rightIndex < heap.length && heap[rightIndex] > heap[largestIndex]) largestIndex = rightIndex;

    if(leftIndex < heap.length && heap[leftIndex] > heap[largestIndex]) largestIndex = leftIndex;

    if(largestIndex != index){
      _swap(index, largestIndex);
      _sinkDown(largestIndex);
    }

  }

  void show(){
    print(heap);
  }

}


void main(){
  MaxHeap heap = new MaxHeap();
  heap.push(10);
  heap.push(1);
  heap.push(33);
  heap.push(8);
  heap.push(2);
  heap.show();
  heap.remove();
  heap.show();
}