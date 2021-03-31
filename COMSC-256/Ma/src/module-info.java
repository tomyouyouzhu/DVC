module Ma {
	//Class Main (in file Main.java) containing the main method

	package as1;

	import javax.swing.JFrame;

	public class Main {

	       public static void main(String[] args) {

	              JFrameExt f = new JFrameExt();

	              f.setSize(800, 400);

	              f.setVisible(true);

	       }

	}

	 

	 

	//Class JFrameExt (in file JFrameExt.java)

	package as1;

	import java.awt.Color;

	import java.awt.GridLayout;

	import java.awt.event.ActionEvent;

	import java.awt.event.ActionListener;

	import javax.swing.JButton;

	import javax.swing.JFrame;

	import javax.swing.JLabel;

	import javax.swing.JPanel;

	import javax.swing.JTextField;

	public class JFrameExt extends JFrame implements ActionListener{

	       private JPanel jpMain = new JPanel();

	       //create 3 new panels

	       private JPanel jp1 = new JPanel();

	       private JPanel jp2 = new JPanel();

	       private JPanel jp3 = new JPanel();

	       private JPanel jp4 = new JPanel();

	      

	       // create Num1, Num2 and Res Jlables

	       private JLabel jlb1 = new JLabel ("NUM1");

	       private JLabel jlb2 = new JLabel ("NUM2");

	       private JLabel jlb3 = new JLabel ("Res ");

	      

	       // create text fields 8 wide

	       private JTextField jtfNum1 = new JTextField(8);

	       private JTextField jtfNum2 = new JTextField(8);

	       private JTextField jtfNum3 = new JTextField(8);

	      

	       // Create add, sub, mult, div and clear buttons in the last (4th) panel

	       private JButton jbtAdd = new JButton("Add");

	       private JButton jbtSub = new JButton("Sub");

	       private JButton jbtMult = new JButton("Mult");

	       private JButton jbtDiv = new JButton("Div");

	       private JButton jbtClr = new JButton("Clr");

	      //constructor containin the GUI

	       public JFrameExt(){

	              this.setContentPane(jpMain);

	              jpMain.setBackground(Color.green);

	              jp1.setBackground(Color.red);

	              jp2.setBackground(Color.green);

	              jp3.setBackground(Color.yellow);

	              jp4.setBackground(Color.cyan);

	             

	              // put all JPanel objects in the JPMain

	              // change the layout of the objects

	              // row, colmn

	              GridLayout gl = new GridLayout(4, 1);

	              jpMain.setLayout(gl);

	              jpMain.add(jp1);

	              jpMain.add(jp2);

	              jpMain.add(jp3);

	              jpMain.add(jp4);

	             

	              // we add the jblabels in the jpMain, text fields

	              jp1.add(jlb1);

	              jp1.add(jtfNum1);

	             

	              // 2nd panel

	              jp2.add(jlb2);

	              jp2.add(jtfNum2);

	             

	              // 3rd panel

	              jp3.add(jlb3);

	              jp3.add(jtfNum3);

	             

	              // add the add, sub, mult, div and clear buttons in the 4th panel

	              jp4.add(jbtAdd);

	              jp4.add(jbtSub);

	              jp4.add(jbtMult);

	              jp4.add(jbtDiv);

	              jp4.add(jbtClr);

	             

	              // Register each button. If you don't register, the buttons will not know who to call

	              jbtAdd.addActionListener(this);

	              jbtSub.addActionListener(this);

	              jbtMult.addActionListener(this);

	              jbtDiv.addActionListener(this);

	              jbtClr.addActionListener(this);             

	       }

	 

	      //Single Event handler for handling all the button presses

	       @Override

	       public void actionPerformed(ActionEvent e) {

	              if(e.getSource() == jbtClr){

	                     jtfNum1.setText("");

	                     jtfNum2.setText("");

	                     jtfNum3.setText("");

	                     return;

	              }

	             

	              // common code

	              // get user entered number and convert them from text to double number

	             

	              String sNum1 = jtfNum1.getText();

	              double num1 = Double.parseDouble(sNum1);

	              String sNum2 = jtfNum2.getText();

	              double num2 = Double.parseDouble(sNum2);

	              double res = 0;

	              if(e.getSource() == jbtAdd){

	                     res = num1 + num2;

	              }

	              else if(e.getSource() == jbtSub){

	                     res = num1 - num2;

	              }

	              else if(e.getSource() == jbtMult){

	                     res = num1 * num2;

	              }

	              else{

	                     res = num1 / num2;

	              }     

	             

	              // convert the res to text

	              jtfNum3.setText("" + res);

	       }

	}
}