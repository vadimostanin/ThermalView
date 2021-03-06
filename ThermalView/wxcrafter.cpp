//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;


MainDialogBaseClass::MainDialogBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);
    
    wxBoxSizer* boxSizer17 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(boxSizer17, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer43 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer17->Add(boxSizer43, 1, wxALL|wxEXPAND, 0);
    
    wxBoxSizer* boxSizer45 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer43->Add(boxSizer45, 1, wxALL|wxEXPAND, 0);
    
    m_picture = new wxImageView(this, wxID_ANY);
    boxSizer45->Add(m_picture, 1, wxALL|wxEXPAND, 5);
    
    m_gradient = new wxImageView(this, wxID_ANY);
    boxSizer45->Add(m_gradient, 0, wxRIGHT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    m_gradient->SetMinSize(wxSize(15,-1));
    
    wxBoxSizer* boxSizer47 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer43->Add(boxSizer47, 0, wxALL|wxEXPAND, 0);
    
    wxBoxSizer* boxSizer49 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer47->Add(boxSizer49, 1, wxALL|wxEXPAND, 0);
    
    m_slider_low = new wxSlider(this, wxID_ANY, 2000, 2000, 20000, wxDefaultPosition, wxSize(-1,-1), wxSL_SELRANGE|wxSL_HORIZONTAL);
    m_slider_low->SetToolTip(_("Low Limit"));
    m_slider_low->Enable(false);
    
    boxSizer49->Add(m_slider_low, 0, wxALL|wxEXPAND, 5);
    
    m_slider_high = new wxSlider(this, wxID_ANY, 2000, 2000, 20000, wxDefaultPosition, wxSize(-1,-1), wxSL_SELRANGE|wxSL_HORIZONTAL);
    m_slider_high->SetToolTip(_("High Limit"));
    m_slider_high->Enable(false);
    
    boxSizer49->Add(m_slider_high, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer19 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer17->Add(boxSizer19, 0, wxALL|wxEXPAND, 0);
    
    m_button_connect = new wxButton(this, wxID_ANY, _("Connect"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer19->Add(m_button_connect, 0, wxALL|wxEXPAND, 5);
    
    m_button_stop = new wxButton(this, wxID_ANY, _("Stop"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button_stop->Enable(false);
    
    boxSizer19->Add(m_button_stop, 0, wxALL|wxEXPAND, 5);
    
    m_button_take_one = new wxButton(this, wxID_ANY, _("Take One"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button_take_one->Enable(false);
    
    boxSizer19->Add(m_button_take_one, 0, wxALL|wxEXPAND, 5);
    
    m_button_get_cal = new wxButton(this, wxID_ANY, _("Do Extra Cal"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button_get_cal->SetToolTip(_("Point your camera down and wait for the calibration frame."));
    m_button_get_cal->Enable(false);
    
    boxSizer19->Add(m_button_get_cal, 0, wxALL|wxEXPAND, 5);
    
    m_check_use_extra_cal = new wxCheckBox(this, wxID_ANY, _("Use Extra Cal"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_check_use_extra_cal->SetValue(false);
    
    boxSizer19->Add(m_check_use_extra_cal, 0, wxALL, 5);
    
    wxArrayString m_lb_interpolationArr;
    m_lb_interpolation = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_lb_interpolationArr, 0);
    
    boxSizer19->Add(m_lb_interpolation, 0, wxALL, 5);
    m_lb_interpolation->SetMinSize(wxSize(97,-1));
    
    wxBoxSizer* boxSizer61 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer19->Add(boxSizer61, 0, wxALL, 0);
    
    wxArrayString m_lb_profileArr;
    m_lb_profile = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_lb_profileArr, 0);
    
    boxSizer61->Add(m_lb_profile, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5);
    m_lb_profile->SetMinSize(wxSize(68,-1));
    
    m_button_edit_profile = new wxButton(this, wxID_ANY, _(">"), wxDefaultPosition, wxSize(25,-1), 0);
    
    boxSizer61->Add(m_button_edit_profile, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_check_auto_range = new wxCheckBox(this, wxID_ANY, _("Autorange"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_check_auto_range->SetValue(true);
    
    boxSizer19->Add(m_check_auto_range, 0, wxALL, 5);
    
    boxSizer19->Add(0, 0, 1, wxALL, 5);
    
    m_histogram = new wxImageView(this, wxID_ANY);
    boxSizer19->Add(m_histogram, 0, wxALL|wxEXPAND, 5);
    m_histogram->SetMinSize(wxSize(-1,77));
    
    m_button_save = new wxButton(this, wxID_ANY, _("Save"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button_save->Enable(false);
    
    boxSizer19->Add(m_button_save, 0, wxALL|wxEXPAND, 5);
    
    wxArrayString m_lb_sizesArr;
    m_lb_sizes = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_lb_sizesArr, 0);
    
    boxSizer19->Add(m_lb_sizes, 0, wxALL|wxEXPAND, 5);
    m_lb_sizes->SetMinSize(wxSize(87,-1));
    
    SetName(wxT("MainDialogBaseClass"));
    SetSizeHints(615,467);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_slider_low->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainDialogBaseClass::OnSlider_lowScrollChanged), NULL, this);
    m_slider_high->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainDialogBaseClass::OnSlider_highScrollChanged), NULL, this);
    m_button_connect->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_connectButtonClicked), NULL, this);
    m_button_stop->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_stopButtonClicked), NULL, this);
    m_button_take_one->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_take_oneButtonClicked), NULL, this);
    m_button_get_cal->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_get_calButtonClicked), NULL, this);
    m_check_use_extra_cal->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnCheck_use_extra_calCheckboxClicked), NULL, this);
    m_lb_interpolation->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(MainDialogBaseClass::OnLb_interpolationChoiceSelected), NULL, this);
    m_lb_profile->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(MainDialogBaseClass::OnLb_profileChoiceSelected), NULL, this);
    m_button_edit_profile->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_edit_profileButtonClicked), NULL, this);
    m_check_auto_range->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnCheck_auto_rangeCheckboxClicked), NULL, this);
    m_button_save->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_saveButtonClicked), NULL, this);
    
}

MainDialogBaseClass::~MainDialogBaseClass()
{
    m_slider_low->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainDialogBaseClass::OnSlider_lowScrollChanged), NULL, this);
    m_slider_high->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainDialogBaseClass::OnSlider_highScrollChanged), NULL, this);
    m_button_connect->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_connectButtonClicked), NULL, this);
    m_button_stop->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_stopButtonClicked), NULL, this);
    m_button_take_one->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_take_oneButtonClicked), NULL, this);
    m_button_get_cal->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_get_calButtonClicked), NULL, this);
    m_check_use_extra_cal->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnCheck_use_extra_calCheckboxClicked), NULL, this);
    m_lb_interpolation->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(MainDialogBaseClass::OnLb_interpolationChoiceSelected), NULL, this);
    m_lb_profile->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(MainDialogBaseClass::OnLb_profileChoiceSelected), NULL, this);
    m_button_edit_profile->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_edit_profileButtonClicked), NULL, this);
    m_check_auto_range->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnCheck_auto_rangeCheckboxClicked), NULL, this);
    m_button_save->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButton_saveButtonClicked), NULL, this);
    
}

ProfileEditorDialogBase::ProfileEditorDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer69 = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(boxSizer69);
    
    wxArrayString m_lb_patternArr;
    m_lb_pattern = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_lb_patternArr, wxLB_SINGLE);
    #ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to wxFONTFAMILY_TELETYPE
    wxFont m_lb_patternFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_lb_patternFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #else
    wxFont m_lb_patternFont = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_lb_patternFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #endif
    m_lb_pattern->SetFont(m_lb_patternFont);
    
    boxSizer69->Add(m_lb_pattern, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer83 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer69->Add(boxSizer83, 0, wxALL|wxEXPAND, 0);
    
    wxBoxSizer* boxSizer101 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer83->Add(boxSizer101, 1, wxALL|wxEXPAND, 0);
    
    m_staticText103 = new wxStaticText(this, wxID_ANY, _("Res:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer101->Add(m_staticText103, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_text_granularity = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(50,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_text_granularity->SetHint(wxT(""));
    #endif
    
    boxSizer101->Add(m_text_granularity, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* boxSizer85 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer83->Add(boxSizer85, 0, wxALL, 0);
    
    m_text_rank = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(35,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_text_rank->SetHint(wxT(""));
    #endif
    
    boxSizer85->Add(m_text_rank, 0, wxLEFT|wxBOTTOM, 5);
    
    m_text_color = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(60,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_text_color->SetHint(wxT(""));
    #endif
    
    boxSizer85->Add(m_text_color, 0, wxLEFT|wxRIGHT|wxBOTTOM, 5);
    
    m_colour_picker = new wxColourPickerCtrl(this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize(-1,-1), wxCLRP_DEFAULT_STYLE);
    
    boxSizer83->Add(m_colour_picker, 0, wxLEFT|wxRIGHT|wxBOTTOM, 5);
    
    wxBoxSizer* boxSizer109 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer83->Add(boxSizer109, 1, wxALL|wxEXPAND, 0);
    
    m_button_add = new wxButton(this, wxID_ANY, _("Add"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer109->Add(m_button_add, 1, wxALL, 5);
    m_button_add->SetMinSize(wxSize(30,-1));
    
    m_button_rem = new wxButton(this, wxID_ANY, _("Rem"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer109->Add(m_button_rem, 1, wxALL, 5);
    m_button_rem->SetMinSize(wxSize(30,-1));
    
    boxSizer83->Add(0, 0, 1, wxALL, 5);
    
    m_check_preview = new wxCheckBox(this, wxID_ANY, _("Preview"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_check_preview->SetValue(true);
    
    boxSizer83->Add(m_check_preview, 0, wxALL, 5);
    
    m_button_apply = new wxButton(this, wxID_ANY, _("Apply"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer83->Add(m_button_apply, 0, wxALL|wxEXPAND, 5);
    
    m_button_save = new wxButton(this, wxID_ANY, _("Save"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer83->Add(m_button_save, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_button_save_as = new wxButton(this, wxID_ANY, _("Save As"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer83->Add(m_button_save_as, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    SetName(wxT("ProfileEditorDialogBase"));
    SetMinSize( wxSize(235,300) );
    SetSizeHints(235,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_lb_pattern->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(ProfileEditorDialogBase::OnLb_patternListboxSelected), NULL, this);
    m_text_granularity->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(ProfileEditorDialogBase::OnText_granularityTextUpdated), NULL, this);
    m_text_rank->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(ProfileEditorDialogBase::OnText_rankTextUpdated), NULL, this);
    m_text_color->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(ProfileEditorDialogBase::OnText_colorTextUpdated), NULL, this);
    m_colour_picker->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(ProfileEditorDialogBase::OnColour_pickerColourpickerChanged), NULL, this);
    m_button_add->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_addButtonClicked), NULL, this);
    m_button_rem->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_remButtonClicked), NULL, this);
    m_check_preview->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnCheck_previewCheckboxClicked), NULL, this);
    m_button_apply->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_applyButtonClicked), NULL, this);
    m_button_save->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_saveButtonClicked), NULL, this);
    m_button_save_as->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_save_asButtonClicked), NULL, this);
    
}

ProfileEditorDialogBase::~ProfileEditorDialogBase()
{
    m_lb_pattern->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(ProfileEditorDialogBase::OnLb_patternListboxSelected), NULL, this);
    m_text_granularity->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(ProfileEditorDialogBase::OnText_granularityTextUpdated), NULL, this);
    m_text_rank->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(ProfileEditorDialogBase::OnText_rankTextUpdated), NULL, this);
    m_text_color->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(ProfileEditorDialogBase::OnText_colorTextUpdated), NULL, this);
    m_colour_picker->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(ProfileEditorDialogBase::OnColour_pickerColourpickerChanged), NULL, this);
    m_button_add->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_addButtonClicked), NULL, this);
    m_button_rem->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_remButtonClicked), NULL, this);
    m_check_preview->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnCheck_previewCheckboxClicked), NULL, this);
    m_button_apply->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_applyButtonClicked), NULL, this);
    m_button_save->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_saveButtonClicked), NULL, this);
    m_button_save_as->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ProfileEditorDialogBase::OnButton_save_asButtonClicked), NULL, this);
    
}
