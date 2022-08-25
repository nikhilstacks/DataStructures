package GarbageCollector;

public class GC {
    protected void finalize() {
        System.out.println("Clear the resourse please...");
    }

    public static void main(String[] args) {
        GC t1 = new GC();
        GC t2 = new GC();
        GC t3 = new GC();
        new GC();
        t3 = t1;
        t1 = null; // whenever null || de reference || anonymous
        t2 = null;
        System.out.println("GC");
        System.gc();
    }
}
