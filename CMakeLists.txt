cmake_minimum_required(VERSION 3.12)
project(Dragon_s_Lair)

set(CMAKE_CXX_STANDARD 11)

add_executable(Dragon_s_Lair main.cpp GameCharacter.h Enemy.h Hero.h Ability.h Skill.h Spell.h "Enemy Abilities.h" ShadowMage.cpp ShadowMage.h Boss.h Relic.h SpecificRelic.h GenericRelic.h Event.h Team.h Team.cpp Berserker.cpp Berserker.h Rogue.cpp Rogue.h Cleric.cpp Cleric.h Warrior.cpp Warrior.h HolySimbol.cpp HolySimbol.h SilverGolem.cpp SilverGolem.h Treant.cpp Treant.h ViolinistBard.cpp ViolinistBard.h PlagueDoctor.cpp PlagueDoctor.h Fungus.cpp Fungus.h Slime.cpp Slime.h)