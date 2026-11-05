/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mx.gdl.unedl.comidapoo;

import java.util.List;

/**
 *
 * @author jfaus
 */
                  //herencia simple
public class Italiana extends Comida {

    // constructor (inicialización)
    public Italiana() {
        this.setIngrediente_base("harina");
        this.setGrado_picante(2.0f); // 4/5 (demasiado)
        this.setComidas("pizza");
        this.setComidas("pasta");
    }
    
    @Override
    public String getComida() {
        List<String> listado = this.getComidas();
        return listado.get(
                (int)(Math.random() * listado.size()));
    }
     
    
}
