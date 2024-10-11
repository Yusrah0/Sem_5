class Queue{
    int size;
    int items[];
    int front,rear;
    Queue(int size){
        this.size=size;
        items=new int[size];
        front=-1;
        rear=-1;
    }
    boolean isFull(){
      if(front==0 && rear==size-1){
          return true;
      }
 else {
      return false;
    }}
boolean isEmpty(){
    if(front== -1){
        return true;
    }
 else{
     return false;
}}
void enQueue(int x){
    if(isFull()){
        System.out.println("Queue is full");
    }
 else{
    if(front== -1){
        front=0;
    }
   rear++;
   items[rear]=x;
        System.out.println("Insert "+x);
 }
}
void deQueue(){
    int element;
    if (isEmpty()){
        System.out.println("Queue is Empty");
    }
 else{
        element=items[front];
        if(front>=rear){
            front=-1;
            rear=-1;
        }
 else{
            front++;
 }
        System.out.println(element +" Deleted");
 }
}
void display(){
    if(isEmpty()){
        System.out.println("Empty Queue");
    }
 else{
        System.out.println("Items -> ");
        for(int i=front;i<=rear;i++)
            System.out.println(items[i] +" ");
 }
}
}
public class NewClass {
   public static void main(String[] args) {
 Queue q=new Queue(10);
 q.deQueue();
 for(int i=1;i<9;i++){
     q.enQueue(i);
 }

q.enQueue(10);
q.deQueue();
q.display();
    }
}
