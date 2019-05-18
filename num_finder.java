package javabook.ch03;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class num_finder {

	public static void main(String[] args) throws NumberFormatException, IOException{
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int hide_num=123;
		int input=0;
		int rotation=1;

		while(rotation<=10)
		{
			System.out.println("예상되는 숫자를 입력하세요.");
			input=Integer.parseInt(br.readLine());
			if(input==hide_num)
			{
				System.out.println("축하합니다! 남겨진 숫자는 "+hide_num+" 이었습니다!");
				System.out.println("맞추시기까지 걸리신 횟수는 "+rotation+" 회 이었습니다!");
				System.exit(0);
			}
			else
			{
				System.out.println("각성하세요! 틀리셨어요!");
				System.out.println("도전 가능 횟수: "+(10-rotation));
				if(input>hide_num)
				{
					System.out.println("힌드: 더 작은 수!");
				}
				else
				{
					System.out.println("힌드: 더 큰 수!");

				}
			}
			rotation++;
		}
		
		if(rotation>10&&input!=hide_num)
		{
			System.out.println("더 각성해요! 이제는 도전하실수 없어요!");
		}
		
	}

}
