package mx.gdl.unedl.comidapoo;

import java.util.List;

/**
 *
 * @author jfaus
 */
public class Mexicana extends Comida {

    // constructor (inicialización)
    public Mexicana() {
        this.setIngrediente_base("masa");
        this.setGrado_picante(4.0f); // 4/5 (demasiado)
        this.setComidas("pozole");
        this.setComidas("menudo");
        this.setComidas("flautas");
    }
    
    @Override
    public String getComida() {
        List<String> listado = this.getComidas();
        return listado.get(
                (int)(Math.random() * listado.size()));
    }
    
    
    public String tipo_comida(String carne) {
        String platillo = "";
        switch (carne) {
            case "puerco" -> platillo = "carnitas";
            case "res" -> platillo = "caldo de res";
            case "pollo" -> platillo = "mole";
        }
        return platillo;
    }
    
    public String tipo_comida(List<String> ingredientes) {
        String platillo = "";
        switch (ingredientes.size()) {
            case 3 -> platillo = "huevos revueltos";
            case 5 -> platillo = "arroz a la mexicana";
            case 14 -> platillo = "mole"; 
        }
        return platillo;
    }
    
    public String tipo_comida(int nivel_sal) {
       String platillo = "";
       switch (nivel_sal) {
           case 3 -> platillo = "chile caserro";
           case 4 -> platillo = "pescado ahumado";
           case 5 -> platillo = "cecina";
       }
       return platillo;
    }
}
