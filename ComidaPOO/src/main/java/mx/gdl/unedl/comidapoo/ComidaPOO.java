package mx.gdl.unedl.comidapoo;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author jfaus
 */
public class ComidaPOO {

    public static void main(String[] args) {
        Comida italiana = new Italiana();
        System.out.println("Comida: " + 
                italiana.getComida());
        Comida mexicana2 = new Mexicana();
        Mexicana mexicana = new Mexicana();
        System.out.println("Comida: " +
                mexicana.getComida());
        System.out.println(mexicana.tipo_comida("pollo"));
        System.out.println(mexicana.tipo_comida(3));
        List<String> ingredientes = new ArrayList();
        ingredientes.add("huevos");
        ingredientes.add("nopales");
        ingredientes.add("salsa");
        System.out.println(mexicana.tipo_comida(ingredientes));
    }
}
