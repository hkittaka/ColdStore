// generated 2001/6/13 1:28:27 EDT by ryan@nailpolish.(none)
// using glademm V0.5_11f
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/ryan/coldstore/browser/coldbrowser.glade
// for gtk 1.2.10 and gtkmm 1.2.5
//
// Please modify the corresponding derived classes in .//coldBrowser.cc

#include "config.h"
#include "coldBrowser.hh"
#include <gtk--/buttonbox.h>
#include <gtk--/viewport.h>
#include <gtk--/scrolledwindow.h>
#include <gtk--/box.h>
#include <gtk--/frame.h>
#include <libgnomeui/gnome-stock.h>
#include <gtk--/toolbar.h>
#include <gtk--/eventbox.h>
#include <gtk--/label.h>
#include <gtk--/paned.h>

coldBrowser_glade::coldBrowser_glade(
) : Gtk::Window(GTK_WINDOW_TOPLEVEL)
{   
   
   Gtk::Window *coldBrowser = this;
   newObject = manage(new class Gtk::Button("New"));
   deleteObject = manage(new class Gtk::Button("Delete"));
   showParents = manage(new class Gtk::Button("Parents"));
   showAll = manage(new class Gtk::Button("All"));
   
   Gtk::VButtonBox *vbuttonbox3 = manage(new class Gtk::VButtonBox(GTK_BUTTONBOX_DEFAULT_STYLE, 10));
   parents = manage(new class Gtk::List());
   
   Gtk::Viewport *viewport12 = manage(new class Gtk::Viewport());
   Gtk::ScrolledWindow *scrolledwindow14 = manage(new class Gtk::ScrolledWindow());
   children = manage(new class Gtk::List());
   
   Gtk::Viewport *viewport9 = manage(new class Gtk::Viewport());
   Gtk::ScrolledWindow *scrolledwindow9 = manage(new class Gtk::ScrolledWindow());
   Gtk::HBox *hbox5 = manage(new class Gtk::HBox(false, 0));
   Gtk::Frame *parentsFrame = manage(new class Gtk::Frame("Objects"));
   newMember = manage(new class Gtk::Button("New"));
   removeMember = manage(new class Gtk::Button("Remove"));
   
   Gtk::VButtonBox *vbuttonbox2 = manage(new class Gtk::VButtonBox(GTK_BUTTONBOX_DEFAULT_STYLE, 10));
   members = manage(new class Gtk::List());
   
   Gtk::Viewport *viewport8 = manage(new class Gtk::Viewport());
   Gtk::ScrolledWindow *scrolledwindow8 = manage(new class Gtk::ScrolledWindow());
   Gtk::HBox *hbox4 = manage(new class Gtk::HBox(false, 0));
   Gtk::Frame *membersFrame = manage(new class Gtk::Frame("Members"));
   Gtk::HBox *hbox8 = manage(new class Gtk::HBox(false, 0));
   source = manage(new class Gtk::Text());
   
   Gtk::ScrolledWindow *scrolledwindow10 = manage(new class Gtk::ScrolledWindow());
   Gtk::Toolbar *toolbar1 = manage(new class Gtk::Toolbar(GTK_ORIENTATION_HORIZONTAL, GTK_TOOLBAR_BOTH));
   compileButton = Gtk::wrap((GtkButton*)gtk_toolbar_append_element(GTK_TOOLBAR(toolbar1->gtkobj()), GTK_TOOLBAR_CHILD_BUTTON, 0, "Compile", 0, 0, 0, 0, 0));
   clearButton = Gtk::wrap((GtkButton*)gtk_toolbar_append_element(GTK_TOOLBAR(toolbar1->gtkobj()), GTK_TOOLBAR_CHILD_BUTTON, 0, "Clear", 0, 0, 0, 0, 0));
   
   Gtk::VBox *vbox6 = manage(new class Gtk::VBox(false, 0));
   sourcePage = manage(new class Gtk::Label("Source"));
   nodeTree = manage(new class Gtk::Tree());
   
   Gtk::Viewport *viewport11 = manage(new class Gtk::Viewport());
   Gtk::ScrolledWindow *scrolledwindow11 = manage(new class Gtk::ScrolledWindow());
   Gtk::EventBox *eventbox1 = manage(new class Gtk::EventBox());
   nodePage = manage(new class Gtk::Label("Node Tree"));
   notebook1 = manage(new class Gtk::Notebook());
   
   Gtk::VBox *vbox4 = manage(new class Gtk::VBox(false, 0));
   Gtk::HBox *hbox7 = manage(new class Gtk::HBox(false, 0));
   inspectList = manage(new class Gtk::CList(2));
   
   Gtk::ScrolledWindow *scrolledwindow13 = manage(new class Gtk::ScrolledWindow());
   inspectorFrame = manage(new class Gtk::Frame("Inspector"));
   
   Gtk::HBox *hbox6 = manage(new class Gtk::HBox(false, 0));
   statusbar = manage(new class Gtk::Statusbar());
   
   Gtk::VBox *vbox3 = manage(new class Gtk::VBox(false, 0));
   Gtk::Viewport *viewport6 = manage(new class Gtk::Viewport());
   Gtk::VPaned *vpaned1 = manage(new class Gtk::VPaned());
   Gtk::VBox *vbox1 = manage(new class Gtk::VBox(false, 0));
   vbuttonbox3->pack_start(*newObject);
   vbuttonbox3->pack_start(*deleteObject);
   vbuttonbox3->pack_start(*showParents);
   vbuttonbox3->pack_start(*showAll);
   viewport12->add(*parents);
   scrolledwindow14->set_usize(-1, 160);
   scrolledwindow14->set_policy(GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);
   scrolledwindow14->add(*viewport12);
   viewport9->add(*children);
   scrolledwindow9->set_usize(-1, 160);
   scrolledwindow9->set_policy(GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);
   scrolledwindow9->add(*viewport9);
   hbox5->set_usize(-1, 170);
   hbox5->pack_start(*vbuttonbox3, false, false, 0);
   hbox5->pack_start(*scrolledwindow14);
   hbox5->pack_start(*scrolledwindow9);
   parentsFrame->set_usize(300, -1);
   parentsFrame->set_label_align(0, 0);
   parentsFrame->set_shadow_type(GTK_SHADOW_ETCHED_IN);
   parentsFrame->add(*hbox5);
   vbuttonbox2->pack_start(*newMember);
   vbuttonbox2->pack_start(*removeMember);
   viewport8->add(*members);
   scrolledwindow8->set_policy(GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);
   scrolledwindow8->add(*viewport8);
   hbox4->pack_start(*vbuttonbox2, false, false, 0);
   hbox4->pack_start(*scrolledwindow8);
   membersFrame->set_usize(-1, 200);
   membersFrame->set_label_align(0, 0);
   membersFrame->set_shadow_type(GTK_SHADOW_ETCHED_IN);
   membersFrame->add(*hbox4);
   hbox8->set_usize(-1, 180);
   hbox8->pack_start(*parentsFrame);
   hbox8->pack_start(*membersFrame);
   source->set_editable(true);
   source->set_word_wrap(false);
   source->set_point(0);
   scrolledwindow10->set_policy(GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);
   scrolledwindow10->add(*source);
   toolbar1->set_space_size(5);
   toolbar1->set_tooltips(true);
   vbox6->pack_start(*scrolledwindow10);
   vbox6->pack_start(*toolbar1, false, false, 0);
   sourcePage->set_alignment(0.5, 0.5);
   sourcePage->set_padding(0, 0);
   nodeTree->set_selection_mode(GTK_SELECTION_SINGLE);
   nodeTree->set_view_mode(GTK_TREE_VIEW_LINE);
   nodeTree->set_view_lines(true);
   viewport11->add(*nodeTree);
   scrolledwindow11->set_policy(GTK_POLICY_ALWAYS, GTK_POLICY_ALWAYS);
   scrolledwindow11->add(*viewport11);
   eventbox1->add(*scrolledwindow11);
   nodePage->set_alignment(0.5, 0.5);
   nodePage->set_padding(0, 0);
   notebook1->set_show_tabs(true);
   notebook1->set_tab_border(3);
   notebook1->pages().push_back(Gtk::Notebook_Helpers::TabElem(*vbox6, *sourcePage));
   notebook1->pages().push_back(Gtk::Notebook_Helpers::TabElem(*eventbox1, *nodePage));
   vbox4->pack_start(*notebook1);
   hbox7->pack_start(*vbox4);
   inspectList->set_column_title(0, "Name");
   inspectList->set_column_justification(0, GTK_JUSTIFY_CENTER);
   inspectList->set_column_width(0, 80);
   inspectList->set_column_title(1, "Value");
   inspectList->set_column_justification(1, GTK_JUSTIFY_CENTER);
   inspectList->set_column_width(1, 80);
   inspectList->column_titles_show();
   scrolledwindow13->set_policy(GTK_POLICY_ALWAYS, GTK_POLICY_ALWAYS);
   scrolledwindow13->add(*inspectList);
   inspectorFrame->set_usize(100, -1);
   inspectorFrame->set_label_align(0, 0);
   inspectorFrame->set_shadow_type(GTK_SHADOW_ETCHED_IN);
   inspectorFrame->add(*scrolledwindow13);
   hbox6->pack_start(*hbox7);
   hbox6->pack_start(*inspectorFrame);
   vbox3->pack_start(*hbox6);
   vbox3->pack_start(*statusbar, false, false, 0);
   viewport6->add(*vbox3);
   vpaned1->set_handle_size(6);
   vpaned1->set_gutter_size(6);
   vpaned1->set_position(0);
   vpaned1->pack1(*hbox8, false, false);
   vpaned1->pack2(*viewport6, true, true);
   vbox1->pack_start(*vpaned1);
   coldBrowser->set_usize(700, 600);
   coldBrowser->set_title("cold Browser");
   coldBrowser->add(*vbox1);
   newObject->show();
   deleteObject->show();
   showParents->show();
   showAll->show();
   vbuttonbox3->show();
   parents->show();
   viewport12->show();
   scrolledwindow14->show();
   children->show();
   viewport9->show();
   scrolledwindow9->show();
   hbox5->show();
   parentsFrame->show();
   newMember->show();
   removeMember->show();
   vbuttonbox2->show();
   members->show();
   viewport8->show();
   scrolledwindow8->show();
   hbox4->show();
   membersFrame->show();
   hbox8->show();
   source->show();
   scrolledwindow10->show();
   toolbar1->show();
   vbox6->show();
   sourcePage->show();
   nodeTree->show();
   viewport11->show();
   scrolledwindow11->show();
   eventbox1->show();
   nodePage->show();
   notebook1->show();
   vbox4->show();
   hbox7->show();
   inspectList->show();
   scrolledwindow13->show();
   inspectorFrame->show();
   hbox6->show();
   statusbar->show();
   vbox3->show();
   viewport6->show();
   vpaned1->show();
   vbox1->show();
   coldBrowser->show();

}

coldBrowser_glade::~coldBrowser_glade()
{   
}
