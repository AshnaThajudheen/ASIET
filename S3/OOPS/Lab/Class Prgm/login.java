import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class test implements ActionListener 
{
    JLabel u, p1,r;
    JTextField t1, t2;
    JButton b1, b2;
    test() 
    {
        JFrame f = new JFrame("Login Form");
        u = new JLabel("Username");
        p1 = new JLabel("Password");
        r= new JLabel();
        t1 = new JTextField(16);
        t2 = new JPasswordField(16);
        b1 = new JButton("Clear");
        b2 = new JButton("Submit");
        JPanel p = new JPanel();
        p.add(u);
        p.add(t1);
        p.add(p1);
        p.add(t2);
        p.add(b1);
        p.add(b2);
        p.add(r);
        b1.addActionListener(this);
        b2.addActionListener(this);
        f.add(p);
        f.setSize(300, 200);
        f.show();
    }

    public void actionPerformed(ActionEvent e) 
    {
        String s = e.getActionCommand();
        if (s.equals("Submit"))
        {
        	String s1=t1.getText();
        	String s2=t2.getText();
        	String s3= "the username is"+s1+"&"+"the paswword is"+s2;
           r.setText(s3);
          // p1.setText(t2.getText());
            t1.setText("");
            t2.setText("");
        }
        else
        {
        t1.setText("");
            t2.setText("");
        }
    }
  public static void main(String args[])
  {
   test t = new test();
  }
 }
 
 
 
