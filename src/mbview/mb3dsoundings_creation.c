
/* Begin user code block <abstract> */
/* End user code block <abstract> */

/**
 * README: Portions of this file are merged at file generation
 * time. Edits can be made *only* in between specified code blocks, look
 * for keywords <Begin user code> and <End user code>.
 */
/*
 * Generated by the ICS Builder Xcessory (BX).
 *
 * BuilderXcessory Version 6.1.3
 * Code Generator Xcessory 6.1.3 (08/19/04) CGX Scripts 6.1 Motif 2.1
 *
 */

/* Begin user code block <file_comments> */

#ifndef SANS
#define SANS "helvetica"
#endif
#ifndef SERIF
#define SERIF "times"
#endif
#ifndef MONO
#define MONO "courier"
#endif

/* End user code block <file_comments> */

#include <Xm/Xm.h>
#include <Xm/MainW.h>
#include <Xm/DialogS.h>
#include <Xm/MwmUtil.h>
#include <Xm/Form.h>
#include <Xm/MainW.h>
#include <Xm/DialogS.h>
#include <Xm/MwmUtil.h>
#include <Xm/Form.h>

/**
 * Globally included information.
 */

#include "Mb3dsdg.h"

/**
 * Common constant and pixmap declarations.
 */
#include "mb3dsoundings_creation.h"

/**
 * Convenience functions from utilities file.
 */
extern void RegisterBxConverters(XtAppContext);
extern XtPointer BX_CONVERT(Widget, char *, char *, int, Boolean *);
extern XtPointer BX_DOUBLE(double);
extern XtPointer BX_SINGLE(float);
extern void BX_MENU_POST(Widget, XtPointer, XEvent *, Boolean *);
extern Pixmap XPM_PIXMAP(Widget, char **);
extern void BX_SET_BACKGROUND_COLOR(Widget, ArgList, Cardinal *, Pixel);

/**
 * Declarations for callbacks and handlers.
 */
extern void BxExitCB(Widget, XtPointer, XtPointer);

/**
 * Create the mb3dsdg_mainWindow hierarchy of widgets.
 */
Widget Createmb3dsdg_mainWindow(Widget parent) {
	Cardinal ac = 0;
	Arg args[256];
	Cardinal cdc = 0;
	Boolean argok = False;
	Widget mb3dsdg_mainWindow;
	Widget mb3dsdg_dialogShell;
	static Mb3dsdgData mb3dsdg;

	/**
	 * Register the converters for the widgets.
	 */
	RegisterBxConverters(XtWidgetToApplicationContext(parent));
	XtInitializeWidgetClass((WidgetClass)xmMainWindowWidgetClass);
	XtInitializeWidgetClass((WidgetClass)xmDialogShellWidgetClass);
	XtInitializeWidgetClass((WidgetClass)xmFormWidgetClass);

	ac = 0;
	XtSetArg(args[ac], XmNx, 747);
	ac++;
	XtSetArg(args[ac], XmNy, 78);
	ac++;
	XtSetArg(args[ac], XmNwidth, 197);
	ac++;
	XtSetArg(args[ac], XmNheight, 104);
	ac++;
	mb3dsdg_mainWindow = XmCreateMainWindow(parent, (char *)"mb3dsdg_mainWindow", args, ac);
	XtAddCallback(mb3dsdg_mainWindow, XmNdestroyCallback, BxExitCB, (XtPointer)0);

	ac = 0;
	XtSetArg(args[ac], XmNwidth, 1011);
	ac++;
	XtSetArg(args[ac], XmNheight, 660);
	ac++;
	XtSetArg(args[ac], XmNdeleteResponse, XmDO_NOTHING);
	ac++;
	mb3dsdg_dialogShell = XmCreateDialogShell(mb3dsdg_mainWindow, (char *)"mb3dsdg_dialogShell", args, ac);

	Mb3dsdgCreate(&(mb3dsdg), mb3dsdg_dialogShell, "mb3dsdg", args, ac);
	ac = 0;
	XtSetArg(args[ac], XmNx, 0);
	ac++;
	XtSetArg(args[ac], XmNy, 1007);
	ac++;
	XtSetArg(args[ac], XmNwidth, 1011);
	ac++;
	XtSetArg(args[ac], XmNheight, 660);
	ac++;
	XtSetValues(mb3dsdg.Mb3dsdg, args, ac);

	/* Begin user code block <end_Createmb3dsdg_mainWindow> */
	/* End user code block <end_Createmb3dsdg_mainWindow> */
	return (mb3dsdg_mainWindow);
}
