package TwoWayCmmunication;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

public class TwoWayServer {
    public static void main(String[] args) {
        // server socket
        try {
            ServerSocket ss = new ServerSocket(999);
            System.out.println("server is waiting for the client?");
            Socket s = ss.accept();

            System.out.println("connection estabilished...");
            PrintStream ps = new PrintStream(s.getOutputStream());

            BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
            BufferedReader kb = new BufferedReader(new InputStreamReader(System.in));

            while (true) {
                String str, str1;
                while ((str = br.readLine()) != null) {
                    System.out.println(str);
                    str1 = kb.readLine();
                    ps.println(str1);
                }

                ps.close();
                br.close();
                kb.close();
                ss.close();
                s.close();
                System.exit(0);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
