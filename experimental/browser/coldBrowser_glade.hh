// generated 2001/6/13 1:28:27 EDT by ryan@nailpolish.(none)
// using glademm V0.5_11f
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/ryan/coldstore/browser/coldbrowser.glade
// for gtk 1.2.10 and gtkmm 1.2.5
//
// Please modify the corresponding derived classes in .//coldBrowser.hh and.//coldBrowser.cc

#ifndef _COLDBROWSER_GLADE_HH
#  define _COLDBROWSER_GLADE_HH

#include <gtk--/window.h>
#include <gtk--/button.h>
#include <gtk--/list.h>
#include <gtk--/text.h>
#include <gtk--/label.h>
#include <gtk--/tree.h>
#include <gtk--/notebook.h>
#include <gtk--/clist.h>
#include <gtk--/frame.h>
#include <gtk--/statusbar.h>

class coldBrowser_glade : public Gtk::Window
{   
public:
        
        class Gtk::Button *newObject;
        class Gtk::Button *deleteObject;
        class Gtk::Button *showParents;
        class Gtk::Button *showAll;
        class Gtk::List *parents;
        class Gtk::List *children;
        class Gtk::Button *newMember;
        class Gtk::Button *removeMember;
        class Gtk::List *members;
        class Gtk::Text *source;
        class Gtk::Button *compileButton;
        class Gtk::Button *clearButton;
        class Gtk::Label *sourcePage;
        class Gtk::Tree *nodeTree;
        class Gtk::Label *nodePage;
        class Gtk::Notebook *notebook1;
        class Gtk::CList *inspectList;
        class Gtk::Frame *inspectorFrame;
        class Gtk::Statusbar *statusbar;
protected:
        
        coldBrowser_glade();
        
        ~coldBrowser_glade();
};

#endif
