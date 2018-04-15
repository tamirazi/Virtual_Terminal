//
// Created by tamir on 3/27/18.
//

#ifndef HW1_FILE_H
#define HW1_FILE_H

#include "FileValue.h"
#include <cstring>


class File {
public:
    File(const char* name,const char* path);
    File(const File&);
    ~File();
    File& operator= (const File&);
    bool operator==(const char*);
    CharProxy operator [] (fstream::pos_type);
    const char operator [](int)const;
    void cat() const ;
    void wc() const ;
    int getref(){return file->refCount;}
    fstream& getfile(){return *file->data;}
    string getPath(){ return path;}
    string getName(){ return  name;}
    void remove();

private:
    FileValue *file;
    string name;
    string path;

};
void touch(const char*);
void copy(const char*, const char*);
void move(const char* source, const char* destination);

void ln();


#endif //HW1_FILE_H
