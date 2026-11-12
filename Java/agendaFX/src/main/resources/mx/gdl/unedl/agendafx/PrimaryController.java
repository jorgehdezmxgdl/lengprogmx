/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/javafx/FXMLController.java to edit this template
 */
package mx.gdl.unedl.agendafx;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import mx.gdl.unedl.agendafx.modelo.Persona;

/**
 * FXML Controller class
 *
 * @author jfaus
 */
public class PrimaryController implements Initializable {

    @FXML
    private TableView<Persona> tblPersona;
    @FXML
    private TableColumn<?, ?> tClNombre;
    @FXML
    private TableColumn<?, ?> tClTelefono;
    @FXML
    private TableColumn<?, ?> tClEmail;
    @FXML
    private Button btnAdicionar;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void clickBtnAdicionar(ActionEvent event) {
    }
    
}
