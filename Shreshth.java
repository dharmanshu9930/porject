import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
public class Gui implements ActionListener{
	int count=0;
	JLabel label;
	JFrame frame;
	JPanel panel;
	public Gui( ) {
		frame = new JFrame();
		JButton button=new JButton("Click here");
		button.addActionListener(this);
		label = new JLabel("Number of clicks: 0");
		
		panel = new JPanel();
		panel.setBorder(BorderFactory.createEmptyBorder(400,400,200,100));
		panel.setLayout(new GridLayout(0,1));
		panel.add(button);
		
		JButton tb= new JButton();
		tb.setBorder(BorderFactory.createDashedBorder(Color.red));
		tb.setBounds(30, 30, 30, 30);
		tb.setText("Trial button");
		tb.setForeground(Color.blue);
		tb.setBackground(Color.yellow);
		tb.setFont(new Font("Calibri", 10, 20));
		panel.add(tb);
		
		
		panel.add(label);
		frame.add(panel, BorderLayout.CENTER);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setTitle("NEW GUI");
		frame.pack();
		
		
		frame.setVisible(true);
		

	}
	
	public static void main(String[] args) {
		new Gui();
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		count++;
		label.setText("Number of clicks: "+count);
	}
}
