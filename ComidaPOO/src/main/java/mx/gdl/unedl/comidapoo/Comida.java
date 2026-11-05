package mx.gdl.unedl.comidapoo;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author jfaus
 */
public abstract class Comida {
    private List<String> comidas;
    private String ingrediente_base;
    private float  grado_picante;  
    protected float precio;
     
    public Comida() {
         this.comidas          = new ArrayList<>();
         this.ingrediente_base = "agua";
         this.grado_picante    = 0.0f;
         this.precio           = 5.0f;
    }
     
    public abstract String getComida();
     //Para generar los set y get es boton derecho del mouse => Insert Code => Getters and Setters
    public List<String> getComidas() {
        return comidas;
    }

    public void setComidas(String comida) {
        this.comidas.add(comida);
    }

    public String getIngrediente_base() {
        return ingrediente_base;
    }

    public void setIngrediente_base(String ingrediente_base) {
        this.ingrediente_base = ingrediente_base;
    }

    public float getGrado_picante() {
        return grado_picante;
    }

    public void setGrado_picante(float grado_picante) {
        this.grado_picante = grado_picante;
    }
     
     
}
