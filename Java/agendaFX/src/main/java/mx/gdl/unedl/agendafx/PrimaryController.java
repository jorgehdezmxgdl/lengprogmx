/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/javafx/FXMLController.java to edit this template
 */
package mx.gdl.unedl.agendafx;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.input.MouseEvent;
import mx.gdl.unedl.agendafx.archivos.FileManager;
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
    private TableColumn<Persona, String> tClNombre;
    @FXML
    private TableColumn<Persona, String> tClTelefono;
    @FXML
    private TableColumn<Persona, String> tClEmail;
    @FXML
    private Button btnAdicionar;

    private ObservableList<Persona> datos = 
              FXCollections.observableArrayList();
    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        tblPersona.setItems(datos);
        tClNombre.setCellValueFactory(
                new PropertyValueFactory<>("nombre"));
        tClEmail.setCellValueFactory(
                new PropertyValueFactory<>("correo"));
        tClTelefono.setCellValueFactory(
                new PropertyValueFactory<>("telefono"));
    }    

    @FXML
    private void clickBtnAdicionar(ActionEvent event) {
        Persona persona = new Persona("Federico Gomez",
            "33 4512 " + 
            (int)((Math.random() * 8999) + 1000) ,
                "fede@gmail.com");
        FileManager filemanager = new FileManager("agenda.txt");
        filemanager.guardaRegistro(persona.getNombre(), 
                persona.getTelefono(), persona.getCorreo());
        datos.add(persona);
    }

    @FXML
    private void tblMouseClicked(MouseEvent event) {
        Persona persona = tblPersona.
                 getSelectionModel().getSelectedItem();
        Alert cuadroDialogo = persona != null ?
                new Alert(Alert.AlertType.INFORMATION)
                : 
                new Alert(Alert.AlertType.ERROR);
        cuadroDialogo.setTitle("Agenda");
        String info = persona != null ? 
             persona.getNombre() + " " + persona.getTelefono(): 
             "<Informacion no valida>";
        cuadroDialogo.setContentText("Persona: " + info);
        cuadroDialogo.showAndWait();
    }
    
}
