import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class test implements ActionListener {
    JLabel u, p1, r;
    JTextField t1;
    JPasswordField t2;
    JButton b1, b2;
    final String correctUsername = "ashna";
    final String correctPassword = "12345";
    test() 
    {
        JFrame f = new JFrame("Login Form");
        u = new JLabel("Username");
        p1 = new JLabel("Password");
        r = new JLabel();
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
        f.setVisible(true);
        
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {
        String s = e.getActionCommand();
        
        if (s.equals("Submit")) {
            String s1 = t1.getText();
            String s2 = new String(t2.getPassword());
            
            if (s1.equals(correctUsername) && s2.equals(correctPassword)) {
                r.setText("Login Successful!");
            } else {
                r.setText("Wrong username or password. Please try again.");
            }
            
            t1.setText("");
            t2.setText("");
        } 
        else if (s.equals("Clear")) {
            t1.setText("");
            t2.setText("");
            r.setText("");
        }
    }

    public static void main(String args[]) {
        new test();
    }
}

