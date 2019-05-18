package javabook.ch03;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class kinetic_energy {

	public static void main(String[] args) throws NumberFormatException,IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader
				(new InputStreamReader(System.in));
		
		double speed=0;
		double mass=0;
		double kinetic=0;
		
		System.out.println("속도를 입력하시요.[unit: m/s]");
		speed=Double.parseDouble(br.readLine());
		
		System.out.println("질량 입력하시요.[unit: kg]");
		mass=Double.parseDouble(br.readLine());
		
		kinetic=(speed*speed*mass)/2;
		
		System.out.println("info: speed "+speed+" m/s ,mass: "+mass+" kg ,kinetic: "+kinetic+" J");
		if(kinetic>=10)
		{
			System.out.println("운동에너지가 10 J이상이군요! ");
		}
		else
		{
			System.out.println("자격미달이야!자네!! 운동에너지가 10J도 못미치고 있네!!");
		}
	}

}
