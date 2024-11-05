import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class test implements ActionListener
{
 JLabel l;
 JTextField t;
 JButton b;
 
 test()
 {
 JFrame f=new JFrame("textfield");
 l=new JLabel("nothing entered");
 t=new JTextField(16);
 b= new JButton("submit");
 JPanel p=new JPanel(new GridLayout(1,3));
 p.add(l);
 p.add(t);
 p.add(b);
 b.addActionListener(this);
 f.add(p);
 f.setSize(300,300);
 f.show();
}
	public void actionPerformed(ActionEvent e)
	{
		String s=e.getActionCommand();
		if(s.equals("submit"))
		{
			l.setText(t.getText());
			t.setText(" ");
		}
	}
	public static void main(String args[])
	{
		test t=new test();
	}
}
	
