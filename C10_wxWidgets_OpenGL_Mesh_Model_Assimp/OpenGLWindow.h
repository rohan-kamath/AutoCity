#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

//(*Headers(OpenGLWindow)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/timer.h>
//*)

class OpenGLWindow: public wxFrame
{
	public:

		OpenGLWindow(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~OpenGLWindow();

		//(*Declarations(OpenGLWindow)
		wxMenu* Menu1;
		wxMenu* Menu2;
		wxMenu* Menu3;
		wxMenu* Menu5;
		wxMenu* Menu6;
		wxMenuBar* MenuBar1;
		wxMenuItem* MenuCameraLookAtOrigin;
		wxMenuItem* MenuCameraMoveBackward;
		wxMenuItem* MenuCameraMoveDown;
		wxMenuItem* MenuCameraMoveForward;
		wxMenuItem* MenuCameraMoveLeft;
		wxMenuItem* MenuCameraMoveRight;
		wxMenuItem* MenuCameraMoveUp;
		wxMenuItem* MenuCameraTiltDown;
		wxMenuItem* MenuCameraTiltLeft;
		wxMenuItem* MenuCameraTiltRight;
		wxMenuItem* MenuCameraTiltUp;
		wxMenuItem* MenuCameraZoomIn;
		wxMenuItem* MenuCameraZoomOut;
		wxMenuItem* MenuFileQuit;
		wxMenuItem* MenuHelpAbout;
		wxMenuItem* MenuModelAutoRotation;
		wxMenuItem* MenuModelRotateDown;
		wxMenuItem* MenuModelRotateUp;
		wxMenuItem* MenuViewFullScreen;
		wxMenuItem* MenuViewModel1;
		wxMenuItem* MenuViewModel2;
		wxMenuItem* MenuViewModel3;
		wxMenuItem* MenuViewShowXYPlane;
		wxStatusBar* StatusBar1;
		wxTimer Timer1;
		//*)

	protected:

		//(*Identifiers(OpenGLWindow)
		static const long ID_TIMER1;
		static const long ID_VIEWFULLSCREEN;
		static const long ID_VIEWSHOWXYPLANE;
		static const long ID_VIEWMODEL1;
		static const long ID_VIEWMODEL2;
		static const long ID_VIEWMODEL3;
		static const long ID_MODELAUTOROTATION;
		static const long ID_MODELROTATEUP;
		static const long ID_MODELROTATEDOWN;
		static const long ID_CAMERALOOKATORIGIN;
		static const long ID_CAMERAZOOMIN;
		static const long ID_CAMERAZOOMOUT;
		static const long ID_CAMERAMOVELEFT;
		static const long ID_CAMERAMOVERIGHT;
		static const long ID_CAMERAMOVEUP;
		static const long ID_CAMERAMOVEDOWN;
		static const long ID_CAMERAMOVEFORWARD;
		static const long ID_CAMERAMOVEBACKWARD;
		static const long ID_CAMERATILTLEFT;
		static const long ID_CAMERATILTRIGHT;
		static const long ID_CAMERATILTUP;
		static const long ID_CAMERATILTDOWN;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(OpenGLWindow)
		virtual void OnTimer1Trigger(wxTimerEvent& event);
		virtual void OnResize(wxSizeEvent& event);
		virtual void OnClose(wxCloseEvent& event);
		virtual void OnMenuFileQuitSelected(wxCommandEvent& event);
		virtual void OnMenuHelpAboutSelected(wxCommandEvent& event);
		virtual void OnMenuViewFullScreenSelected(wxCommandEvent& event);
		virtual void OnMenuViewShowXYPlaneSelected(wxCommandEvent& event);
		virtual void OnMenuModelAutoRotationSelected(wxCommandEvent& event);
		virtual void OnMenuModelRotateUpSelected(wxCommandEvent& event);
		virtual void OnMenuModelRotateDownSelected(wxCommandEvent& event);
		virtual void OnMenuCameraLookAtOriginSelected(wxCommandEvent& event);
		virtual void OnMenuCameraZoomInSelected(wxCommandEvent& event);
		virtual void OnMenuCameraZoomOutSelected(wxCommandEvent& event);
		virtual void OnMenuCameraMoveLeftSelected(wxCommandEvent& event);
		virtual void OnMenuCameraMoveRightSelected(wxCommandEvent& event);
		virtual void OnMenuCameraMoveUpSelected(wxCommandEvent& event);
		virtual void OnMenuCameraMoveDownSelected(wxCommandEvent& event);
		virtual void OnMenuCameraMoveForwardSelected(wxCommandEvent& event);
		virtual void OnMenuCameraMoveBackwardSelected(wxCommandEvent& event);
		virtual void OnMenuCameraTiltLeftSelected(wxCommandEvent& event);
		virtual void OnMenuCameraTiltRightSelected(wxCommandEvent& event);
		virtual void OnMenuCameraTiltUpSelected(wxCommandEvent& event);
		virtual void OnMenuCameraTiltDownSelected(wxCommandEvent& event);
		virtual void OnMenuViewModel1Selected(wxCommandEvent& event);
		virtual void OnMenuViewModel2Selected(wxCommandEvent& event);
		virtual void OnMenuViewModel3Selected(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
    