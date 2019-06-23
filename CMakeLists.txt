cmake_minimum_required(VERSION 3.12)
project(Dragon_s_Lair)

set(CMAKE_CXX_STANDARD 11)

add_executable(Dragon_s_Lair main.cpp GameCharacter.h Enemy.h Hero.h Ability.h Skill.h Spell.h "Enemy Abilities.h" ShadowMage.cpp ShadowMage.h Boss.h Relic.h SpecificRelic.h GenericRelic.h Event.h Team.h Team.cpp Berserker.cpp Berserker.h Rogue.cpp Rogue.h Cleric.cpp Cleric.h Warrior.cpp Warrior.h HolySimbol.cpp HolySimbol.h SilverGolem.cpp SilverGolem.h Treant.cpp Treant.h ViolinistBard.cpp ViolinistBard.h PlagueDoctor.cpp PlagueDoctor.h Fungus.cpp Fungus.h Slime.cpp Slime.h RagingOrc.cpp RagingOrc.h AutomatedSphere.cpp AutomatedSphere.h FireMage.cpp FireMage.h EtherealAssassin.cpp EtherealAssassin.h WitherDragon.cpp WitherDragon.h TeamBuild.cpp TeamBuild.h Fight.cpp Fight.h Shop.cpp Shop.h Chest.cpp Chest.h PreEventInterface.cpp PreEventInterface.h Dungeon.cpp Dungeon.h GameCharacter.cpp)