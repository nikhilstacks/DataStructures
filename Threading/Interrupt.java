package Threading;

class t implements Runnable {

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("msg# :" + i);
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                e.printStackTrace();
                System.out.println("I am resumed...");
                continue;
            }
        }
        System.out.println("end of the t class...");

    }

}

public class Interrupt {
    public static void main(String[] args) {
        Thread t1 = new Thread(new t(), "T1");
        t1.start();

        System.out.println(Thread.currentThread());
        try {
            Thread.sleep(5000);
            t1.interrupt();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
