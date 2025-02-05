import java.util.Scanner;

public class bgarcia4 {
	public static void main(String args[]){
		System.out.println("Choose: Tooth, Dime, Tree, Horse");
		Scanner keyboard = new Scanner(System.in);
		String choice = keyboard.nextLine();
		if(choice.equals("Tooth")){
			System.out.println("By the skin of your teeth");
		} else if (choice.equals("Dime")){
			System.out.println("A dime a dozen");
		} else if (choice.equals("Tree")){
			System.out.println("Barking up the wrong tree");
		} else if (choice.equals("Horse")){
			System.out.println("Dont beat a dead horse");
		} else {
			System.out.println("you didnt enter anything valid");
		}	
	}
}
