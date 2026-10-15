//
// Created by jfaus on 13/10/2026.
//

#ifndef MASCOTAS_FILEMANAGER_H
#define MASCOTAS_FILEMANAGER_H

class FileManager {
private:
    char *NOMBRE_ARCHIVO;
public:
    explicit FileManager(char *NOMBRE_ARCHIVO) :
        NOMBRE_ARCHIVO(NOMBRE_ARCHIVO) {
    }
    ~FileManager();
    void writeData(char *information) const;
    void readData() const;
};

#endif //MASCOTAS_FILEMANAGER_H
