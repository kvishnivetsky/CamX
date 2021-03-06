#ifndef DRUMEDITORDEFINES

#define DRUMEDITORDEFINES

#define DRUM_TRACKPOSITIONX 2

#define DRUM_FRAMEID_TRACKS 0
#define DRUMS_FRAMEID_EVENTS 1

// Menus

#define DRUMMENU_START (MENU_ID_START+50)

// Menus Arrange ----------------------------------------------------------------	
#define DRUMMENU_LOADMAP DRUMMENU_START+1
#define DRUMMENU_SAVEMAP DRUMMENU_START+2

#define DRUMMENU_CREATENEWTRACK DRUMMENU_START+10
#define DRUMMENU_EDITTRACK DRUMMENU_START+11

#define DRUMMENU_NOTESTODRUMS DRUMMENU_START+20
#define DRUMMENU_DRUMSTONOTES DRUMMENU_START+21

// Gadgets -------------------------------------------
#define FXGADGETID_START GADGET_ID_START+50

#define FX_DRUM_MIDIOUT_ID FXGADGETID_START+1
#define FX_DRUM_MIDICHANNEL_ID FXGADGETID_START+2
#define FX_DRUM_MIDIKEY_ID FXGADGETID_START+3
#define FX_DRUM_MIDILENGTH_ID FXGADGETID_START+4
#define FX_DRUM_TRACKNAME_ID FXGADGETID_START+5
#define FX_DRUM_AUDIOOUT_ID FXGADGETID_START+6

#define FX_DRUM_TRACKVOLUME_ID FXGADGETID_START+7
#define FX_DRUM_TRACKMUTE_ID FXGADGETID_START+8
#define FX_DRUM_TRACKVOLUMEBUTTON_ID FXGADGETID_START+9
#define FX_DRUM_DRUMMAP_ID FXGADGETID_START+10

// PopUp Track FX
#define FX_POPSELECTDRUMCHANNEL_ID (DRUMMENU_START+1200)
#define FX_POPSELECTDRUMKEY_ID (DRUMMENU_START+1201)
#endif
