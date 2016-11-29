// infixParser - class that reads an input.prefix, and parses each line 
//               containing a infix expression. 
//
// 
// javac 1.6.0, on Linux version 2.6.18.6 (gcc version 3.4.6 (Gentoo
//		 3.4.6-r1, ssp-3.4.5-1.0, pie-8.7.9))
//
// EDITOR:  tabstop=2, cols=80

import java.util.*;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;

import java.io.IOException;
import java.lang.NumberFormatException;

public class infixParser {

	private static boolean debug = false;

  /**
   * Returns the opType for the given operator represented as a character
   * in form of String 
   */
	static public opType getOpType(String str) 
	{
		switch(str) {
			case "+":
				return opType.ADD;
			case "-":
				return opType.SUB;
			case "*":
				return opType.MULT;
			case "/":
				return opType.DIV;
			case "%":
				return opType.MOD;
			case ")":	
				return opType.RPAR;
			case "(":
				return opType.LPAR;
			default:
				System.out.println("Error optype in getOpType");
				return opType.LPAR;
		}
	}
	
	/**
	 * parses the String infix expression exp, and converts it into a linked
	 * list of Token type 
	 * @return the infix expression represented as linked list of Tokens
	 */
	static public LinkedList<Token> parseInfixExpression(String exp) 
	{
  	LinkedList<Token> infixExp = new LinkedList<Token>();

  	String[] strTokens = exp.split("\\s+");
  	for(int i = 0; i < strTokens.length; i++) 
  	{

  		Token token;
  		//System.out.println(strTokens[i] + ",");
  
  		try 
  		{
  			int n = Integer.parseInt(strTokens[i]);
  			token = new Operand(n);
  			// if(debug) 
//   			{
//   				System.out.println("Added operand");
//   			}
  		} 
  		catch (NumberFormatException ex) 
  		{
  			token = new Operator(getOpType(strTokens[i]));
  			// if(debug) 
//   			{
//   				System.out.println("Added operator");
//   			}
  		}
  		infixExp.add(token);
  	}

  	//System.out.println("\n");
  	return infixExp;
	}

  /**
   * converts an infix expression into a postfix expression
   * @return the postfix expression
   */
  static public LinkedList<Token> infix2postfix(LinkedList<Token> infixExp) 
  {
  	// if(debug) 
//   	{
//   		System.out.println("In infix2postfix");	
//   	}

  	LinkedList<Token> postfixExp = new LinkedList<Token>();
  	Stack<Token> st = new Stack<Token>();

  	infixExp.add(new Operator(opType.RPAR));
  	st.push(new Operator(opType.LPAR));

  	ListIterator<Token> listIterator = infixExp.listIterator();
  	while( listIterator.hasNext())
  	{
  		Token t = listIterator.next();
  		if(t.isOperator()) 
  		{
  			Operator op = (Operator) t; // downcasting parent class object 
  			if(op.getVal() == opType.LPAR) 
  			{
  				// if it is left paren, push it onto the stack
  				// if(debug) 
//   				{
//   					System.out.println("Pushing Left Parenthesis on stack"); 
//   				} 				
  				st.push(t);
  			} 
  			else if( op.getVal() == opType.RPAR) 
  			{
  				//  If it is a right paren, pop operators from the stack and 
  				// append to the postfix expression, until a left paren is 
  				// encountered on the stack. Remove and discard the left paren. 
  				// if(debug) 
//   				{
//   					System.out.println("found Right Parenthesis");
//   				}
  				Token popped;
  				while(true) 
  				{
	  		  	if(st.empty()) 
	  		  	{
	  		  		// if(debug) 
// 	  		  		{
// 	  		  			System.out.println("  stack is empty. breaking.");
// 	  		  		}
	  		  		break;
	  		  	}

  					popped = st.pop();
  					if(popped.isOperator()) 
  					{
  						Operator poppedOp = (Operator) popped;
  						if(poppedOp.getVal() == opType.LPAR) 
  						{
  							if(debug) 
  							{
  								System.out.println("  discarding left paren");
  							}
  							break; // discarding the left paren and breaking out of loop
  						} 
  						else 
  						{
  							// if(debug)
//   							{ 
//   								System.out.println("  added operator to postfixExp");
//   							}
  							postfixExp.add(popped);	
  						}
  					} 
  					else 
  					{
  						// we should not reach here;no operand should be popped here
  						assert false;
  					}
  				}
  			} 
  			else 
  			{ 
  			// if it is an operator, then pop operators from the stack and append
  			// to the postfix expression while the operators have equal or higher
  			// precedence than the current token. Push current token (operator) 
  		  // onto the stack.
  		  // if(debug) 
//   		  {
//   		  	System.out.println("found operator in infixExp list");
//   		  }
  		  while(true) 
  		  {
  		  	if(st.empty()) 
  		  	{
  		  		// if(debug) 
//   		  		{
//   		  			System.out.println("  stack is empty. breaking.");
//   		  		}
  		  		break;
  		  	}
  		  	Token popped = st.pop();
  		  	if( popped.isOperator()) 
  		  	{
  		  		// if(debug) 
//   		  		{
//   		  			System.out.println("  popped operator from stack");
//   		  		}
  		  		if(Operator.compare( (Operator) popped,(Operator)t ) >= 0) 
  		  		{
  		  			postfixExp.add(popped);		
  		  		} 
  		  		else 
  		  		{
  		  			st.push(popped);
  		  			st.push(t);
  		  			break;
  		  		}
  		  	} 
  		  	else 
  		  	{
  		  		// if(debug) 
//   		  		{
//   		  			System.out.println("  popped operand from stack." +	" pushing it back. then pushing current operator");
//   		  		}
  		  		st.push(popped);
  		  		// push current token
  		  		st.push(t);
  		  		break;
  		  	}
  		  } 

  			}
  		} 
  		else 
  		{ // token in infix list is an operand, append it to postfix list
  			// if(debug) 
//   			{
//   				System.out.println("Found operand, adding it to postfixExp list");
//   			}
  			postfixExp.add(t);
  		}
  	}

  	return postfixExp;
  }

  /**
   * Computes the value of expression left op right, where left, right are 
   * operands and op is an operator
   * @return the computed value
   */
  static public int compute(Operand left, Operator op, Operand right) 
  {
  	int result;
  	int lval = left.getVal();
  	int rval = right.getVal();

  	if(op.getVal() == opType.ADD) 
  	{
  		return lval + rval;
  	}
  	if( op.getVal() == opType.SUB) 
  	{
  		return lval - rval;
  	}
  	if( op.getVal() == opType.MULT) 
  	{
  		return lval * rval;
  	}
  	if( op.getVal() == opType.DIV) 
  	{
  		return lval / rval;
  	}
  	if( op.getVal() == opType.MOD) 
  	{
  		return lval % rval;
  	}

  	// should not reach here
  	assert false;
  	return 0;
  }

  /**
   * Evaluates the postfix expression and finds its integral value 
   * @return The computed integer value of the expression
   */
  static public int evalPostfix(LinkedList<Token> postfixExp) 
  {
  	int result = 0;

  	Stack<Token> st = new Stack<Token>();
//   	if(debug)
//   	{
//   	System.out.println("In evalPostfix");
//   	}
  	ListIterator<Token> listIterator = postfixExp.listIterator();
  	while( listIterator.hasNext()) 
  	{
  		//System.out.println("In while loop in evalPostfix");
  		Token t = listIterator.next();
  		if(t.isOperator()) 
  		{
  			Operator operator = (Operator) t;
	  		// if(debug) 
// 	  		{
// 	  			System.out.println(". " + operator.getVal().getName());
// 	  		}
  			Token popped1 = st.pop();
  			Token popped2 = st.pop();
  			int computed = compute((Operand)popped2, operator, (Operand)popped1);
  			st.push((Token)( new Operand(computed)));
  		} 
  		else 
  		{
  			st.push(t);
  			//Operand operand = (Operand) t;
	  		//if(debug) System.out.println(". " + operand.getVal());

  		}
  	}

  	Token lastExp = st.pop();
  	if( lastExp.isOperator()) 
  	{
  		assert false;
  	}

  	// the last expression on stack must be an operand and the result 
  	Operand operand = (Operand) lastExp;
  	result = operand.getVal();
  	return result;
  }

  /**
   * From opType, returns the operator as a String
   */
  static public String getOperatorString(Operator op) 
  {
  	if(op.getVal() == opType.ADD) 
  	{
  		return "+";
  	}
  	if(op.getVal() == opType.MULT)
  	{ 
  		return "*";
  	}
  	if(op.getVal() == opType.SUB)
  	{ 
  		return "-";
  	}
  	if(op.getVal() == opType.DIV) 
  	{
  		return "/";
  	}
  	if(op.getVal() == opType.MOD) 
  	{
  		return "%";
  	}
  	assert false;
  	return "none";
  } 

  /**
   * Useful to print the postfix expression. Converts postfix expression
   * to String representation.
   */
  static public String postfixToString(LinkedList<Token> postfixExp) 
  {
  	String str = new String();

  	ListIterator<Token> listIterator = postfixExp.listIterator();
  	while( listIterator.hasNext()) 
  	{
  		Token t = listIterator.next();
  		if( t.isOperator()) 
  		{
  			Operator operator = (Operator) t;
  			str += getOperatorString(operator) + " ";
  		} 
  		else 
  		{
  			Operand operand = (Operand) t;
  			str += operand.getVal() + " ";
  		}
  	}

  	return str;
  }
  
	static public void main( String[] argv) 
	{
		try 
		{
			File currentdir = new File(".");
			File file = new File(currentdir.getCanonicalPath() + File.separator + "input.infix");
			FileInputStream fis = new FileInputStream(file);
			BufferedReader bufferedreader = new BufferedReader(new InputStreamReader(fis));
			String line = null;
			while ((line = bufferedreader.readLine()) != null) 
			{
				//System.out.println(line);
				LinkedList<Token> infixExp = parseInfixExpression(line);
				LinkedList<Token> postfixExp = infix2postfix(infixExp);
				String strPostfix = postfixToString(postfixExp);				
				int result = evalPostfix(postfixExp);
				System.out.println(strPostfix + " = " + result);
				
			} 
			 
			bufferedreader.close();
		} 
		catch (IOException ex) 
		{
   	 	 System.err.format("IOException: %s %n", ex);
		}
	}  
}

