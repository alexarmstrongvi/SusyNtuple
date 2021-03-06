#include "SusyNtuple/Isolation.h"

namespace Susy
{

using std::string;
std::string Isolation2str(const Isolation &iso)
{
    string s = "Unknown";
    switch(iso){
        case Isolation::GradientLoose           : s = "GradientLoose"   ; break;
        case Isolation::Gradient                : s = "Gradient"        ; break;
        case Isolation::LooseTrackOnly          : s = "LooseTrackOnly"  ; break;
        case Isolation::Loose                   : s = "Loose"           ; break;
        case Isolation::FixedCutTightTrackOnly  : s = "FixedCutTightTrackOnly" ; break;
        case Isolation::FixedCutTight           : s = "FixedCutTight"   ; break;
        case Isolation::FixedCutTightCaloOnly   : s = "FixedCutTightCaloOnly" ; break;
        case Isolation::FixedCutLoose           : s = "FixedCutLoose"   ; break;
        case Isolation::IsolationInvalid        : s = "IsolationInvalid"; break;
    }
    return s;
}
}; // namespace Susy
