#ifndef BASE_H
#define BASE_H

enum analysis_t { POG, SS, HAD, STOP, ZMET, WW };
enum id_level_t { 
  //SS
  //v1
  SS_veto_noiso_v1, 
  SS_veto_v1, 
  SS_fo_noiso_v1, 
  SS_fo_v1, 
  SS_medium_noiso_v1, 
  SS_medium_v1, 
  SS_tight_noiso_v1, 
  SS_tight_v1, 
  //v2
  SS_veto_noiso_v2, 
  SS_veto_v2, 
  SS_fo_noiso_v2, 
  SS_fo_v2, 
  SS_medium_noiso_v2, 
  SS_medium_v2, 
  SS_tight_noiso_v2, 
  SS_tight_v2, 
  //v3
  SS_veto_noiso_noip_v3,
  SS_veto_noiso_v3, 
  SS_veto_v3, 
  SS_fo_looseMVA_noiso_noip_v3,
  SS_fo_looseMVA_noiso_v3, 
  SS_fo_looseMVA_v3, 
  SS_fo_noiso_noip_v3,
  SS_fo_noiso_v3, 
  SS_fo_v3, 
  SS_medium_looseMVA_noip_v3,
  SS_medium_noip_v3,
  SS_medium_noiso_v3, 
  SS_medium_v3, 
  SS_tight_noiso_v3, 
  SS_tight_v3, 
  //v4
  SS_veto_noiso_noip_v4,
  SS_veto_noiso_v4,
  SS_veto_v4, 
  SS_fo_looseMVA_noiso_noip_v4,
  SS_fo_looseMVA_noiso_v4, 
  SS_fo_looseMVA_v4, 
  SS_fo_noiso_noip_v4,
  SS_fo_noiso_v4,
  SS_fo_v4, 
  SS_medium_looseMVA_noip_v4,
  SS_medium_noip_v4,
  SS_medium_noiso_v4,
  SS_medium_v4,
  SS_tight_noiso_v4,
  SS_tight_v4,
  //v5
  SS_veto_noiso_noip_v5,
  SS_veto_noiso_v5,
  SS_veto_v5, 
  SS_fo_looseMVA_noiso_noip_v5,
  SS_fo_looseMVA_noiso_v5, 
  SS_fo_looseMVA_v5, 
  SS_fo_noiso_noip_v5,
  SS_fo_noiso_v5,
  SS_fo_v5, 
  SS_medium_looseMVA_noip_v5,
  SS_medium_noip_v5,
  SS_medium_noiso_v5,
  SS_medium_v5,
  SS_tight_noiso_v5,
  SS_tight_v5,
  SS_fo_looseMVA_noiso_noip_no3chg_v5,
  SS_fo_noiso_no3chg_v5,
  SS_fo_looseMVA_noiso_no3chg_v5,
  SS_fo_looseMVA_no3chg_v5,
  SS_medium_noiso_no3chg_v5,
  SS_medium_no3chg_v5,

  // RA7
  RA7_el_loose,
  RA7_el_fo,
  RA7_el_tight,
  RA7_loose,
  RA7_fo,
  RA7_tight,

  //MT2
  HAD_veto_noiso_v1,
  HAD_veto_v1, 
  HAD_loose_noiso_v1, 
  HAD_loose_v1, 
  HAD_medium_noiso_v1, 
  HAD_medium_v1, 
  HAD_tight_noiso_v1, 
  HAD_tight_v1, 
  HAD_veto_noiso_v2,
  HAD_veto_v2, 
  HAD_loose_noiso_v2, 
  HAD_loose_v2, 
  HAD_medium_noiso_v2, 
  HAD_medium_v2, 
  HAD_tight_noiso_v2, 
  HAD_tight_v2, 
  HAD_veto_noiso_v3,
  HAD_veto_v3, 
  HAD_loose_noiso_v3, 
  HAD_loose_v3, 
  HAD_medium_noiso_v3, 
  HAD_medium_v3, 
  HAD_tight_noiso_v3, 
  HAD_tight_v3,
  HAD_veto_noiso_v4,
  HAD_veto_v4, 
  HAD_loose_noiso_v4, 
  HAD_loose_v4, 
  HAD_medium_noiso_v4, 
  HAD_medium_v4, 
  HAD_tight_noiso_v4, 
  HAD_tight_v4,

  //Stop
  STOP_veto_v1, 
  STOP_loose_v1, 
  STOP_medium_v1, 
  STOP_tight_v1,
  STOP_sync_v1,
  STOP_veto_v2,
  STOP_loose_v2,
  STOP_medium_v2,
  STOP_tight_v2,
  STOP_veto_v3,
  STOP_loose_v3,
  STOP_medium_v3,
  STOP_tight_v3,

  //Z+MET
  ZMET_mediumMu_v3, 
  ZMET_mediumMu_veto_v3, 
  ZMET_mediumMu_v2, 
  ZMET_mediumMu_veto_v2, 
  ZMET_mediumMu_v1, 
  ZMET_mediumMu_noiso_v1, 
  ZMET_tightMVA_v2, 
  ZMET_tightMVA_noiso_v2, 
  ZMET_tightMVA_v1, 
  ZMET_tightMVA_noiso_v1, 
  ZMET_looseMVA_v1, 
  ZMET_looseMVA_noiso_v1, 
  ZMET_loose_v1, 
  ZMET_loose_noiso_v1, 
  ZMET_loose_v2, 
  ZMET_loose_noiso_v2,
  ZMET_tight_v1, 
  ZMET_tight_noiso_v1, 
  ZMET_tight_v2, 
  ZMET_tight_noiso_v2, 
  ZMET_photon_v3,
  ZMET_photon_v2,
  ZMET_photon_v1,

  //WW
  WW_veto_noiso_v1, 
  WW_veto_v1, 
  WW_veto_noiso_noip_v1,
  WW_fo_looseMVA_noiso_noip_v1,
  WW_medium_looseMVA_noip_v1,
  WW_medium_noip_v1,
  WW_fo_noiso_noip_v1,
  WW_fo_noiso_v1, 
  WW_fo_v1, 
  WW_fo_looseMVA_noiso_v1, 
  WW_fo_looseMVA_v1, 
  WW_medium_noiso_v1, 
  WW_medium_v1, 
  WW_tight_noiso_v1, 
  WW_tight_v1,
  WW_veto_noiso_v2, 
  WW_veto_v2, 
  WW_fo_noiso_v2, 
  WW_fo_v2, 
  WW_medium_noiso_v2, 
  WW_medium_v2,
  WW_fo_noiso_v3, 
  WW_fo_v3, 
  WW_medium_noiso_v3, 
  WW_medium_v3


};

analysis_t whichAnalysis(id_level_t id_level);

#endif
