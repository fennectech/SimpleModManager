//
// Created by Adrien BLANCHET on 22/06/2020.
//

#ifndef SIMPLEMODMANAGER_TAB_MOD_OPTIONS_H
#define SIMPLEMODMANAGER_TAB_MOD_OPTIONS_H

#include <borealis.hpp>
#include <tab_mod_browser.h>

class tab_mod_options : public brls::List {

public:
  tab_mod_options();

  void initialize();

  void buildFolderInstallPresetItem();
  void buildResetModsCacheItem();
  void buildDisableAllMods();

  // User set
  tab_mod_browser* _tabModBrowser_;

  // FolderInstallPreset
  int _preSelection_;
  std::string _inheritedTitle_;

  // menu items
  brls::ListItem* _itemFolderInstallPreset_;
  brls::ListItem* _itemResetModsCache_;
  brls::ListItem* _itemDisableAllMods_;

};


#endif //SIMPLEMODMANAGER_TAB_MOD_OPTIONS_H
