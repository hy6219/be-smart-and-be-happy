package javabook.ch03;
import java.io.*;

public class IfExam2 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader in=new BufferedReader
				(new InputStreamReader(System.in));
		
		int iVar=0;
		int iRet=0;
		
		System.out.printf("정수를 입력하세요.:\t");
		iVar=Integer.parseInt(in.readLine());
		
		while(iVar>1)
		{
			iRet=iVar%10;
			if(iRet==0)
			{
				System.out.println(iVar+ " 는 10의 배수이네요!");
				iVar/=10;
			}
			else
			{
				System.out.println(iVar+" 는 10의 배수가 아니네요!");
				iVar/=10;
				System.exit(0);//조건 만족시 종료
			}
			
			System.out.printf("정수를 입력하세요.:\t");
			iVar=Integer.parseInt(in.readLine());
		}
	}

}
