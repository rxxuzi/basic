import java.util.*;

public class BJ {
	public static int type = 13;
	public static String Card ="A234567890JQK";
	public static int counter=0;
	public static void main(String[] args) {
		Random rand = new Random();
		Scanner sc = new Scanner(System.in);
		int player=0;
		int dealer=0;
		int point =0;
		int doing =0;
        int arr[] =new int[10];
		
		dealer = 1 + rand.nextInt(10);
		do {
			
			if(point > 10) {
				player += 10;
			}else if(player == 10 && point == 1) {
				player = 21;
			}else {
				player += point;
			}

            if (counter != 0) {
                arr[counter] = point;
                
                for (int i = 0; i <= counter ; i++) {
                    if (arr[i] < 11 && arr[i] > 1 ) {
                        
                    }
                    switch (arr[i]) {
                        case 1:
                        System.out.print("[A]");
                            break;
                        case 11:
                        System.out.print("[J]");
                            break;
                        case 12:
                        System.out.print("[Q]");
                            break;
                        case 13:
                        System.out.print("[K]");
                            break;
                                            
                        default:
                            System.out.print("[" +arr[i] +"]");
                            break;
                    }
                    
                }
            }
			
			if(counter == 0){
				player = 1 + rand.nextInt(10);
                
                arr[0] = player;
                if (arr[0] != 1) {
                    System.out.println("[" +player +"]");
                }else{
                    System.out.println("[A]");
                }
				System.out.println("Your point is " + player);
			}else {
				System.out.println("\nYour Card Is ... " + Card.charAt(point -1));
				System.out.println("Your point is " + player);
			}
			if(player > 20) {
				break;
			}
			System.out.println("Dealer point is" + dealer);
			
			System.out.println("What will you do?");
			System.out.println("1...Stand  2...Hit  3...Doubletown");
			doing = sc.nextInt();

			point = 1 + rand.nextInt(type);
		
			counter += 1;
			
			
		}while(doing != 1 );
		
		for(int i = 0 ; i < type ; i ++) {
			
			dealer += 1 + rand.nextInt(10);
			if(player == dealer) {
				dealer +=1;
			}else if (player >20) {
				break;
			}
			System.out.println("Dealer point is" + dealer);
			if(dealer > 17) {
				break;
			}
		}
		
		

		if(player == 21) {
			System.out.println("Black Jack!!! You won!!");
		}else if(player > 21) {
			System.out.println("Bust....You lost");
			
		}else if(dealer > 21) {
			System.out.println("Dealer is bust...You won!!");
			
		}else{
			if(player > dealer) {
				System.out.println("You won!!");
			
			}else {
				System.out.println("You lost!!");
			}
		}
		
	}
}
