# Changelog

Please see below for the Emerald Battle Revolution project changelog. For changes related to
the PokeEmerald Expanded project, please see the [PokeEmerald Changelog](./CHANGELOG.md).

## Ver. 3.6.0

Massively increased the tutor movepool for most Pokemon, which can be accessed from the party menu and 
added the option to select the number of restricted Pokemon available to Open Rules opponents, from the
'Banlists' menu in the battle frontier controller

## Ver. 3.5.1

Removed time setting code which was causing crashes, 
updated expansion version to latest release

## Ver. 3.5.0

Customised make_teachables logic to support adding all teachable moves, 
increased number of teachable moves for all species

## Ver. 3.4.1

RTC is now initialised to 12PM when game is first started (can be fixed for existing saves 
using the quick-start updater NPC), fixed incorrect abilities being assigned in rental sets, 
converted rental mons to use Pokeballs instead of Park Balls

## Ver. 3.4.0

Merged upstream changes, changed move relearner to use new expansion system - Moves can now be 
relearned using the menus, rather than needing an NPC. The actual NPC has been reverted to
the original behavior, and the extra NPCs have been removed from the underground. The 
Sample Team shop has been moved to the previous location of the relearners, and the
existing Sample Team area has been removed.

## Ver. 3.3.0

Money box window is now hidden while multichoice menus are displayed, increasing the available size
of the window and avoiding clipping issues. The controls dialog box now fits the entire chat window.
Sample sets have been restructured, and some teams have been improved.

## Ver. 3.2.1

Sample teams / sets restructure, added new doubles sets and teams

## Ver. 3.2.0

Added RefreshQuickStart NPC to the Battle Frontier Underground Pokemon Center, for ensuring that older 
players get the up-to-date items, flags, etc. set the same as new save files

Moved Battle Frontier Underground Pokemon Center special NPCs (Gentleman, Gigantamax Factor Teacher) to
the vacant store at the bottom-right hand corner of the Battle Frontier Underground

Updated Birch speech, some other NPC text lines

Updated readme for current features

## Ver. 3.1.3

Updated config, increased hard-mode battle point earnings

## Ver. 3.1.2

Merged upstream changes, split changelog into seperate file, updated heal locations

## Ver. 3.1.1

Merged upstream changes

## Ver. 3.1.0

Speech updated, makefile updated, tera type added to samples, config changes, other changes

## Ver. 3.0.2

Implemented quick start, removed truck start

## Ver. 3.0.1

Changed Birch's speech to an Emerald Battle Revolution intro, changed the demo Pokemon to Incineroar

## Ver. 3.0.0

**Major overhaul, legacy save compatibility has not been preserved**

Unfortunately, the old save file format will no longer be supported for this project, and we will
be using the traditional save structure moving forward.

This is somewhat of a soft-reset for the project, and many features I felt were unnecessary to maintain
have been removed. All primary features of the project (i.e. easy training, pokemon acquiring, etc.) have
been preserved.

We have updated to the latest version of the Pokeemerald-expansion project *at the time of merging*, which
is `1.11.2`. 

## Ver. 2.1.2

Added new rental sets, added notes for rental sets

## Ver. 2.1.1

Updated NPC text

## Ver. 2.1.0

Fixed Pokenav from PC

## Ver. 2.0.1

Cleaned up rental teams / sets, updated poryscript

## Ver. 2.0.0

Project has been re-implemented on the latest version of the pokemerald-expansion codebase

## Ver. 1.6.2

Merged upstream changes

## Ver. 1.6.1

Added missing attack power scaling values, fixed issue with checking incorrect variable when 
performing power scaling calculations, fixed issue with incorrectly accessed difficulty switch, 
merged upstream changes

## Ver. 1.6.0

Implemented variable move power, hidden ability selection chance and added an optional 'hard mode' 
to the battle frontier controllers, which allows you to skip the easy (low base stat, ivs, etc.)
opponents in the battle frontier and jump straight to the hardest.

## Ver. 1.5.1

Simplified sample teams & sample sets shop menus, added move deleter to Battle Frontier 
Underground, fixed some minor issues with battle frontier underground map sprites

## Ver. 1.5.0

Updated to the new PokeEmerald-Expansion Pokedex Plus, which provides useful information
such as base stats, moves, formes and more. Re-enabled the displaying of tera types in 
the summary menu, and added the ability to change the tera type of a Pokémon by using
a single tera shard on them.

## Ver. 1.4.2

Merged upstream changes, fixed issue with text rendering, implemented game versioning system
which will be used for preventing battling and trading with unofficial versions in the future, 
fixed bugs related to the battle frontier underground link / cable club rooms

## Ver. 1.4.1

Expanded shops to allow for the purchasing of individual sets from a team, as well as expanded
the individual Pokémon shops to show Pokémon in the categories for both their primary and
secondary type

## Ver. 1.4.0

Merged upstream changes, including support for terastalisation which can now be banned or
unbanned using the Battle Frontier controllers, and used inside and out of Battle Facilities.

Created new branch for developing the 'Battle Spot' feature, added new sample teams from 
old VGC formats (2016, 2018 pre/post bank and 2019 sun, moon and ultra series).

## Ver. 1.3.3

Implemented auto-generator for Pokémon and Legendary shop multi-select menus, 
updated Pokémon Shop / Legendary Shop text

## Ver. 1.3.2

Updated move lists, ability selection bonuses, fixed several minor bugs, 
added new sample teams

## Ver. 1.3.1

Restructured nature code, fixed mega/gmax/zmove allow flags, implemented basic testing for set generation. Implemented rng seeding 
for consistent sample set ability/gender selection. Fixed set generation bugs, updated banned moves, improved item selection.

## Ver. 1.3.0

Full build pipeline has been written to compile sample teams and sets which can be purchased by players at compile-time by adding `.team` and `.set` files
to the `tools/bfg_helpers/sample` directory. Likewise, multi-choice menus can now be automatically generated by adding a `json` file containing options to
the `tools/bfg_helpers/select` directory. Other text in the Sample Team and Sample Set shops has been cleaned up and improved. Many sample doubles teams have
been added, and more will be added in the future.

## Ver. 1.2.1

Added new, unfinished location 'Battle Spot' to the Battle Frontier Underground, with a pathway leading in from the center of the top row of shops. 
Several vendors have been broken down into their own files to improve code reusability. Updated battle frontier controller to allow for the banning
and unbanning of megas, zmoves, gigantamax. Improved startup scripts

## Ver. 1.2.0

Merged upstream changes which have implemented modern battle frontier set generation for Battle Factory, as well as all Battle Tent Facilities. 
Battle Factory is fully working, including items, swapping, and open lvl. mode has every second Pokémon (and one Pokémon on each opponent team)
as a restricted legendary. Please see the [Battle Frontier Feature Table](#feature-table) for more details. 

Optional BST range fixing has been implemented (compile-side), and open lvl. mode will now always have the highest BST limit by default rather 
than starting low and increasing. The latest changes from the upstream branch of the Pokeemerald Expansion Project have now also been merged.

The list of Pokémon which can be selected for each trainer class has been expanded, and Tera Blast has been added to the banned moves list as
it has not been fully implemented yet.

## Ver. 1.1.1

Extensive testing has been performed on each Battle Frontier facility, to ensure that features are working
as expected. Issues with level scaling have now been resolved in all facilities, and new set generation
has been confirmed as working in most facilities. For a full list of all features which are currently
supported in each Battle Facility, including Battle Tents please see the [Battle Frontier Feature Table](#feature-table).

## Ver. 1.1.0

Merged upstream changes which have implemented a more efficient species selection system, including ensuring that two restricted (i.e. legendary) Pokémon are picked on all teams in the 'Open' rules battle mode when playing doubles (with four Pokémon), and one is selected playing in formats where three Pokémon are selected.

Mythicals are now legal to be used in all level 50 and open rules formats, and have been added to the normal selection pool for both (Excluding Arceus and Deoxys, which are considered restricted).

Special cases have now been added for selecting moves such as Icy Wind, Trick Room, Tailwind and some others which will make them more likely to be chosen appropriately (even when 'attacks only' mode is chosen).

Other issues with fusion formes (e.g. Kyurem, Calyrex) not appearing has been resolved, and incomplete 
species such as Pecharunt and Terapagos have been removed from the available species list.

## Ver. 1.0.1

Updated config to revert changes which prevented Battle Frontier set randomisation from working as expected

## Ver. 1.0.0

Major update: Battle Frontier Modernised Set-Generator has been implemented, with over a 
months worth of development on a seperate repository ([battle frontier generator branch](https://github.com/damon-murdoch/pokeemerald-expansion/tree/frontier-set-generator-upcoming)) so it may be used by other projects. An NPC has been
added to the Battle Frontier Underground which allows for the customisation of Battle Frontier
Facilities, with the following options:

* Change between legacy (original) Battle Frontier Sets, or modern (randomised) Battle Frontier Sets with new Pokémon, moves, etc.
* Change between different team generation modes (modern sets only), with the following options:
  * Default: Default level-up learnsets at level 50
  * Random: Completely randomised movesets
  * Filtered: Randomised movesets, with moves filtered out based on stats / hard-coded moves to select/ignore.
  * Filtered (Attacks Only): Randomised movesets, with moves filtered out based on stats / hard-coded moves to select/ignore. Aside from status moves marked as 'required', or Pokémon who do not have four valid attacks, only attacking moves will be used.
  * Ranked: Randomised movesets, with moves filtered out based on stats / hard-coded moves to select/ignore. Attacking moves are 'ranked' based on a viability table, so in general stronger moves are picked over weaker moves (accounting for STAB, abilities, etc.)
  * Ranked (Attacks Only): Randomised movesets, with moves filtered out based on stats / hard-coded moves to select/ignore. Attacking moves are 'ranked' based on a viability table, so in general stronger moves are picked over weaker moves (accounting for STAB, abilities, etc). Aside from status moves marked as 'required', or Pokémon who do not have four valid attacks, only attacking moves will be used.
* Change the background music during Battle Frontier matches

For the 'Default' and 'Random' settings, EVs are invested in bulk (HP required, then Def/Spdef randomly) and a neutral nature is
used. Otherwise, evs/ivs/nature are selected based upon the base-stats of the Pokémon, where nature and evs will be invested in
whichever stats are highest first. Signature Z-Moves and Mega Evolutions may be used in the later matches (~41+), 

There is still a significant amount of work expected to be done on this part of the project, however it is currently in a completely
playable state. Please note, this has only been tested in Battle Tower Singles and Doubles so far, however further testing and 
development will be conducted to ensure all features work in the other facilities as well. Team generation takes about ~1 second 
to complete (can be quicker with default/random methods, as they are simpler). In future, this will be worked on to reduce wait 
time and attempt to reduce performance impacts. Please keep in mind, however that while these features are still in active 
development you may encounter crashes or other issues whilst using these features. If you do, please feel free to open an
issue with the project describing the crash so it can be investigated.

## Ver. 0.9.8

Merged upstream changes, removed unused poryscripts, reviewed and fixed code differences, 
reverted upstream plural string changes due to text issues, gigantamax-flagged Pokémon
can no longer evolve, and Pokémon without Gigantamax formes can no longer have the flag set.

## Ver. 0.9.7

Added an NPC to the Battle Frontier Underground Pokémon Center which is
able to change the Gigantamax Factor of a Pokémon for $500. Music-changing
NPCs have also been added to the Battle Tent facilities.

## Ver. 0.9.6

Merged upstream changes, added a toggle to the dynamax band which allows you to enable or disable 
dynamax battles, you will be unable to use megas/zmoves/tera during dynamax battles and dynamax 
will be unavailable outside of them. Ingame text has been updated to reflect this behavior. 
A new configuration header file has been added to control dynamax battle behavior 
(i.e. controlling if mega/z/tera can be used, setting if opponents can dynamax, etc.)

## Ver. 0.9.5

Added an NPC to all battle facilities (Frontier Facilities and Trainer Tower) which allows
you to change the battle music within the facility. NPCs still need to be added for the battle
tents located throughout the game.

## Ver. 0.9.4

Removed Cherish Ball / Gold Bottle Cap from stores, added NPC for exchanging Battle Points
for those items (50 each) to Battle Frontier Underground Pokémon Centre, reorganised shop items

## Ver. 0.9.3

Added fully working Pokémon Centre to (with respawn point) to Battle Frontier Underground, 
added Gimmighoul Coin / Leaders Crest item effects

## Ver. 0.9.2

Resolved merge conflicts, new teachable moves, text improvements, updated rom name, 
changed Ursaluna-BM to use standard Ursaluna sprite temporarily

## Ver. 0.9.1

Created Game Corner Currency Converter, added to the top left of both the Mauville Game Corner
and the Battle Frontier Underground Game Corner

## Ver. 0.9.0

Removed fade to black from Pokémon salespeople, added multichoice text for all breeder options, 
implemented Pokémon breeder for all species, minor refractor to add some missing species

## Ver. 0.8.3

Updated move tutor prices, fixed berry/bottle cap descriptions, made photon geyser single target, 
fixed bleakwind/wildbolt/sandsear storm accuracy, 

## Ver. 0.8.2

Implemented system for exchanging Gold Bottle Caps for shiny Pokémon in both the legendary Pokémon counter and
the Pokémon breeder, added optional allow battle z-moves in battle frontier switch, reduce held item animation time

## Ver. 0.8.1

Hidden Power type is now displayed accurately in the summary menu, move teacher menu, and in battle. Code has been
developed based on the guides provided by [LOuroboros](https://www.pokecommunity.com/showpost.php?p=10269149) and [Jirachii](https://www.pokecommunity.com/threads/simple-modifications-directory.416647/post-10269132).

## Ver. 0.8.0

Added fully working Game Corner to Battle Frontier Underground, where the greeter outside gives
you a coin case if you do not already own one. Balls can now be used on a Pokémon from the bag
menu to swap the ball the Pokémon is in. The original ball is returned to the player's inventory. 
Battle frontier species checks have now been disabled for the open rules mode, allowing all Pokémon
(incl. Mythicals) to be allowed. The level cap has also been reduced to level 50.

## Ver. 0.7.2

Merged code from pokeemerald-expanded upcoming branch into dev, updated evolution methods for 
all unobtainable evolutions (i.e. Hisuian formes, etc.) using a linking cable, new Paldean 
Pokémon with unimplemented evolution methods have been given item evolutions. Updated 
item prices, underground item shop layouts, and Pokémon breeding helper messages.

## Ver. 0.7.1

Last used bike is now remembered, and will not be reset back to Acro bike each time you
get off it. Several item prices have been reduced. Signs have been added to all of the
entrances to the Battle Frontier Underground, and the Battle Dome Underground Entrance
has been moved to make it more accessible. Added a new file `ENCOUNTERS.md` which lists
all of the locations where Pokémon can be encountered, generated by [Spawn Table Analyzer](https://github.com/damon-murdoch/pokeemerald-spawn-table-analyser).

## Ver. 0.7.0

Fixed move tutor, improved relearn tutor. Improved flow for move tutor 
conversation loop (both). Fixed Genie signature moves to be spread, however they still
do not have perfect accuracy in rain. Further improved underground layout, added shop
clerks for both new (Expansion) and original key items, implemented support
for gender-specific flags in sandbox mode startup script. Other minor improvements

## Ver. 0.6.6

Remodeled underground interior, implemented dev sandbox mode code (Within starting truck). Working move 
relearner has been created for tutor/egg moves, and has been added to both the Battle Frontier Underground 
and the original Move Tutor house. Instead of requiring a Heart Scale, both tutors now cost for $2000 per move. 

## Ver. 0.6.5

Added Porymoves combined teachable_learnsets to teachable_learnsets.h, which will allow Pokémon to be taught 
moves they learnt in any game after `Black and White 2`, except for `Pokémon Let's Go Pikachu and Eevee`. 

Minor improvements have been made to the Battle Frontier Underground map layout, and development for a move 
tutor for allowing Pokémon to be taught egg/tutor/other moves has been started.

## Ver. 0.6.4

Merged upcoming features into main branch, resolved associated merge conflicts. Updated wild
encounters json file with randomly generated wild encounters, using [Wild Encounter Randomiser](https://github.com/damon-murdoch/pokeemerald-wild-encounter-randomiser). 
These spawn tables are likely to be modified in the future, as the Wild Encounter Randomiser
is developed and improved.

## Ver. 0.6.3

Implemented Bottle Cap function for maxing all ivs, durin/belue berry for 0 Attack / Speed
respectively. Added TM/HM sellers to underground as well as added basic item / pokeball seller. 

## Ver. 0.6.2

Created work-in-progress currency converter (BP -> $, $ -> BP), as well as more 
battle item shops. Reworked battle frontier underground layout to make it smaller 
and easier to navigate.

## Ver. 0.6.1

Implemented basic Pokémon breeder code, for selling basic Pokémon within the Battle
Frontier Underground Day Care. Training Item/Berry Sellers, signs, and many placeholders
and other basic features have been added.

## Ver. 0.6.0

Legendary Pokémon shop has now been implemented for all legendaries, using the new
left/right bumper navigation system to simplify navigation. Instructions for how to
navigate the menu are displayed in the chat window. Several new underground shops 
have been added, for purposes such as ev/iv training, battle items, tm/hms and more.

## Ver. 0.5.4

Legendary seller has been implemented up to generation six, and an additional feature
has been added to multichoice2 which allows for the 'left' and 'right' bumpers to be
accepted as inputs, similar to the 'b' button. This has been used for tabbing between
Pokémon seller menus, rather than needing to have an additional item at the bottom 
of the menu.

## Ver. 0.5.3

Battle Frontier Underground Day Care service has been added, with an entrance next to
the Legendary Pokémon sales counter. Legendary Pokémon seller has been implemented up
to the first three generations.

## Ver. 0.5.2

Started work on Battle Frontier Underground Legendary Pokémon sales counter, which 
will be able to sell any Legendary Pokémon to players for a flat price ($12000).

## Ver. 0.5.1

Started working on Battle Frontier Underground area, which will include shops for 
every type of item as well as various facilities such as a Day Care and Game Corner.

Basic floor plan has been created, and map warps with the Battle Frontier overworld
(both East and West) have been created. 

## Ver. 0.5.0

Implemented flags to optionally allow duplicate items and species, merged changes from 
PokeEmerald-Expanded upcoming branch, resolved issues related to level scaling system - 
level scaling now works without issues for both open level (level 100) and level 50 rules. 

## Ver. 0.4.4

Implemented level scaling system for Battle Frontier facilities, which allows for Pokémon above level 50 to participate
in level 50 battles and optionally, Pokémon below level 50 can be raised to level 50 or level 100 in Open Battles. As a
result, the minimum level for Open Battles has been raised to 100 to ensure Pokémon all have the same level.

## Ver. 0.4.3

Implemented `voloved`'s [PC Access in PokeNav](https://github.com/pret/pokeemerald/wiki/Add-PC-Access-in-PokeNav) tutorial, as well as [allow Move Relearner to Teach Moves that Pre Evolutions Know](https://github.com/pret/pokeemerald/wiki/Allow-Move-Relearner-to-Teach-Moves-that-Pre-Evolutions-Know). Implemented `Diego Marten`'s [Move Relearner as an option in the Pokémon Party Screen](https://www.pokecommunity.com/showpost.php?p=10470602) tutorial. Implemented `Lunos`'s [Party swap with select](https://github.com/pret/pokeemerald/compare/master...LOuroboros:partyScrQuickSwap) tutorial, as well as [Nicknaming as an option in the Pokémon Party Screen](https://github.com/pret/pokeemerald/wiki/Nickname-your-Pok%C3%A9mon-from-the-party-menu)

## Ver. 0.4.2

Implemented `Lunos`'s [2-in-1-bike](https://www.pokecommunity.com/showpost.php?p=10217718&postcount=172) 
tutorial, and modified the bike shop scripts to adjust it for the new behavior. Swapped the order of battle
mechanic items to be the following:
* 2nd Gym: Z Power Ring
* 4th Gym: Mega Ring
* 6th Gym: Tera Orb
* 8th Gym: Dynamax Band
Shops have also been modified to unlock relevant items for each mechanic as they are unlocked.

## Ver. 0.4.1

Battle mechanic items (e.g. Mega Power Ring) will now be recieved during the story, after
defeating the 2nd, 4th, 6th and 8th gyms respectively. The order is as follows:
* 2nd Gym: Mega Ring
* 4th Gym: Z Power Ring
* 6th Gym: Dynamax Band
* 8th Gym: Tera Orb
After defeating these gyms, the related items will become available in the Pokemart. Flags
for enabling and disabling most optional mechanics have also been implemented, for both
debug and in-game purposes.

## Ver. 0.4.0

Special sellers in each Pokemart have been completely reworked, and the item table for each
has been overhauled to provide a variety of unique items for the player to use while progressing
through the game. Mega Stones, Z-Crystals, Dynamax Candies and Tera Shards will be made available
in each special shop where other items of the same type are also available (e.g. Sootopolis will 
have Dragonium Z and Tera Dragon Shards). Trainer Hill, Lilycove Department Store, Evergrande 
City and the Battle Frontier all have unique secondary special shops which do not follow the
general pattern of the other special shops.

## Ver. 0.3.1

Removed unnecessary files, modified item prices, fixed issues with mochi seller, 
added special shop vendors with static, randomised contents to each Pokemart. 
Implemented and tested multichoice2, which allows for an easy method for 
implementing multiple choice menus. 

## Ver. 0.3.0

Completed rough spawn tables up to route 120, with recurring patterns for water/fishing
encounter tables and mostly new spawn tables for wild encounters (Original wild encounters
remain available, but with lower spawn rate).

## Ver. 0.2.2

Merged upcoming branch of PokeEmerald-Expanded into the project, which adds support for
several new features including all of the Generation 9 Pokémon (so far), Dynamax, most of
the new items, and more. Resolved several merge conflicts which were caused as a result of
this change.

## Ver. 0.2.1

Updated spawn tables for route 101, 102 and 103 with new wild encounters, as well as water
and fishing encounters where applicable. All (Non-Department Store) PokeMarts have now been
updated to use the same item list, which is dependent on the number of badges the player has.
Modified Pokemarts to have stock dependent on the number of badges the player has earned.

## Ver. 0.2.0

Implemented EV/IV increasing/decreasing items - Some Pokeblock-only berries have been repurposed to increase
or decrease IVs by one, and Zinc/Carbos/etc. have been modified to provide 28 EVs at a time in their respective
stat, requiring only 9 to reach the maximum value (252). Feathers have also been modified to provide 4 of their
respective stats, which can be useful for building more fine-grained EV spreads. EV-reducing berries have also
been modified to reduce stats by 28. Item descriptions have been updated to reflect the new behavior. New TM 
behavior has been tested and verified. A bug was fixed where mom would be placed outside (for the running
shoes encounter), even though this encounter has been removed from the game.

## Ver. 0.1.1

Updated TM behavior based on [this](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage) tutorial, now 
infinitely reusable and cannot be sold / bought more than once. Text references to TMs have now been updated 
to reflect new behavior. Replacing a move with a new move will no longer refresh the PP for the move slot

## Ver. 0.1.0

Implemented [Poryscript](https://github.com/huderlem/poryscript) to build pipeline, converted all pre-existing 
map script.inc files to .pory format, removed running shoes event when returning to Littleroot town and enabled 
running shoes flags by default when exiting the truck, Added National Dex upgrade to initial Birch Pokedex event, 
as well as the battle key items (Mega Ring, Z Power Ring, Dynamax Band), Added follow-up event where these items 
can be recieved instead of they are missed initially (for migrated save files). Modified EXP.Share to use Gen 6+ 
behavior (Key item, affects all party members, can be toggled on or off.)

## Ver. 0.0.6

Implemented additional save space ([tutorial by Hiram Anderson](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code)),
keyboard auto switch ([tutorial by FieryMewtwo](https://github.com/pret/pokeemerald/wiki/Automatically-make-the-keyboard-switch-to-lowercase-after-the-first-character/)), 
early FRLG trading ([tutorial by FieryMewtwo](https://github.com/pret/pokeemerald/wiki/Enable-trade-with-FRLG-without-beating-the-game)), 
sleep mode ([tutorial by voloved](https://github.com/pret/pokeemerald/wiki/Add-Sleep-Mode)), 
mid-battle text skip ([tutorial by Mkol103](https://www.pokecommunity.com/showpost.php?p=10266925)), 
coloured stats by nature ([tutorial by DizzyEgg](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen)),
show EVs / IVs in summary ([tutorial by PokemonCrazy](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77))

## Ver. 0.0.5

Implemented repeated medicine use without re-entering the bag menu
([tutorial by ghoulslash](https://github.com/pret/pokeemerald/wiki/Repeated-Field-Medicine-Use)),
faster text speed ([tutorial by ellabrella](https://www.pokecommunity.com/showpost.php?p=10400198))

## Ver. 0.0.4

Implemented not showing dex entries until getting the Pokedex 
([tutorial by Jaizu](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)),
an error screen for if a flash chip is not present on the cart 
([tutorial by Anon822](https://www.pokecommunity.com/showpost.php?p=10449518)), 
implemented missing text function RESET_FONT 
([tutorial by Flametix](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT)),
fixed surf dismount ground effect bug
([tutorial by ghoulslash](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)), 
fixed camera wave bug 
([tutorial by LOuroboros](https://github.com/pret/pokeemerald/wiki/Keep-the-Camera-from-Making-Waves)), 
implemented better reflections
([tutorial by ghoulslash](https://github.com/pret/pokeemerald/wiki/Reflections))

## Ver. 0.0.3

Implemented EWRAM Data summary screen optimisation ([tutorial by SonikkuA-DatH](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen))

## Ver. 0.0.2

Updated readme with planned features / credits / other information, release build script

## Ver. 0.0.1

Implemented main/dev/debug branching system, modified Birch's intro Pokémon to Hisuian Zorua (Added SPECIES_INTRO #define for modifying both intro sprite/sound at once).

## Ver. 0.0.0
Cloned PokeEmerald Expansion project base image, unmodified source project is stored in branch 'base'
