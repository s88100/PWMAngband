/*
 * File: list-mon-spells.h
 * Purpose: List of monster spell flags
 *
 * Fields:
 * name - spell name
 * type - spell type
 * save - type of saving throw
 */

/* name  type  save */
RSF(NONE, 0, 0)
RSF(SHRIEK, RST_ANNOY|RST_INNATE, 0)
RSF(WHIP, RST_BOLT|RST_INNATE, 0)
RSF(SPIT, RST_BOLT|RST_INNATE, 0)
RSF(ARROW_X, RST_BOLT|RST_MISSILE|RST_INNATE, 0)
RSF(ARROW_1, RST_BOLT|RST_MISSILE|RST_INNATE, 0)
RSF(ARROW_2, RST_BOLT|RST_MISSILE|RST_INNATE, 0)
RSF(ARROW_3, RST_BOLT|RST_MISSILE|RST_INNATE, 0)
RSF(ARROW_4, RST_BOLT|RST_MISSILE|RST_INNATE, 0)
RSF(BR_ACID, RST_BREATH|RST_INNATE, 0)
RSF(BR_ELEC, RST_BREATH|RST_INNATE, 0)
RSF(BR_FIRE, RST_BREATH|RST_INNATE, 0)
RSF(BR_COLD, RST_BREATH|RST_INNATE, 0)
RSF(BR_POIS, RST_BREATH|RST_INNATE, 0)
RSF(BR_NETH, RST_BREATH|RST_INNATE, 0)
RSF(BR_LIGHT, RST_BREATH|RST_INNATE, 0)
RSF(BR_DARK, RST_BREATH|RST_INNATE, 0)
RSF(BR_SOUN, RST_BREATH|RST_INNATE, 0)
RSF(BR_CHAO, RST_BREATH|RST_INNATE, 0)
RSF(BR_DISE, RST_BREATH|RST_INNATE, 0)
RSF(BR_NEXU, RST_BREATH|RST_INNATE, 0)
RSF(BR_TIME, RST_BREATH|RST_INNATE, 0)
RSF(BR_INER, RST_BREATH|RST_INNATE, 0)
RSF(BR_GRAV, RST_BREATH|RST_INNATE, 0)
RSF(BR_SHAR, RST_BREATH|RST_INNATE, 0)
RSF(BR_PLAS, RST_BREATH|RST_INNATE, 0)
RSF(BR_WALL, RST_BREATH|RST_INNATE, 0)
RSF(BR_MANA, RST_BREATH|RST_INNATE, 0)
RSF(BR_WATE, RST_BREATH|RST_INNATE, 0)
RSF(BOULDER, RST_BOLT|RST_MISSILE|RST_INNATE, 0)
RSF(BA_ACID, RST_BALL, 0)
RSF(BA_ELEC, RST_BALL, 0)
RSF(BA_FIRE, RST_BALL, 0)
RSF(BA_COLD, RST_BALL, 0)
RSF(BA_POIS, RST_BALL, 0)
RSF(BA_NETH, RST_BALL, 0)
RSF(BA_WATE, RST_BALL, 0)
RSF(BA_MANA, RST_BALL, 0)
RSF(BA_DARK, RST_BALL, 0)
RSF(DRAIN_MANA, RST_ANNOY, 0)
RSF(MIND_BLAST, RST_DIRECT|RST_ANNOY, RSV_SKILL|RSV_UNDEAD)
RSF(BRAIN_SMASH, RST_DIRECT|RST_ANNOY, RSV_SKILL|RSV_UNDEAD)
RSF(CAUSE_1, RST_DIRECT, RSV_SKILL|RSV_UNDEAD)
RSF(CAUSE_2, RST_DIRECT, RSV_SKILL|RSV_UNDEAD)
RSF(CAUSE_3, RST_DIRECT, RSV_SKILL|RSV_UNDEAD)
RSF(CAUSE_4, RST_DIRECT, RSV_SKILL|RSV_UNDEAD)
RSF(BO_ACID, RST_BOLT, 0)
RSF(BO_ELEC, RST_BOLT, 0)
RSF(BO_FIRE, RST_BOLT, 0)
RSF(BO_COLD, RST_BOLT, 0)
RSF(BO_NETH, RST_BOLT, 0)
RSF(BO_WATE, RST_BOLT, 0)
RSF(BO_MANA, RST_BOLT, 0)
RSF(BO_PLAS, RST_BOLT, 0)
RSF(BO_ICEE, RST_BOLT, 0)
RSF(MISSILE, RST_BOLT, 0)
RSF(SCARE, RST_ANNOY, RSV_SKILL|RSV_UNDEAD)
RSF(BLIND, RST_ANNOY, RSV_SKILL|RSV_UNDEAD)
RSF(CONF, RST_ANNOY, RSV_SKILL|RSV_UNDEAD)
RSF(SLOW, RST_ANNOY|RST_HASTE, RSV_SKILL|RSV_UNDEAD)
RSF(HOLD, RST_ANNOY|RST_HASTE, RSV_SKILL|RSV_UNDEAD)
RSF(HASTE, RST_HASTE, 0)
RSF(HEAL, RST_HEAL, 0)
RSF(HEAL_KIN, RST_HEAL_OTHER, 0)
RSF(BLINK, RST_TACTIC|RST_ESCAPE, 0)
RSF(TPORT, RST_ESCAPE, 0)
RSF(TELE_TO, RST_ANNOY, 0)
RSF(TELE_AWAY, RST_ESCAPE, 0)
RSF(TELE_LEVEL, RST_ESCAPE, RSV_SKILL)
RSF(DARKNESS, RST_ANNOY, 0)
RSF(TRAPS, RST_ANNOY, 0)
RSF(FORGET, RST_DIRECT|RST_ANNOY, RSV_SKILL|RSV_UNDEAD)
RSF(ANIM_DEAD, RST_ANNOY|RST_SUMMON, 0)
RSF(SHAPECHANGE, RST_TACTIC, 0)
RSF(S_KIN, RST_SUMMON, 0)
RSF(S_MONSTER, RST_SUMMON, 0)
RSF(S_MONSTERS, RST_SUMMON, 0)
RSF(S_ANIMAL, RST_SUMMON, 0)
RSF(S_SPIDER, RST_SUMMON, 0)
RSF(S_HOUND, RST_SUMMON, 0)
RSF(S_HYDRA, RST_SUMMON, 0)
RSF(S_AINU, RST_SUMMON, 0)
RSF(S_DEMON, RST_SUMMON, 0)
RSF(S_UNDEAD, RST_SUMMON, 0)
RSF(S_DRAGON, RST_SUMMON, 0)
RSF(S_HI_DEMON, RST_SUMMON, 0)
RSF(S_HI_UNDEAD, RST_SUMMON, 0)
RSF(S_HI_DRAGON, RST_SUMMON, 0)
RSF(S_WRAITH, RST_SUMMON, 0)
RSF(S_UNIQUE, RST_SUMMON, 0)
RSF(S_ABOMINATION, RST_SUMMON, 0)
RSF(S_SPIRIT, RST_SUMMON, 0)
