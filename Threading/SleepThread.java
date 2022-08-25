package Threading;

class NumberPrint implements Runnable {

    @Override
    public void run() {
        for (int i = 0; i <= 5; i++) {
            System.out.println("msg #" + i);
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

    }

}

public class SleepThread {
    public static void main(String[] args) {
        Runnable task2 = new NumberPrint();
        Thread t = new Thread(task2, "sleepingTask");
        t.start();
    }
}
