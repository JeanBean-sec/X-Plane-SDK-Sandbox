# XPLM Sandbox 

(C++ & C & Julia & Python & Lua & Ada & Aws....)

This repo contains documentation related to the developement and maintenance of virtual avionics systems via flight simulation interfaces.

Currently in working development

### For now, here is a list of available telnet commands and cli flags for testing with X-Plane.
```
acf <string:acf_path> - ALIAS plane <acf_path>
actor add <string> <string> <int> <float> <float> <float>  - UNDOCUMENTED
actor add <string> <string> <int> <float> <float> <float> <float>  - UNDOCUMENTED
actor show - select an actor and debug it.
actor variant <string> <int>  - UNDOCUMENTED
apt_export <string> - Export all airport data
apt_profile <string:apt_dat_file_path> - Analyze apt.dat data usage
apt_source <apt_id> - Spit out the path to the apt.dat file that this airport came from
atc airline <string> - Set ATC value for airline to prevent the UI requesting it.
atc request <string> - All ATC options don't necessarily fit in the window. Issue an available command regardless of whe
ther it's currently visible or not.
atc request <string> <string> <string> - All ATC options don't necessarily fit in the window. Issue an available command
 regardless of whether it's currently visible or not.
atc request <string> <string> <string> <string> - All ATC options don't necessarily fit in the window. Issue an availabl
e command regardless of whether it's currently visible or not.
atc request <string> <string> <string> <string> <string> - All ATC options don't necessarily fit in the window. Issue an
 available command regardless of whether it's currently visible or not.
atc request <string> <string> <string> <string> <string> <string> - All ATC options don't necessarily fit in the window.
 Issue an available command regardless of whether it's currently visible or not.
atc request <string> <string> <string> <string> <string> <string> <string> - All ATC options don't necessarily fit in th
e window. Issue an available command regardless of whether it's currently visible or not.
atc request <string> <string> <string> <string> <string> <string> <string> <string> - All ATC options don't necessarily
fit in the window. Issue an available command regardless of whether it's currently visible or not.
atc request <string> <string> <string> <string> <string> <string> <string> <string> <string> - All ATC options don't nec
essarily fit in the window. Issue an available command regardless of whether it's currently visible or not.
atc restart approach  - UNDOCUMENTED
atc type <string> <string> - Set ATC values for make and model to prevent the UI requesting them.
atc_end_test - end atc test
atc_test_app_ifr - test an IFR approach
atc_test_app_ifr <apt_id> - test an IFR approach to a specific airport
atc_test_app_ifr <apt_id> <string> - test an IFR approach to a specific airport from a specific fix
atc_test_app_vfr - test a VFR approach
atc_test_app_vfr <apt_id> - test a VFR approach to a specific airport
atc_test_app_vfr <apt_id> <string> - test a VFR approach to a specific airport from a specific fix
autopilot alt - Engage altitude-hold mode on the autopilot
autopilot clear - Turn off the autopilot entirely
autopilot hdg - Engage heading-select mode on the autopilot
autopilot pch - Engage pitch-sync mode on the autopilot
boat edit_wake - edit boat wake params live
boat move - edit boat wake params live
boat wake stats - show boat wake stats
boat_nav line_test - Test linear safety checks for boats
boat_nav point_test - Test point safety checks for boats
boat_nav radial_test <float:meters> - Test radial safety checks for boats
browser_test cef - Run HTML tests in CEF browser
browser_test native - Run HTML tests in native browser
camera dump - Prints the current camera position to the console. You can feed this exact syntax back into the CLI to mov
e the camera to this location in the future.
camera dump_raw - Prints the current camera position to the console. The command sets the equivalent free mode camera, n
ot attached eto the ACF.
camera sequence begin - Prepare to send a list of camera keyframes for replay
camera sequence keyframe <float> v2 <view_type> <float> <float> <float> <float> <float> <float> <float> <float> <float>
<float> - Send an individual camera keyframe for the sequence being constructed
camera sequence play - Execute the camera sequence you previously sent
camera set v2 <view_type> <float> <float> <float> <float> <float> <float> <float> <float> <float> <float> - Instantaneou
sly set the camera position to a given camer_frame_2
camera view_3d_free_cam <float> <float> <float> <float> <float> <float> <float> - Free camera mode (you specify the posi
tion)
camera view_3d_free_cam reset - Free camera mode (default position)
camera view_HUD <float> - HUD view (you specify the position)
camera view_HUD reset - HUD view (default position)
camera view_circle <float> <float> <float> - Circle view (you specify the position)
camera view_circle reset - Circle view (default position)
camera view_fixed_circle <float> <float> <float> - Fixed circle view (you specify the position)
camera view_fixed_circle reset - Fixed circle view (default position)
camera view_linear <float> - Linear movement view (you specify the position)
camera view_linear reset - Linear movement view (default position)
camera view_panel_3d <float> <float> <float> - 3D panel view (you specify the position)
camera view_panel_3d <float> <float> <float> <float> <float> <float> - 3D panel view (you specify the position)
camera view_panel_3d reset - 3D panel view (default position)
camera view_spot <float> - Spot view (you specify the position)
camera view_spot reset - Spot view (default position)
camera view_tail_cam <float> - Tail camera view (you specify the position)
camera view_tail_cam reset - Tail camera view (default position)
check <string> - Checks the checkbox with the specified text if and only if that box was previously un-checked
check_ref <float:longitude> <float:latitude> - Invokes a coordinate system shift as if the aircraft was at the speicfied
 lat/lon location
class AG_block dump  - UNDOCUMENTED
class AG_point dump  - UNDOCUMENTED
class AG_string dump  - UNDOCUMENTED
class ATCVoice dump  - UNDOCUMENTED
class OBJ_particle_system_def dump  - UNDOCUMENTED
class REN_beach_def dump  - UNDOCUMENTED
class REN_draped_poly_def dump  - UNDOCUMENTED
class REN_facade dump  - UNDOCUMENTED
class REN_forest_def dump  - UNDOCUMENTED
class REN_line_paint_def dump  - UNDOCUMENTED
class REN_obj_string_def dump  - UNDOCUMENTED
class RoadDef_t dump  - UNDOCUMENTED
class UTL_zip_archive dump  - UNDOCUMENTED
class aifl_one_class dump  - UNDOCUMENTED
class soun_bank dump  - UNDOCUMENTED
class weapon_def dump  - UNDOCUMENTED
click <string> - Clicks the UI element with the specified text; if no UI element matches, we fall back to searching the
help (a.k.a. hover/mouseover/popover) text
click at <int> <int> for <float> - Clicks the UI at a given location for a given amount of time.
click_if_exists <string> - Clicks the UI element with the specified text if it exists; if no UI element matches, we fall
 back to searching the help (a.k.a. hover/mouseover/popover) text. If we then still don't find the widget, no error is r
aised
clouds apt <string:airport_id> <float> <float> <float> <float>  - UNDOCUMENTED
clouds checkerboard  - UNDOCUMENTED
clouds cirrus <string> - load cirrus
clouds noise alias - alias hi with lo noise
clouds noise hi worley <int:octaves> <float:amp> - regenerate cloud noise as real worley noise
clouds noise lo worley <int:octaves> <float:amp> - regenerate cloud noise as real worley noise
clouds noise perlin <int> <float> - regenerate cloud noise as perlin noise
clouds wait done - Wait for clouds to be done
command <cmnd> - Execute the specified command instantly
command <cmnd> <float:duration> - Execute the specified command for the specified duration, in seconds
copy xdd - Reads your digital download key from disk and saves the text to the clipboard
count_n_kill_boats - kill boats and return how many were killed
crash_it <int> - Crash the sim: 0 = main thread, 1 = worker thread
datetime get - Get date and time ready to use with 'datetime set'
datetime set <int> <int> - Set day of year (0-364) and time (zulu_time)
debug_menu  - UNDOCUMENTED
debug_metar <string:id>  - UNDOCUMENTED
double_click <string> - Double-clicks the UI element with the specified text; if no UI element matches, we fall back to
searching the help (a.k.a. hover/mouseover/popover) text
dr stutter enable <int> - Enables (1) or disables (0) the stutter detection and compensation (default 1/on)
dr stutter log <int> - Enables (1) or disables (0) logging detected stutters (as warnings, with timing info)
dr stutter set max <float> - Sets the maximum stutter detection threshold in seconds (default 0.4, max 1.0)
dr stutter set min <float> - Sets the minimum stutter detection threshold in seconds (default 0.008, min 0.001)
dr stutter set miss_time <float> - Sets the rampup time at mission startup where stutter detection in NOT done, in secon
ds (default 10.0, min 1.0, max 60.0)
dr stutter status - Shows all values for the stutter detection system
dref get <dref> - Print the value of a dataref to CLI output
dref set <dref> <float:value> - Set a dataref to a new value
dump buttons - Prints the button text and help text (where applicable) of all buttons currently in the widget hierarchy
dump text_boxes - Prints the IDs of all text boxes currently in the widget hierarchy
echo <string>  - UNDOCUMENTED
end - End a test or subtest
entity show - select an entity and debug it.
expect <dref> <string:relation> <string:value> - Require a dataref to have a given value range
expect <dref> <string:relation> <string:value> <float::epsilon> - Require a dataref to have a given value range within a
n error margin
expect <dref> <string:relation> <string:value> <float:epsilon> by <float:time> - Require a dataref to have a given value
 range within an error margin by a time deadline
expect <dref> <string:relation> <string:value> <float:epsilon> for <float:time> - Require a dataref to have a given valu
e range within an error margin for a time period
expect <dref> <string:relation> <string:value> by <float:time> - Require a dataref to have a given value range by a time
 deadline
expect <dref> <string:relation> <string:value> for <float:time> - Require a dataref to have a given value range for a ti
me period
expect <dref> between <string> and <string> - Require a dataref to lie between two values
expect airport <string> - Exits if your aircraft is not at the airport with the flt[p0].indi.cated ID
expect assigned runway <string> - Check that the aircraft has been assigned to a specific runway or "none" for either ta
keoff or landing.
expect assigned runway <string> by <float> - Check that the aircraft has been assigned to a specific runway or "none" fo
r either takeoff or landing within a given number of seconds.
expect atc message <string> - Require specific text in the ATC message log
expect atc message <string> absent for <float> - Require specific text to not appear in the ATC message log for specific
 number of seconds
expect atc message <string> absent since <float> - Require specific text to not appear in the ATC message log in the pre
vious number of seconds
expect atc message <string> by <float> - Require specific text in the ATC message log within specific number of seconds
expect atc owner <string> <string> - Check that p0 has a specific controller ID and type as the current owner
expect atc request <string> - Expect a specified top-level ATC command to be available
expect atc request <string> by <float> - Expect a specified top-level ATC command to be available within a specific numb
er of seconds
expect atc request <string> missing - Expect a specified top-level ATC command to NOT be available
expect atc taxi  - UNDOCUMENTED
expect metar_file <string> <int> - Expect a METAR file to contain at least a specific number of readable records
expect new atc message <string> by <float> - Require a new instance of a specific text in the ATC message log within spe
cific number of seconds
expect runway <string> - Exits if your aircraft is not at the flt[p0].indi.cated runway (e.g., 10, 26L, etc.)
expect text <string> - Shorthand for 'expect text visible'
expect text <string> disabled - Fails if the specified text is not found as a disabled widget in the widget hierarchy
expect text <string> disabled in <string> - Fails if the specified text is not found as a disabled widget in a named wid
get or controller
expect text <string> enabled - Fails if the specified text is not found as an enabled widget in the widget hierarchy
expect text <string> enabled in <string> - Fails if the specified text is not found as an enabled widget in a named widg
et or controller
expect text <string> hidden - Succeeds if the specified text is not found in the widget hierarchy
expect text <string> hidden in <string> - Succeeds if the specified text is not found in the named widget or controller
expect text <string> in <string> - Shorthand for 'expect text visible in <widget>'
expect text <string> visible - Fails if the specified text is not found in the widget hierarchy
expect text <string> visible in <string> - Fails if the specified text is not found in a named widget or controller
expect ui <string> - ALIAS expect ui <string> visible
expect ui <string> hidden - Succeeds if there is no visible widget controller in the hierarchy with the specified debug
name
expect ui <string> popped_out - Succeeds if there is a popout window that has a widget controller with the specified deb
ug name
expect ui <string> visible - Fails if there is no visible widget controller with the specified debug name
expect valid_runways - Run a sanity check on apt.dat and parsing/creation code
expect window atc hidden - Exits if the specified window is not hidden
expect window atc visible - Exits if the specified window is not visible
expect window autopilot_constants hidden - Exits if the specified window is not hidden
expect window autopilot_constants visible - Exits if the specified window is not visible
expect window data_output_graph hidden - Exits if the specified window is not hidden
expect window data_output_graph visible - Exits if the specified window is not visible
expect window demo_area hidden - Exits if the specified window is not hidden
expect window demo_area visible - Exits if the specified window is not visible
expect window exvis_standby hidden - Exits if the specified window is not hidden
expect window exvis_standby visible - Exits if the specified window is not visible
expect window fps_test_recorder hidden - Exits if the specified window is not hidden
expect window fps_test_recorder visible - Exits if the specified window is not visible
expect window ground_handling hidden - Exits if the specified window is not hidden
expect window ground_handling visible - Exits if the specified window is not visible
expect window ios hidden - Exits if the specified window is not hidden
expect window ios visible - Exits if the specified window is not visible
expect window key_shortcuts hidden - Exits if the specified window is not hidden
expect window key_shortcuts visible - Exits if the specified window is not visible
expect window log_viewer hidden - Exits if the specified window is not hidden
expect window log_viewer visible - Exits if the specified window is not visible
expect window logbook hidden - Exits if the specified window is not hidden
expect window logbook visible - Exits if the specified window is not visible
expect window map hidden - Exits if the specified window is not hidden
expect window map visible - Exits if the specified window is not visible
expect window menu_bar hidden - Exits if the specified window is not hidden
expect window menu_bar visible - Exits if the specified window is not visible
expect window microprofiler hidden - Exits if the specified window is not hidden
expect window microprofiler visible - Exits if the specified window is not visible
expect window network_debug hidden - Exits if the specified window is not hidden
expect window network_debug visible - Exits if the specified window is not visible
expect window particle_browser hidden - Exits if the specified window is not hidden
expect window particle_browser visible - Exits if the specified window is not visible
expect window plugin_admin hidden - Exits if the specified window is not hidden
expect window plugin_admin visible - Exits if the specified window is not visible
expect window projection_params hidden - Exits if the specified window is not hidden
expect window projection_params visible - Exits if the specified window is not visible
expect window qtim_configuration hidden - Exits if the specified window is not hidden
expect window qtim_configuration visible - Exits if the specified window is not visible
expect window rain_inspector hidden - Exits if the specified window is not hidden
expect window rain_inspector visible - Exits if the specified window is not visible
expect window replay_controls hidden - Exits if the specified window is not hidden
expect window replay_controls visible - Exits if the specified window is not visible
expect window save_flight hidden - Exits if the specified window is not hidden
expect window save_flight visible - Exits if the specified window is not visible
expect window screenshot_controls hidden - Exits if the specified window is not hidden
expect window screenshot_controls visible - Exits if the specified window is not visible
expect window settings hidden - Exits if the specified window is not hidden
expect window settings visible - Exits if the specified window is not visible
expect window texture_browser hidden - Exits if the specified window is not hidden
expect window texture_browser visible - Exits if the specified window is not visible
expect window v11_ui hidden - Exits if the specified window is not hidden
expect window v11_ui visible - Exits if the specified window is not visible
expect window vram_profiler hidden - Exits if the specified window is not hidden
expect window vram_profiler visible - Exits if the specified window is not visible
expect window weather_map hidden - Exits if the specified window is not hidden
expect window weather_map visible - Exits if the specified window is not visible
fail <dref> - Sets a failure dataref to failed now
file <string> <apt_id> - File a flightplan, vfr/ifr, to the given airport.
file <string> <apt_id> <int> - File a flightplan, vfr/ifr, to the given airport at a specific altitude (ft)
file <string> <apt_id> <int> <string> - File a flightplan, vfr/ifr, to the given airport at a specific altitude (ft), us
ing a specific route
fix <dref> - sets a failure dataref to working
flow <apt_id> disable - Disable all flows at a given airport by making both wind and time rules impossible.
flow <apt_id> disable <string> - Disable all flows at a given airport using either 'wind' or 'time', from the last param
eter.
flt_data add <dref> <float> <float> - add a tracked test dataref.
flt_data check - check whether tracked test datarefs are in legal range.
flt_data clear - clear all currently tracked test datarefs.
flt_data close - Close data output CSV file
flt_data dump - dump state of tracked test datarefs.
flt_data label <string> - Mark a label in the CSV data file.
flt_data open <string> <string> - Open CSV file for saving.
flt_data start - begin real-time tracking of tracked test datarefs
flt_data stop - stop real-time tracking of tracked test datarefs
fm_test add <string> <int> <string> - add test case to fm tester
fm_test run <int>  - UNDOCUMENTED
frame dag dump  - UNDOCUMENTED
frame dag rebuild  - UNDOCUMENTED
freeze - Freeze the flight model
fx test <string> <string>  - UNDOCUMENTED
gfx aftermath  - UNDOCUMENTED
gfx defragment forever  - UNDOCUMENTED
gfx defragment pause  - UNDOCUMENTED
gfx defragment run  - UNDOCUMENTED
gfx defragment unpause  - UNDOCUMENTED
gfx memory allocate <string> <int>  - UNDOCUMENTED
gfx memory dump  - UNDOCUMENTED
gfx memory explode <int>  - UNDOCUMENTED
gfx memory info  - UNDOCUMENTED
gfx memory limit <string>  - UNDOCUMENTED
gpu toggle - Toggle ground power request
gui pick window  - UNDOCUMENTED
gui show hierarchy  - UNDOCUMENTED
gui widget edit <string>  - UNDOCUMENTED
heading <int:heading> - Sets the heading of your aircraft
help - Prints a list of all registered commands
help <string> - Prints a list of all registered commands matching <string>
label <string> - Applies a label in the output to all future expect statements for the remainder of the (sub)test or unt
il the next label
label <string> <float> - Applies a label in the output, and also shows a big text version of the label onscreen for the
number of seconds you specify
loc <apt_id> - ALIAS for move <apt_id>
loc lle <float:latitude> <float:longitude> <float:elevation_m> - ALIAS move lle
mash keyboard - Simulates typing a random string of ASCII characters, between 4 and 50 characters long (inclusive)
mash keyboard <int> - Simulates typing a random string of a fixed number of ASCII characters
mempool state  - UNDOCUMENTED
microprofile pause - microprofile pause
mm create window <mode> <usage> <monitor_index> <int> <int> <int> <int> - Creates the specified window. The final 4 ints
 are, in order, bottom x, bottom y, top x, top y coordinates of the window.
mm list windows - Prints a list of all the windows we know about (on any monitor).
mm set window <window_index> mode <mode> - Change the mode (full screen, windowed, etc.) of an existing window
mm set window <window_index> position <int> <int> <int> <int> - Change the positioning or an existing window. The ints a
re, in order, bottom x, bottom y, top x, top y coordinates of the window.
mm set window <window_index> usage <usage> - Change the usage (visuals, IOS, etc.) of an existing window
model ai <int> <string> - Changes the model for an existing AI aircraft. The AI will be reinitialised.
monitor end - Finish framerate monitoring and print the average framerate since the last `monitor fps` call.
monitor fps - Begin monitoring the framerate; use `monitor end` to print the average framerate over the intervening time
.
monitor fps <string> - Begin monitoring the framerate, associating a specific label with this framerate test.
move <apt_id> - Moves your aircraft to the airport with the specified airport ID.
move <apt_id> named_ramp <string> - Moves your aircraft to the airport with the specified airport ID, to the ramp with t
he specified name.
move <apt_id> ramp <int> - Moves your aircraft to the airport with the specified airport ID, to the ramp at the specifie
d index.
move ai <int> <string> <string> - Moves an existing AI aircraft to the airport with the specified airport ID, with inten
t to either 'arrive' or 'depart'.
move lle <float:latitude> <float:longitude> <float:elevation_m> <float:heading_true> - Moves your aircraft to the specif
ied lat/lon/elevation (in meters above mean sea level)
move lle <float:latitude> <float:longitude> <float:elevation_m> <float:heading_true> <float:speed> <float:pitch> - Moves
 your aircraft to the specified lat/lon/elevation (in meters above mean sea level)
obj dump all - Print all loaded OBJs.
obj dump path <string> - Dump a specific object to the log.
obj info <string>  - UNDOCUMENTED
paging info - Get info for all paging decisions
paging reset res  - UNDOCUMENTED
paging set res <int>  - UNDOCUMENTED
plane <string:acf_path> - Loads the aircraft at the specified path. Also accepts a couple shorthands ('c172' and '777').
pop_out <string> - Pops out the specified window, if supported
pref atc_go_minimal <int> - Change the delay before the ATC window goes to minimal mode
pref start_running false - Change the sim setting to start the aircraft cold & dark
pref start_running true - Change the sim setting to start the aircraft with its engines running
press backspace - Simulates pressing the backspace key/shortcut
press backspace <int> - Simulates pressing the backspace key/shortcut a number of times
press copy - Simulates pressing the copy key/shortcut
press copy <int> - Simulates pressing the copy key/shortcut a number of times
press cut - Simulates pressing the cut key/shortcut
press cut <int> - Simulates pressing the cut key/shortcut a number of times
press down - Simulates pressing the down key/shortcut
press down <int> - Simulates pressing the down key/shortcut a number of times
press enter - Simulates pressing the enter key/shortcut
press enter <int> - Simulates pressing the enter key/shortcut a number of times
press escape - Simulates pressing the escape key/shortcut
press escape <int> - Simulates pressing the escape key/shortcut a number of times
press left - Simulates pressing the left key/shortcut
press left <int> - Simulates pressing the left key/shortcut a number of times
press paste - Simulates pressing the paste key/shortcut
press paste <int> - Simulates pressing the paste key/shortcut a number of times
press return - Simulates pressing the return key/shortcut
press return <int> - Simulates pressing the return key/shortcut a number of times
press right - Simulates pressing the right key/shortcut
press right <int> - Simulates pressing the right key/shortcut a number of times
press select_all - Simulates pressing the select_all key/shortcut
press select_all <int> - Simulates pressing the select_all key/shortcut a number of times
press tab - Simulates pressing the tab key/shortcut
press tab <int> - Simulates pressing the tab key/shortcut a number of times
press up - Simulates pressing the up key/shortcut
press up <int> - Simulates pressing the up key/shortcut a number of times
pushback left - Push-back for airliners: Nose 90 left.
pushback right - Push-back for airliners: Nose 90 right.
pushback stop - Push-back for airliners: Stop and let go.
pushback straight - Push-back for airliners: Straight back.
quit - Exit the app
rebuild rain apply noise <float> - rebuild rain noise tex
ruler - measure things on screen
rwx_test <int:day> <int:time> <int:epoch> <int:weather_seed> <int:time_seed> - Test a specific real weather scenario
scatter phase shanks <float> - set scattering phase function to Cornette-Shanks approximation
scatter phase table - use table-based phase function
scatter turbidity <float> <float> <float> <float> <float> <float> <float> - set scattering turbidity
screenshot - ALIAS screenshot <filename>
screenshot <string:file_path> - Take a screenshot and save it with the filename specified (no file extension needed)
script <string>  - UNDOCUMENTED
seed_ssr - Seed the SSR history buffer with a given image and set it as the glass decorator
select xdd_text_box - Clicks the X-Plane digital download key entry field onscreen
service plane - Service the airplane with ground trucks.
set <dref> <string> - Sets the dataref to the specified value - use dref set
set <dref> to <string> - Sets the dataref to the specified value - use dref set
set_output_file <string>  - UNDOCUMENTED
set_sun_time <string> <float> - Set the sun to a certain angle in the AM or PM
set_zulu_time_step <float> <float> - Set the rate that zulu time will advance for a number of sim-hours.
settings flush - apply new settings
settings get <string> - get current setting value
settings set <string> <int> - change setting to new value
shader reload acf_map_icon - Reload shader acf_map_icon from disk
shader reload airport_raster - Reload shader airport_raster from disk
shader reload astronomical - Reload shader astronomical from disk
shader reload background_blur - Reload shader background_blur from disk
shader reload blit - Reload shader blit from disk
shader reload bloom - Reload shader bloom from disk
shader reload cacao - Reload shader cacao from disk
shader reload cloud_categorize - Reload shader cloud_categorize from disk
shader reload cloud_map - Reload shader cloud_map from disk
shader reload cloud_minify - Reload shader cloud_minify from disk
shader reload cloud_precipitation - Reload shader cloud_precipitation from disk
shader reload cloud_render_compute - Reload shader cloud_render_compute from disk
shader reload cloud_render_raster - Reload shader cloud_render_raster from disk
shader reload cloud_shadows - Reload shader cloud_shadows from disk
shader reload cloud_update - Reload shader cloud_update from disk
shader reload cloud_upscale - Reload shader cloud_upscale from disk
shader reload compute_fft - Reload shader compute_fft from disk
shader reload csm_resolve - Reload shader csm_resolve from disk
shader reload cube_filter_compute - Reload shader cube_filter_compute from disk
shader reload cube_filter_raster - Reload shader cube_filter_raster from disk
shader reload debug - Reload shader debug from disk
shader reload deferred_gbuf - Reload shader deferred_gbuf from disk
shader reload depth_of_field - Reload shader depth_of_field from disk
shader reload depth_resolve - Reload shader depth_resolve from disk
shader reload dome - Reload shader dome from disk
shader reload exposure_fusion - Reload shader exposure_fusion from disk
shader reload fake_terrain - Reload shader fake_terrain from disk
shader reload font - Reload shader font from disk
shader reload fsr - Reload shader fsr from disk
shader reload ground_lights - Reload shader ground_lights from disk
shader reload gstack - Reload shader gstack from disk
shader reload hdr - Reload shader hdr from disk
shader reload histo_debug - Reload shader histo_debug from disk
shader reload in_place_blur - Reload shader in_place_blur from disk
shader reload legacy_depth - Reload shader legacy_depth from disk
shader reload legacy_flat - Reload shader legacy_flat from disk
shader reload light - Reload shader light from disk
shader reload light_tile - Reload shader light_tile from disk
shader reload light_transform - Reload shader light_transform from disk
shader reload light_vis - Reload shader light_vis from disk
shader reload line3d - Reload shader line3d from disk
shader reload lumi_histo - Reload shader lumi_histo from disk
shader reload manip3d - Reload shader manip3d from disk
shader reload minify - Reload shader minify from disk
shader reload msaa_categorize - Reload shader msaa_categorize from disk
shader reload ocean_bake_textures - Reload shader ocean_bake_textures from disk
shader reload ocean_mesh_bake - Reload shader ocean_mesh_bake from disk
shader reload ocean_mesh_data - Reload shader ocean_mesh_data from disk
shader reload ocean_meta_data - Reload shader ocean_meta_data from disk
shader reload ocean_readback - Reload shader ocean_readback from disk
shader reload ocean_shading - Reload shader ocean_shading from disk
shader reload ocean_spectrum - Reload shader ocean_spectrum from disk
shader reload ocean_variance - Reload shader ocean_variance from disk
shader reload particle - Reload shader particle from disk
shader reload planet - Reload shader planet from disk
shader reload profile_view - Reload shader profile_view from disk
shader reload rain - Reload shader rain from disk
shader reload rain_draw - Reload shader rain_draw from disk
shader reload rain_droplets_compute - Reload shader rain_droplets_compute from disk
shader reload rain_droplets_wipers - Reload shader rain_droplets_wipers from disk
shader reload rain_forces - Reload shader rain_forces from disk
shader reload rain_forces_visualize - Reload shader rain_forces_visualize from disk
shader reload rain_ice_accumulation - Reload shader rain_ice_accumulation from disk
shader reload rain_normals - Reload shader rain_normals from disk
shader reload rain_surface - Reload shader rain_surface from disk
shader reload rain_visualize - Reload shader rain_visualize from disk
shader reload resolve - Reload shader resolve from disk
shader reload ripple - Reload shader ripple from disk
shader reload scatter_compute_multi - Reload shader scatter_compute_multi from disk
shader reload scatter_compute_scattering - Reload shader scatter_compute_scattering from disk
shader reload scatter_compute_skydome - Reload shader scatter_compute_skydome from disk
shader reload scatter_compute_t - Reload shader scatter_compute_t from disk
shader reload scatter_render_atmosphere - Reload shader scatter_render_atmosphere from disk
shader reload sectional2 - Reload shader sectional2 from disk
shader reload shadow_rect - Reload shader shadow_rect from disk
shader reload single_pass_blur - Reload shader single_pass_blur from disk
shader reload ssr_deferred - Reload shader ssr_deferred from disk
shader reload ssr_mesh - Reload shader ssr_mesh from disk
shader reload svt - Reload shader svt from disk
shader reload tchotchke - Reload shader tchotchke from disk
shader reload terrain - Reload shader terrain from disk
shader reload vegetation_cull - Reload shader vegetation_cull from disk
shader reload vegetation_data - Reload shader vegetation_data from disk
shader reload volumetric_apply - Reload shader volumetric_apply from disk
shader reload volumetric_fog - Reload shader volumetric_fog from disk
shader reload weather_apply_compute - Reload shader weather_apply_compute from disk
shader reload weather_apply_raster - Reload shader weather_apply_raster from disk
shader reload z_minmax - Reload shader z_minmax from disk
shader_module reload all - Reload all pixel shaders.
shader_module stats - Dump shader module stats.
show atc_layout <string> - show debug diagram of taxiroutes for an ATC cab.
show render_passes - show all render_pass objects registered to the window mgr.
show terrain_types - Show terrain types under probe.
sim rate <float> - Set sim rate <positive number>
speed <float> knots - Set the aircraft's current speed in knots.
speed <float> msec - Set the aircraft's current speed in meters per second.
start acf <string:acf_path> <apt_id> - ALIAS for start plane
start new flight <string> - Start a new flight, the string argument is a path to the init json file.
start new flight <string> <string> - Start a new flight, the string argument is a path to the init json file. The second
 argument is the expected return value.
start plane <string:acf_path> <apt_id> - Specify the aircraft type and an airport ID.
start plane <string:acf_path> <apt_id> <init_flt_enum> - Like the plane command, but allows you to specify the start type, too. Valid start types include: loc_specify_lle, loc_ram (ramp), loc_tak (takeoff on runway), loc_vfr (short approach), loc_ifr (long approach)
start plane <string:acf_path> <apt_id> <init_flt_enum> <string:ramp_or_runway> - Like the plane command, but allows you to specify the start type and runway, too. Valid start type is loc_tak (takeoff on runway).
stat <string> - Prints an art control to the output pipe
stat <string> <UTL_stat_type> - Prints a UTL_stat to the output pipe at the appropriate time for its type
stat set <string> <float> - Sets an art control to the given value
subtest <string> - Start a subtest with a test
sun_dial - measure angle to sun
taxi_test <string> <string> <float> - Test taxi <lons> <lats> <width>
terrain_shader dump all - Print all loaded terrain shaders.
terrain_shader profile all - profile pipeline use of all materials
test <string> - Start a 'test' block
test_yter <float> <float> - test yer probing
thaw - Un-freeze the flight model
time <string> - Set the time to [day|sunset|evening|night] or HH24:MI
timing on - Enables timing of CLI commands
tman dump - Print all tman textures and VRAM.
tman requeue - Force reload of all pageable textures.
type <string> - Simulates typing the indicated text, one keypress every other frame
uncheck <string> - Un-checks the checkbox with the specified text if and only if that box was previously checked
update current flight <string> - Update the current flight, the string argument is a path to the init json file.
update current flight <string> <string> - Update the current flight, the string argument is a path to the init json file. The second argument is the expected return value.
video_recording start - Start a video recording with the default filename
video_recording start <string> - Start a video recording with the specified filename
video_recording stop - Stop a previously started video recording
wait <float:seconds> - Wait a number of seconds real-time, ignoring sim rate
wait <float:seconds> sim_time - Wait a number of seconds of sim-time
wait atc filed <float> - Wait for p0 to file a flightplan for a number of seconds
wait atc segment <string> <float> - Wait for p0 to be on a specific ATC segment type for a number of seconds
wait atc segment <string> <string> <float> - Wait for p0 to be on a specific ATC segment type and subtype for a number of seconds
wait atc status <string> <float> - Wait for p0 to reach a specific status for a number of seconds
wait atc veczone <string> <float> - Wait for p0 to be in a specific ATC vector zone for a number of seconds
wait flight_started <float> - Waits the specified number of seconds until a flight is loaded
wait radio_clear <float:freq> <float:seconds> - Waits the specified number of seconds until the radio frequency is not transmitting
wait radio_readback_clear <float:freq> <float:seconds> - Waits the specified number of seconds until there is no outstanding readback
wait radio_response_clear <float:freq> <float:seconds> - Waits the specified number of seconds until the pilot's message and ATC's response are complete
wait text <string> - Waits indefinitely for the given text to exist in the widget hierarchy
wait text <string> <float> - Waits up to the specified amount of time (in seconds) for the given text to exist in the wi
dget hierarchy
wait ui <string> - Waits indefinitely for a screen with the given debug name to exist in the widget hierarchy
wait ui <string> <float> - Waits up to the specified amount of time (in seconds) for a screen with the given debug name to exist in the widget hierarchy
wait wxr tick - Wait until the next real-weather tick, currently every 60 seconds
weather dump - Prints the current UI weather to CLI.
weather metar <string:metar>  - UNDOCUMENTED
weather point <float:latitude> <float:longitude> <float:elevation_mtr> <float:radius_nm> <string:metar> - Set point weather at <lat> <long> <ele_m> <radius_nm>, using METAR <string>. METAR location and time should not be given.
weather point <float:radius_nm> <string:metar> - Set point weather with <radius_nm>, using METAR <string>. METAR time is ignored.
weather point clear - Clear all point weather set from the CLI
weather point clear <apt_id> - Clear point weather for <apt_id> set from the CLI
weather point clear <float:latitude> <float:longitude> - Clear point weather at <lat> <long> set from the CLI
weather seed get - Prints the current weather randomization seed value to CLI
weather seed set <float> - Sets the weather randomization seed to a fixed value
weather set_def <string> - Sets the UI weather to match a string made by weather dump
weather wxr_IFR_cat_I - Set the weather to wxr_IFR_cat_I
weather wxr_IFR_cat_I visibility <float> - Set the weather to wxr_IFR_cat_I with customized visibility.
weather wxr_IFR_non_prec - Set the weather to wxr_IFR_non_prec
weather wxr_IFR_non_prec visibility <float> - Set the weather to wxr_IFR_non_prec with customized visibility.
weather wxr_MVFR_overcast - Set the weather to wxr_MVFR_overcast
weather wxr_MVFR_overcast visibility <float> - Set the weather to wxr_MVFR_overcast with customized visibility.
weather wxr_VFR_broken - Set the weather to wxr_VFR_broken
weather wxr_VFR_broken visibility <float> - Set the weather to wxr_VFR_broken with customized visibility.
weather wxr_VFR_cirrus - Set the weather to wxr_VFR_cirrus
weather wxr_VFR_cirrus visibility <float> - Set the weather to wxr_VFR_cirrus with customized visibility.
weather wxr_VFR_scattered - Set the weather to wxr_VFR_scattered
weather wxr_VFR_scattered visibility <float> - Set the weather to wxr_VFR_scattered with customized visibility.
weather wxr_clear - Set the weather to wxr_clear
weather wxr_clear visibility <float> - Set the weather to wxr_clear with customized visibility.
weather wxr_convective - Set the weather to wxr_convective
weather wxr_convective visibility <float> - Set the weather to wxr_convective with customized visibility.
weather wxr_large_cell - Set the weather to wxr_large_cell
weather wxr_large_cell visibility <float> - Set the weather to wxr_large_cell with customized visibility.
weather_seed <int:weather_seed> - Set a specific random seed and regenerate weather.
wiggle replay slider <int> - Monkey test with the replay slider
wind <apt_id> <float> <float> - Change the wind at a specific airport to come from a specific direction and speed.
wmgr force rebuild <int> - Re-build window resources for consecutive frames
wxr fetch acf - show weather column at ACF
```


```
--accurate_runways
--add_server
--aftermath
--allow_bandicam
--allow_gamepp
--allow_reshade
--allow_rosetta
--allow_rtss
--allow_smooth_motion
--c
--cef_log_severity
--check_global_airports
--check_stutters
--check_unlocked_rwx
--cmnds
--controller_angle
--cyc_every_frame
--d3d11_vr
--day_of_year
--debug_d3d11
--debug_gl
--debug_license_mgr
--debug_menu
--device
--device_budget
--disable_net_sync
--disable_networking
--dont_skip_tests
--dref
--drm_testing
--dump_airports
--dump_art_controls
--dump_init
--en_
--event_trace
--extend_p0_test_flights
--fake_vr
--female
--first_sim_run
--flag
--fm_per_frame
--fmod_live_update
--fmod_radio_use_device
--fmod_use_device
--force
--force_run
--force_vr
--fps_test
--fps_test_pics
--full
--full_all
--gdpr
--gdpr_testing
--gfx_agp_infinite_budget
--gfx_agp_infinite_transfers
--gfx_break_on_validation_error
--gfx_bridge_fail_on_error
--gfx_bypass_driver
--gfx_descriptor_buffers
--gfx_dsf_in_vram
--gfx_enable_fp16
--gfx_external_gpu
--gfx_failure_is_an_option
--gfx_frame_capture
--gfx_frames_in_flight
--gfx_log_devices
--gfx_no_%s
--gfx_no_aftermath
--gfx_no_async_compute
--gfx_no_defragment
--gfx_no_managed_buffers
--gfx_no_pager
--gfx_no_rebar
--gfx_no_transfer
--gfx_obj_in_vram
--gfx_printf
--gfx_rebar
--gfx_reconstruct
--gfx_screw_the_budget
--gfx_validation
--gfx_want_sparse_memory
--go_to_apt
--grow
--heavy_net_logging
--help
--i
--identity_url
--ignore_custom_navdata
--ignore_l3_cache
--ignore_plugin_blacklist
--ignore_unlocked_rwx
--initial
--install_name
--install_numeric
--lang
--limited_glsl
--load_acf
--load_apt
--load_llah
--load_smo
--load_ui_only
--lock_fr
--lock_main_thread
--log_frame_dag
--make_previews
--missing_strings
--monitor_bounds
--native_vr
--never_flatten
--new_flight_json
--no
--no_aniso_filtering
--no_autovary
--no_callout
--no_check_stutters
--no_crash_reporter
--no_debug_menu
--no_fbos
--no_fshaders
--no_glsl
--no_hw_mipmap
--no_joysticks
--no_known_installs
--no_lit_terrain
--no_pbos
--no_pixel_counters
--no_prefs
--no_save_prefs
--no_shader_cache
--no_shadercache
--no_sound
--no_sprites
--no_threaded_ogl
--no_timer
--no_vbos
--no_vshaders
--no_web_server
--no_zink
--num_workers
--oculus
--open_xr
--override_ipd
--pfx_domains
--pref
--prefs
--q
--qa_script
--ren
--report_crash
--require_fps
--run
--safe_mode
--script
--send_report
--server
--server_clone
--show_unused_lighting_slots
--skip_pre_warm
--staging
--start_running
--steam_vr
--stereo_cross_eyed
--telemetry_exvis
--telemetry_path
--telemetry_timers
--test_differing_sizes
--test_metar
--test_net
--test_rwx
--test_stereo
--test_update
--test_vr
--testing
--tex_res
--time_seed
--towards
--translate_test
--u5
--ui_script
--unlimited_glsl
--use_fbos
--use_fshaders
--use_fullscreen_exclusive
--use_glsl
--use_ip
--use_sprites
--use_vbos
--use_vshaders
--verbose
--version
--version_numeric
--version_semantic
--version_sha
--vsync
--w
--weather_seed
--web_server_port
--window
--wxr_encoded
--zink
--zulu_time
```

# Thank you for exploring this repository.
