// Operand.java - Token, holds integer operands
//
// Kurt Schmidt
// Modified by Matthew Brower
// 11/21
//
// javac 1.6.0, on Linux version 2.6.18.6 (gcc version 3.4.6 (Gentoo
//		 3.4.6-r1, ssp-3.4.5-1.0, pie-8.7.9))
//
// EDITOR:  tabstop=2, cols=80
//
// NOTES:
// 	Tokens come in 2 flavors:
// 		operands (only integers here)
// 		operators (just +, -, *, /, exponentiation, parenthesis)
// 
//	This is so you can have a single container (Vector, ArrayList, whatever)
//	that holds an entire expression (Token).
//

/**  
* A viewer for text
*
*  @author  Matthew Brower
*  @version 1.0
*
*  @see Viewer
*/

/**
 * class operand, which is derived from Token
 */
public class Operand extends Token {

	protected int val;

  /**
   * Always returns false because this is not an operator
   */
	public boolean isOperator() { return false; }

  /**
   * Always returns true because this is an operand
   */
	public boolean isOperand() { return true; }

  /**
   * Returns the integral value of this operand
   */
	public int getVal()
	{ return val; }

  /**
   * Constructs the Operand object with the given value
   */
	public Operand( int v ) { val = v; }

}	// class Operand

