import java.util.Scanner;
class canumakeitapalindrome {

  public static void main(String[] args) throws Exception {
     Scanner input = new Scanner(System.in);  
     System.out.println("Input string to check whether it's convertable to a palendrome: ");
     String testString = input.nextLine();  // Read user input
     System.out.println(new canumakeitapalindrome().validPalindrome(testString));
  }

  public boolean validPalindrome(String s) {
    for (int i = 0, j = s.length() - 1; i < j; ) {
      if (s.charAt(i) == s.charAt(j)) {
        i++;
        j--;
      } else {
        return isPaliandrome(s.substring(i, j)) || isPaliandrome(s.substring(i + 1, j + 1));
      }
    }
    return true;
  }

  private boolean isPaliandrome(String s) {
    for (int i = 0, j = s.length() - 1; i < j; ) {
      if (s.charAt(i) == s.charAt(j)) {
        i++;
        j--;
      } else return false;
    }
    return true;
  }
}
