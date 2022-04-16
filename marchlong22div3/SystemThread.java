/**
 * SystemThread
 */
import java.util.concurrent.*;
public class SystemThread {

    public static void main(String[] args){
        ThreadGroup sg = Thread.currentThread().getThreadGroup().getParent();
        Thread[] ts = new Thread[sg.activeCount()];
        sg.enumerate(ts);
        for (Thread thread : ts) {
            System.out.println(thread.getName()+" "+thread.isDaemon());
        }
    }
}