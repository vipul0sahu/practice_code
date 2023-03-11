import java.util.Scanner;

public class part_18{

	public static void main(String args[]){
		
		Scanner sc=new Scanner(System.in);
		int myNumber=(int)(Math.random() * 100);
		int userNumber=0;
		
		do{
			System.out.println("Guess a number between 0-100: ");
			userNumber=sc.nextInt();
			
			if(myNumber==userNumber){
				
				System.out.println("Yeaa that's correct guess congo");
				break;
				
				}
				
			else if(myNumber<userNumber){
			
				System.out.println("Number is too large");
				
				}
				
			else{
			
				System.out.println("Number is too small");
				
				}
			
			}while(userNumber>=0);
			
		System.out.println("My number was: ");
		System.out.println(myNumber);
		
	}
	
}
		
