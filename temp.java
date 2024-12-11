import java.util.*;

public class SentenceManipulation {
    public static void main(String[] args) {
        String sentence = new Scanner(System.in).nextLine();
        
        // Counting words
        String[] words = sentence.split("\\s+");
        System.out.println("Word Count: " + words.length);
        
        // Reversing the order of words
        String[] reversedSentence = new String[words.length];
        for(int i = 0; i < words.length; i++) {
            reversedSentence[i] = words[words.length - i - 1];
        }
        System.out.println("Reversed Sentence: " + String.join(" ", reversedSentence));
        
        // Converting to uppercase
        System.out.println("Uppercase Sentence: " + sentence.toUpperCase());
    }
}
