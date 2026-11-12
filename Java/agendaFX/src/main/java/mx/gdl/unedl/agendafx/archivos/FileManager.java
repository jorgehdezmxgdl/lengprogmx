package mx.gdl.unedl.agendafx.archivos;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import mx.gdl.unedl.agendafx.modelo.Persona;

/**
 *
 * @author jfaus
 */
public class FileManager {

    private String nombre_archivo;

    public FileManager(String nombre_archivo) {
        this.nombre_archivo = nombre_archivo;
    }    
    
    public List<Persona> leeTodos() {
        BufferedReader br = null;
        List<Persona> listado = new ArrayList();
        try {      
            br = new BufferedReader
                 (new FileReader(this.nombre_archivo));
            String linea = null;
            while ((linea = br.readLine()) != null) {
                String campos[] = linea.split(",");
                listado.add(new
                       Persona(campos[0], campos[1], campos[2]));
            }   br.close();
            
        } catch (FileNotFoundException ex) {
            System.getLogger(FileManager.class.getName()).log(System.Logger.Level.ERROR, (String) null, ex);
        } catch (IOException ex) {
            System.getLogger(FileManager.class.getName()).log(System.Logger.Level.ERROR, (String) null, ex);
        } finally {
            try {
                br.close();
            } catch (IOException ex) {
                System.getLogger(FileManager.class.getName()).log(System.Logger.Level.ERROR, (String) null, ex);
            }
        }
        return listado;
    }
    
    public boolean guardaRegistro(String nombre,
                                  String telefono,
                                  String correo) {
        PrintWriter pw = null;
        try {
            pw = new PrintWriter(
                 new FileWriter(this.nombre_archivo, true));
            pw.append(nombre);
            pw.append(" , ");
            pw.append(telefono);
            pw.append(" , ");
            pw.append(correo);
            pw.append("\n");
            pw.flush();
            pw.close();
            return true;
        } catch (FileNotFoundException ex) {
            System.getLogger(FileManager.class.getName()).log(System.Logger.Level.ERROR, (String) null, ex);
        } catch (IOException ex) {
            System.getLogger(FileManager.class.getName()).log(System.Logger.Level.ERROR, (String) null, ex);
        } finally {
            pw.close();
        }
        return false;
    }
}
