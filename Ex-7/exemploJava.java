//package principal;

public abstract class animal {

	public animal() {
		// TODO Auto-generated constructor stub
	}
	
	public abstract String mover();
	public abstract String alimetar();
	public abstract String classe();
	
}

public class cachorro extends animal{

	public cachorro() {
		// TODO Auto-generated constructor stub
	}

	@Override
	public String mover() {
		return "\nEu caminho e corro com minhas patas";
	}

	@Override
	public String alimetar() {
		return "\nEu me alimento de ração";
	}

	@Override
	public String classe() {
		return "\nEu sou um animal domestico";
	}

}

public class foca extends animal {

	public foca() {
		// TODO Auto-generated constructor stub
	}

	@Override
	public String mover() {
		return "\nEu rastejo em terra firme";
	}

	@Override
	public String alimetar() {
		return "\nEu me alimento principalmente de animais marinhos";
	}

	@Override
	public String classe() {
		return "\nEu sou um animal selvagem";
	}

}

public class principal {

	private static animal C;
	private static animal F;

	public principal() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		C = (animal) new cachorro();
		F = (animal) new foca();
		
		System.out.println( "\nComo o cachorro se move ? " + C.mover() );
		System.out.println( "\nDe que o cachorro se alimenta ? " + C.alimetar() );
		System.out.println( "\nQual a classificação do cachorro ? " + C.classe() );

		System.out.println( "\n------------------------------------------------" );

		System.out.println( "\nComo a foca se move ? " + F.mover() );
		System.out.println( "\nDe que a foca se alimenta ? " + F.alimetar() );
		System.out.println( "\nQual a classificação da foca ? " + F.classe() );
		
	}

}
