#include "SusyNtuple/Photon.h"

using Susy::Photon;
/*--------------------------------------------------------------------------------*/
// Copy constructor
/*--------------------------------------------------------------------------------*/
Photon::Photon(const Photon &rhs):
  Particle(rhs),
  isConv(rhs.isConv),
  tight(rhs.tight),
  clusE(rhs.clusE),
  clusEta(rhs.clusEta),
  clusPhi(rhs.clusPhi),
  OQ(rhs.OQ),
  isoGradientLoose(rhs.isoGradientLoose),
  isoGradient(rhs.isoGradient),
  isoLooseTrackOnly(rhs.isoLooseTrackOnly),
  isoLoose(rhs.isoLoose),
  isoTight(rhs.isoTight),
  topoEtcone40(rhs.topoEtcone40)
{
}
/*--------------------------------------------------------------------------------*/
// Assignment operator
/*--------------------------------------------------------------------------------*/
Photon& Photon::operator=(const Photon &rhs)
{
  if (this != &rhs) {
    Particle::operator=(rhs);
    isConv  = rhs.isConv; 
    tight = rhs.tight;
    clusE = rhs.clusE;
    clusEta = rhs.clusEta;
    clusPhi = rhs.clusPhi;
    OQ = rhs.OQ;
    isoGradientLoose = rhs.isoGradientLoose;
    isoGradient = rhs.isoGradient;
    isoLooseTrackOnly = rhs.isoLooseTrackOnly;
    isoLoose = rhs.isoLoose;
    isoTight = rhs.isoTight;
    topoEtcone40 = rhs.topoEtcone40;
  }
  return *this;
}

