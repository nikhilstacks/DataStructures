package TwoWayCmmunication;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;
import java.net.UnknownHostException;

public class ClientTwo {
    public static void main(String[] args) {

        try {
            Socket s = new Socket("localhost", 999);
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());

            BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));

            BufferedReader kb = new BufferedReader(new InputStreamReader(System.in));
            String str, str1;

            while (!(str = kb.readLine()).equals("exit")) {
                dos.writeBytes(str + "\n");
                str1 = br.readLine();
                System.out.println(str1);
            }
            dos.close();
            br.close();
            kb.close();
            s.close();

        } catch (UnknownHostException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
