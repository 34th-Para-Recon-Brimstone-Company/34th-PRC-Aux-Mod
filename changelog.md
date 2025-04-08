# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## Unreleased
### Updated
- Filepaths for scripts updated to Hemtt requirements
- armour_standard pbo updated all internal file paths
- CBRN for Marines / ODSTs now created through substance painter and updated to proper colors.
- EOD Halo Reach variant for Marines / ODSTs now created through substance painter and updated to proper colors.

## 0.30.1
### Re-upload
- Version 0.30.0 was not successfully deployed.

## 0.30.0
### Added
- AAX support for the 34th Crewman Helmet
- Task Force King Armor Options
### Updated
- Updated AAX selections on Marine Helmets to improve functionality and reduce sticking when trying to select the 'Standard' variant
- Displaynames for custom helmets to properly reflect camo color and standardized custom armor and helmet displayname structure.
### Fix
- Jackknife and Scorpion missile 8 count missiles fixed.
- MArkers $PREFIX$ file adjusted
- Main PBO required addons now lists all of our patches again (it was missing music radio)
### Removed
- Unneccesary overrides for the SAABR as it no longer exists

## 0.29.1
### Fix
- Markers PBO fixed.

## 0.29.0
### Updated
- Filepaths for scripts updated to Hemtt requirements
- armour_standard pbo updated all internal file paths and prefix
- armour_custom pbo updated all internal file paths and prefix
- ace_arsenal_extended pbo updated all internal file paths and prefix
- faction_brimstone pbo updated all internal file paths and prefix
- loading_screens pbo updated all internal file paths and prefix
- markers pbo updated all internal file paths and prefix
- music_radio pbo updated prefix
- vehicles pbo updated prefix
- weapons_standard pbo updated prefix
- sec_guestpack pbo updated all internal file paths and prefix
- overrides pbo updated prefix
- main pbo prefix updated
- sc_uniforms prefix updated
### Removed
- unnessecary prefix files in overrides


## 0.28.0
- Identical to 0.27.1 but built with our legacy build system (HEMTT is doing something funny to our scripts and broke them)

## 0.27.1
### Fix
- Revert OPTRE Falcon to using OPTRE gun, override OPTRE gun to accept new magazine.

## 0.27.0
### Added
- Repackaged Unsung's Music for Helo's for the Falcon with 5 song selection.
- Created a 34th variant of 20mm HE rounds.
- Created a 34th variant 2000Rnd 20mmHE magazine.
- Created a 34th variant of Optre's m638
- Created a 34th variant magazine of OPTRE's AGM-502 'Jack Knife' SALH-ATGM with 8x count for the Falcon and Hornet
- Created a 34th variant magazine of OPTRE's AGM-90B 'Scorpion' Guided AT Missile with 8x count for the Falcon and Hornet
- 34th flavoured crewman helmets
### Updated
- Marine CH252 diffuse colors, small color fixes
- Falcon main 20mm HE, swapped to the 34th's version of the gun. Uses updated ammo.
- Updated OPTRE's C2GMLS 4Rnd missile magazine to be 8 count. (This only impacts the OPTRE Falcon)
- Updated AAX support to add camos and colors to uniform, helmet, and armor selections.
### Removed
- Old ODST Gear

## 0.26.0
### Updated
- OPTRE Pelican: radar enhanced, detectability reduced from 2x to 1.2x, sensor panel resolutions adjusted
- OPTRE SOCOM Pelican: radar enhanced, detectability reduced from 2x to 1x, sensor panel resolutions adjusted
- OPTRE Falcon: radar enhanced, active radar cone widened from 120* to 180*, sensor panel resolutions adjusted
- OPTRE Hornet: radar enhanced, detectability reduced from 2x to 1x, sensor panel resolutions adjusted
- OPTRE Sparrowhawk: radar enhanced, detectability reduced from 2x to 1.2x, sensor panel resolutions adjusted
- OPTRE Wombat: radar enhanced, sensor panel resolutions adjusted, fuel capacity changed
- OPTRE Longsword: radar enhanced, sensor panel res adjusted
- OPTRE Bayonet + variants: inheritance changed, radar enhanced
- OPTRE Gladius + variants: inheritance changed, radar resolution adjusted
- UNSC Foundries Heavy Pelican: radar enhanced, detectability increased to 1.2x, sensor panel resolutions adjusted

## 0.25.1
### Updated
- Balance pass on the Railgun's ammo
### Fix
- BDU colors having an oddity on the wrists
- Disabled BDU rvmats, they will return when they are properly working

## 0.25.0
### Added
- New Railgun ammo variants
- New M52 ODST Rucksack
- New armor variant 'M52-D Combat Armor' for the ODSTs
- Vasya custom armor
### Updated
- Updated base ODST armour textures and marierials
- Updated base BDU and plates
- AAX Model names to be prefixed as [34th]

## 0.24.3
### Updated
- Series 9[B] SOLA Jetpack(KJW's Jetpacks) balance pass. Functions very closely to the Halo: Reach Jetpack now.
- Series 9[X] SOLA Thruster Pack(Scion Conflict) will remain an option as 'experimental' escape & evasion equipment.
- All of our helmets should now have the TCP HUD available
### Fix
- Airburst Rifle: short description spelling, script now uses #undef to prevent potential for unexpected override, sound files now have file endings in their path
- Error message popup when depolarising helmets

## 0.24.2
### Fix
- Scripting nonsense

## 0.24.1
### Fix
- Missing bits on CfgPatches that prevented missions loading on the server

## 0.24.0
### Added
- Series-9 SOLA Jump-Jet (Halo jetpack which includes a Gunbag, Long-Range Radio, and Grapplehook functionality.)
- Ace Arsenal Extended support for Immersion Cigs - Rewrite
- More loading screens
- A new stanchion version with airburst ammunition
- Yandere Recon Custom Helm
- Ramirez Custom Marine Helm
- Conex Custom Marine Helm
- Harrison Custom Armour
### Updated
- Added black hot thermals to HUL Gen 3 variants to make them leadership available

## 0.23.0
### Added
- ACE Arsenal Extended Facewear Support Added:
  - TRYK Beards (Tac-Vests)
  - TRYK Facewear (Multi-play Uniforms)
  - MA Facewear
  - Arma 3 Balaclavas
  - Arma 3 Bandanas
  - MA: TGE Balaclavas
- Luther Custom JFO helmet
- 34th IHADSS Helmet
### Remove
- Dependency on 1st MEU in places

## 0.22.0
### Added
- Vasya Custom Helmet
- ACE Arsenal Extended Support added:
  - Misriah Armory Marine Pouches
  - OPTRE NVGs
  - Misriah Armory NVGs
  - 34th PRC MkV B Shoulders
  - 34th PRC MkV B Helmets
- Version checking
- Loading screen messages

## 0.21.0
### Added
- Ambrose Custom Armour
- Grenadier for Marines / ODSTs
- Scout for marines / ODSTs
- Shewolf Custom Helmet
- Pilot Helmet for marines / ODSTs
- Recon Helmet for marines / ODSTs
### Updated
- All Spartan shoulders have gunbags
- Added black hot and white hot thermal modes to UNSC Marksman's Visual Interface and all MVI tagged NVGs
- Shortened all Marine Cross Branch BDU uniform display names to BDU to fit better on screen
- Fixed some names on Jade's custom armour, was 'Demo Player' in some places

## 0.20.0
### Added
- Cappy Custom Armour
- EOD Helmets for Marines/ODSTs
- EOD CBRN NVG attachment for Marines/ODSTs
- Springbok Commander Seat LR Radio
- AAX support for Gungnir helmets
- JFO for Marines/ODSTs
- CQC for Marines/ODSTs
- Commando for Marines/ODSTs
### Updated
- Fix shoulderless marine uniforms having less carry capacity
- Gungnir helmet camos for Marines/ODSTS
- Naval Special Weapons SRS99AM now can use 19th Fleet SRS Ammo
- 1st MEU SAABR-96 now uses the OPTRE Stanchion model
- 1st MEU SAABR-96 now has OPTRE APFSDS ammo as an option

## 0.19.0
### Added
- Prototyped custom armour
- Bigger storage for exosuits that we use
### Updated
- Fixed some of our scorpions not showing in zeus

## 0.18.1
### Updated
- Fix Deploarized Helmets showing in Arsenals
- Fix ODST Marksman Woodland right shoulder not showing

## 0.18.0
### Added
- New ODST armour
### Updated
- Marked old ODST stuff as old

## 0.17.0
### Added
- 5 color variants for the marine helmet eyewear
- New loading screens (Thank you Konkord)
### Updated
- New textures and materials for the Mjolnir MkIV

## 0.16.0
### Added
- CQB shoulders for ODST vest (urban camo only for now)
### Updated
- Scorpion textures added (only green camo for now)
### Removed
- Old marine armour

## 0.15.0
### Added
- Scorpion (preview for health/armour changes, no textures yet due to bugs)

## 0.14.0
### Added
- UNSC Foundries styled gunbag for marines.

## 0.13.0
### Added
- Urban blue marine uniforms
### Updated
- Changed existing marine urban uniform's display name to mention urban red
- Rename ODST uniforms in AAX to Urban Red and Urban Blue instead of Red and Blue

## 0.12.0
### Added
- Ace Arsenal Extended support for various items
  - Marine and ODST helmets
  - Marine and ODST uniforms
  - ODST vests
  - ODST backpacks
### Updated
- Fix a bug with the BR55 not showing it's muzzle attachments
- Marine's urban BDU texture
- Marine's tropic uniform
### Removed
- Old AAX startup error message patch

## 0.11.0
### Added
- New marine armour
- New attachment support for various UNSC Foundries weapons (Thanks SEC for providing configs for almost all of these)
  - BR55 family
  - M392
  - MA5A Family
  - MA5B
  - SRS99RM
  - M7
- New attachment support for various Misriah Armoury weapons
  - MA2B (Thanks SEC for the config for this)
  - Sidekick
- New ammo support for some weapons
  - GRL-45: Illumination flares and HuntIR
  - Bulldog: 8 Gauge rounds from UNSC Foundries
### Updated
- Invisible MkVb shoulders now use hidden selection stuff instead of a bad p3d
- SEC Guest Pack: Less protection
- Marked old marine uniforms/helmets/backpacks with `[34th old]` tag

## 0.10.0
### Added
- SEC Guest Pack
- Loading screens (thanks Cain)

## 0.9.0
### Added
- Marine Gungnir helmets
- Mjolnir Mark V B
  - Mjolnir CQC helmet
  - Mjolnir Gungnir helmet
  - Mjolnir JFO helmet
  - Mjolnir MP helmet
  - Mjolnir Pilot helmet
- Add a fake mod to fix dependency on aceax_gearinfo
### Updated
- Mjolnir Mark V B
  - Mjolnir Commando helmet texture fixed
### Removed
- Old spartan equipment

## 0.8.1
### Updated
- Fix popup error with the invisible mkvb shoulders
- Add a fake mod to fix dependency on sc_uniforms

## 0.8.0
### Added
- Intercom for springboks
### Updated
- Fixed some display names that had typos

## 0.7.0
### Added
- MkVB Security shoulder
  - No texture, but the placeholder class was missing
- New class names for several things
### Updated
- Display name changes
  - Searchability should be improved
  - It should also be clearer when a backpack is for ODST use only
- Mark some items as old, these will be removed later

## 0.6.0
### Added
- SPI Armour Set
- Mjolnir Mark V B armor set
  - Mjolnir Air Assault Helmet
  - Mjolnir Commando Helmet
  - Mjolnir CQC Set
  - Mjolnir EVA Set
  - Mjolnir Grenadier Set
  - Mjolnir EOD Set
  - Mjolnir MKV Set
  - Mjolnir ODST Set
  - Mjolnir Operator Shoulders
  - Mjolnir Recon Set
  - Mjolnir Scout Set
- All Bulldogs have radios now

## 0.5.0
### Added
- Visorless marine helmets
- Satan map marker

## 0.4.0
### Added
- MKIV Armour WIP

## 0.3.0
### Added
- Custom map markers
- ODST guncase
- Backpacks for Marines
### Updated
- ODST backpack textures

## 0.2.0
### Added
- Uniform camos for marines
- Uniform and vest camos for ODST
- Backpacks for ODST
### Updated
- New unit emblem
- Overhaul of class names (apologies to people who have load-outs this early)

## 0.1.1
### Updated
- Updated ODST Vests

## 0.1.0
Initial release
### Added
- Beret
- Uniform & helmet for infantry
- Vest & helmet for ODST
