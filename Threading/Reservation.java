package Threading;

class Reserve implements Runnable {
    private int available = 2;
    private int wanted;

    public Reserve(int wanted) {
        this.wanted = wanted;
    }

    public void run() {
        synchronized (this) {
            System.out.println("available berths=" + available);
            if (available >= wanted) {
                String name = Thread.currentThread().getName();
                System.out.println(wanted + " berth reserved for " + name);
                try {
                    Thread.sleep(2000);
                    available = available - wanted;
                } catch (InterruptedException ie) {

                }
            } else
                System.out.println("sorry, no berth");
        }
    }
}

public class Reservation {
    public static void main(String[] args) {
        System.out.println(Thread.currentThread());
        System.out.println("unsafe");

        Reserve obj = new Reserve(1);

        Thread t1 = new Thread(obj);
        Thread t2 = new Thread(obj);

        t1.setName("First person");
        t2.setName("second person");

        t1.start();
        t2.start();

    }

}
