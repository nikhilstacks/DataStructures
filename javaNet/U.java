package javaNet;

import java.net.MalformedURLException;
import java.net.URL;

public class U {
	public static void main(String[] args) throws MalformedURLException {
		URL obj = new URL("http://www.dreamtechpress:80/index.html");

		System.out.println("protocol: " + obj.getProtocol());
		System.out.println("Host: " + obj.getHost());
		System.out.println("file: " + obj.getFile());
		System.out.println("port: " + obj.getPort());
		System.out.println("path: " + obj.getPath());
		System.out.println("External: " + obj.toExternalForm());

		System.out.println("Rest of the code...");
	}
}
