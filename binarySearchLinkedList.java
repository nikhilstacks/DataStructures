class LinkedList {
    Node head;

    class Node {
        int data;
        Node next;

        public Node(int d) {
            data = d;
            next = null;
        }
    }
}

public class binarySearchLinkedList {
    public static void main(String[] args) {
        LinkedList l = new LinkedList();

        l.head = l.new Node(10);

        LinkedList.Node second = l.new Node(20);
        l.head.next = second;

        LinkedList.Node third = l.new Node(30);
        second.next = third;

    }
}