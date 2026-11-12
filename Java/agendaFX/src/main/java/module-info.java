module mx.gdl.unedl.agendafx {
    requires javafx.controls;
    requires javafx.fxml;
    requires java.base;

    opens mx.gdl.unedl.agendafx to javafx.fxml;
    exports mx.gdl.unedl.agendafx;
    exports mx.gdl.unedl.agendafx.modelo;  
}
