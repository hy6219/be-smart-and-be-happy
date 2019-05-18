package javabook.ch04;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class object_programming_basic {

	String name;

	public void prtName()
	{
		System.out.println("이름: "+name);
	}
	public void prtName(String str)
	{
		System.out.println("메소드 오버로딩의 예! 파라미터만 다르고, 함수명은 같다!");
		System.out.println("이름: "+str);
	}
	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader in=new BufferedReader
				(new InputStreamReader(System.in));
		
		object_programming_basic oop=new object_programming_basic(); //클래스 인스턴스 생성
		oop.name="홍길동";
		oop.prtName();
		
		System.out.println("성함을 입력해주시겠습니까?");
		String line=in.readLine();
		oop.prtName(line);
	}

}
