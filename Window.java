
import java.awt.Button;
import java.awt.Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class myWnd extends Frame {
	public myWnd() {
		Button b = new Button("Ok"); // importing button from awt
		b.setBounds(100, 70, 30, 30);
		b.addActionListener(new ActionListener() { // anonymous class
			public void actionPerformed(ActionEvent arg0) {
				System.out.println("Exit");
				System.exit(0);
			}
		});

		add(b);
		setTitle("FORM");
		setSize(300, 300);
		setLayout(null);
		setVisible(true);
	}
}

public class Window {
	public static void main(String[] args) {
		myWnd w = new myWnd();
	}
}
