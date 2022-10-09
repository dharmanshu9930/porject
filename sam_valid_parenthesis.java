package today_prac;

import java.util.Stack;

public class valid_parenthesis {
public static void main(String[] args) {
	String str ="[(){}()]";
	System.out.println(isBalanced(str));
}

public static boolean isBalanced(String str) {
	if(str.length()%2 != 0)
		return false;
	if(str.charAt(0) == ')' || str.charAt(0) == '}' || str.charAt(0) == ']')
		return false;
	
	Stack<Character> s = new Stack<>();
	for(int i = 0; i < str.length(); i++) {
		if(s.isEmpty()) {
			s.push(str.charAt(i));
		}else {
			char ch = s.peek();
			switch(ch) {
			case '(':
				if(str.charAt(i) == '}' || str.charAt(i) == ']')
					return false;
					break;
					
			case '{':
				if(str.charAt(i) == ')' || str.charAt(i) == ']')
					return false;
					break;
			
			case '[':
				if(str.charAt(i) == '}' || str.charAt(i) == ')')
					return false;
					break;
			}
		}
	}
	return true;
}
}
