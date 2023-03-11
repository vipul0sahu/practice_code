import java.util.Scanner;

public class part_12_3{

public static void main(String args[]){

System.out.println("How much cash you have got: ");
Scanner sc=new Scanner(System.in);

int cash=sc.nextInt();

if (cash<10){

System.out.println("You can't buy anything");
System.out.println("Get more cash");

}

else if (cash>10 && cash<50)
System.out.println("You can get 1 item");

else
System.out.println("You can buy both items");

}
}


