class LinkedList{
	Node head;
	
	class Node{
		int data;
		Node next;
		
		public Node(int d) {
			data = d;
			next = null;
		}
	}
}
public class List {
	public static void main(String[] args) {
		LinkedList l = new LinkedList();
		System.out.println(l.head);
		
		l.head = l.new Node(10);
		System.out.println(l.head);
		
		LinkedList.Node second = l.new Node(20);
		l.head.next = second;
		
		LinkedList.Node third = l.new Node(30);
		l.second.next = third;
		
		System.out.println(Integer.toHexString(second.hashCode()) + " "  + l.head.next);
	}
}
