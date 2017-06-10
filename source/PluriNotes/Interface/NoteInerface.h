#ifndef NOTEINERFACE_H
#define NOTEINERFACE_H

#include <QtWidgets>
#include "NoteManager/NoteManager.h"
#include "NoteManager/notes.h"


class NoteInterface : public QWidget {
  Q_OBJECT
  Note& note;
  QLabel* titre;
  QPushbutton* modifier;
  QPushbutton* supprimer;
  QPushbutton* relier;
  
  
public :
  NoteInterface(note* n);
  
public slots : 
  //void modification();
  //void suppression();
  //void relation();


}


#endif // NOTEINERFACE_H
