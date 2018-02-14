/*
    Copyright (c) 2018 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "wxchartstestsframe.h"
#include "wxchartstestsmenubar.h"
#include "wxchartstestswindowids.h"
#include "wxcolumnchartpanel.h"
#include "wxpiechartpanel.h"
#include <wx/sizer.h>

wxChartsTestsFrame::wxChartsTestsFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title), m_currentPanel(0),
    m_columnChartPanel(0), m_pieChartPanel(0)
{
    SetMenuBar(new wxChartsTestsMenuBar());

    wxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

    m_columnChartPanel = new wxColumnChartPanel(this);
    sizer->Add(m_columnChartPanel);
    m_columnChartPanel->Hide();

    m_pieChartPanel = new wxPieChartPanel(this);
    sizer->Add(m_pieChartPanel);
    m_pieChartPanel->Hide();

    m_currentPanel = m_columnChartPanel;
    m_currentPanel->Show();

    SetSizer(sizer);
}

void wxChartsTestsFrame::OnExit(wxCommandEvent& evt)
{
    Close();
}

void wxChartsTestsFrame::OnColumnChart(wxCommandEvent& evt)
{
    m_currentPanel->Hide();
    m_currentPanel = m_columnChartPanel;
    m_currentPanel->Show();
    Layout();
}

void wxChartsTestsFrame::OnPieChart(wxCommandEvent& evt)
{
    m_currentPanel->Hide();
    m_currentPanel = m_pieChartPanel;
    m_currentPanel->Show();
    Layout();
}

wxBEGIN_EVENT_TABLE(wxChartsTestsFrame, wxFrame)
    EVT_MENU(wxID_EXIT, wxChartsTestsFrame::OnExit)
    EVT_MENU(wxID_COLUMN_CHART, wxChartsTestsFrame::OnColumnChart)
    EVT_MENU(wxID_PIE_CHART, wxChartsTestsFrame::OnPieChart)
wxEND_EVENT_TABLE()
