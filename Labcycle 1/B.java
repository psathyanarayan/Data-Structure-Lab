//Java program to illustrate 


//Class A 
class A 
{ 
protected void display() 
	{ 
		System.out.println("GeeksforGeeks"); 
	} 
} 

//Java program to illustrate 
//protected modifier 
 //importing all classes in package p1 

//Class B is subclass of A 
public class B extends A 
{ 
public static void main(String args[]) 
{ 
	B obj = new B(); 
	obj.display(); 
} 
	
} 
