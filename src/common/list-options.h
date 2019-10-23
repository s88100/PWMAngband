/*
 * File: list-options.h
 * Purpose: Options
 */

/* name  description  normal  server */
OP(none, "", MAX, false, false)
OP(rogue_like_commands, "Use the roguelike command keyset", INTERFACE, false, false)
OP(use_old_target, "Use old target by default", INTERFACE, false, true)
OP(pickup_always, "Always pickup items", INTERFACE, false, true)
OP(pickup_inven, "Always pickup items matching inventory", INTERFACE, true, true)
OP(notify_recharge, "Notify on object recharge", INTERFACE, false, true)
OP(show_flavors, "Show flavors in object descriptions", INTERFACE, false, true)
OP(center_player, "Center map continuously", INTERFACE, false, true)
OP(disturb_near, "Disturb whenever viewable monster moves", INTERFACE, true, true)
OP(show_damage, "Show damage player deals to monsters", INTERFACE, false, true)
OP(view_yellow_light, "Color: Illuminate torchlight in yellow", INTERFACE, false, true)
OP(animate_flicker, "Color: Shimmer multi-colored things", INTERFACE, false, true)
OP(hp_changes_color, "Color: Player color indicates % hit points", INTERFACE, true, true)
OP(purple_uniques, "Color: Show unique monsters in purple", INTERFACE, false, true)
OP(solid_walls, "Show walls as solid blocks", INTERFACE, false, true)
OP(hybrid_walls, "Show walls with shaded background", INTERFACE, false, true)
OP(use_sound, "Use sound", INTERFACE, false, false)
OP(view_orange_light, "Color: Illuminate torchlight in orange", MANGBAND, true, true)
OP(highlight_leader, "Use special color for party leader", MANGBAND, false, true)
OP(disturb_panel, "Disturb whenever map panel changes", MANGBAND, true, true)
OP(auto_accept, "Always say Yes to Yes/No prompts", MANGBAND, false, false)
OP(disturb_icky, "Get out of icky screens when disturbed", MANGBAND, false, true)
OP(active_auto_retaliator, "Active auto-retaliator", MANGBAND, true, true)
OP(pause_after_detect, "Freeze screen after detecting monsters", MANGBAND, true, true)
OP(disturb_bash, "Disturb whenever monsters bash down doors", MANGBAND, true, true)
OP(birth_force_descend, "Force player descent", BIRTH, false, true)
OP(birth_no_recall, "Word of Recall has no effect", BIRTH, false, true)
OP(birth_no_artifacts, "Restrict creation of artifacts", BIRTH, false, true)
OP(birth_feelings, "Show level feelings", BIRTH, true, true)
OP(birth_no_selling, "Increase gold drops but disable selling", BIRTH, true, true)
OP(birth_start_kit, "Start with a kit of useful gear", BIRTH, true, true)
OP(birth_no_stores, "Restrict the use of stores/home", BIRTH, false, true)
OP(birth_no_ghost, "Death is permanent", BIRTH, false, true)
OP(birth_fruit_bat, "Play as a fruit bat", BIRTH, false, true)
