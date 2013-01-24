#ifndef WX_PCH_H_INCLUDED
#define WX_PCH_H_INCLUDED

// WX
#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/msgdlg.h>
#include <wx/app.h>
#include <wx/thread.h>
#include <wx/filename.h>
#include <wx/log.h>

#include <vector>
#include <map>

#include "boost/bind.hpp"
#include "boost/function.hpp"
#include "boost/foreach.hpp"

#define foreach BOOST_FOREACH

#endif // WX_PCH_H_INCLUDED
