import java.util.*; //this import build-in java util class
import java.security.*; //we will use this to generate a secure random number

public class PasswordGenerator{//make sure you rename your java file to PasswordGenerator.java
    public static void main(String[] args) {
        Scanner ace = new Scanner(System.in); //this will scan my input from the keyboard
        SecureRandom gen = new SecureRandom();
        String letters[] =    {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
                            "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z",
                            "!", "@", "#", "%", "~", "&", "*", "?", "|", "-", "_", "+",
                            "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"
                            }; //list of characters we will select our password from in a random order

        System.out.print("Enter the number of characters you want your password to have: ");
        int size = ace.nextInt(); //stores the input as size

        for(int i=0; i<size; i++)
        {
            int a = gen.nextInt(letters.length); //int a stores the randomly generated number 
            System.out.print(letters[a]); //here we take the randomly generated number and use it to index a character in our array of characters
        }
}
}
