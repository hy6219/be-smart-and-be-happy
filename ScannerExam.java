package javabook.ch03;
import java.util.Scanner;

public class ScannerExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc=new Scanner(System.in);
		
		int num_1=0;
		String str;
	
		System.out.println("정수를 하나 입력해주세요");
		num_1=sc.nextInt();
		sc.nextLine(); //integer토큰을 읽은 것을 날려버리기 위함
		
		System.out.println("문구를 입력해주세요");
		str=sc.nextLine();
		
		System.out.println(num_1+str);
	}

}
