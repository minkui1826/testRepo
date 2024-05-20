package bonustask;

public class LinkedList {

	private class Node {
		int data;
		Node next;
		
		public Node(int data) {
			this.data = data;
			this.next = null;
		}
	}
	
	public class Stack {
		private Node top;
		private int size;
		
		public Stack() {
			this.top = null;
			this.size = 0;
		}
		
		public void push(int data) {
			Node node = new Node(data);
			node.next = this.top;
			this.top = node;
			this.size++;
		}
		public void pop() {
			Node crntNode = this.top.next;
			this.top = crntNode;
			this.size--;
		}
		public boolean is_empty() {
			if(this.size == 0) return true;
			else return false;
		}
		public boolean is_full() {
			if(this.size == 10) return true;
			else return false;
		}
		public int peek() {
			return this.top.data;
		}
	}

	public static void main(String[] args) {
		LinkedList ll = new LinkedList();
		LinkedList.Stack stack = ll.new Stack();
		
		System.out.println("is_empty? " + stack.is_empty());
		stack.push(1);
		stack.push(2);
		stack.push(3);
		stack.push(4);
		System.out.println("is_empty? " + stack.is_empty());
		stack.push(5);
		stack.push(6);
		stack.push(7);
		System.out.println("is_full? " + stack.is_full());
		stack.push(8);
		stack.push(9);
		stack.push(10);
		System.out.println("is_full? " + stack.is_full());
		stack.pop();
		System.out.println(stack.peek());
		System.out.println("java_202212977_ChoiMinKyu");

	}

}
