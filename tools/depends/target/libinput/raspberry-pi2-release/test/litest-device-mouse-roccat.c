/*
 * Copyright © 2015 Red Hat, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "config.h"

#include "litest.h"
#include "litest-int.h"

static struct input_id input_id = {
	.bustype = 0x3,
	.vendor = 0x1e7d,
	.product = 0x2e22,
};

static int events[] = {
	EV_REL, REL_X,
	EV_REL, REL_Y,
	EV_REL, REL_WHEEL,
	EV_REL, REL_HWHEEL,
	EV_REL, REL_DIAL,
	EV_KEY, KEY_ESC,
	EV_KEY, KEY_ENTER,
	EV_KEY, KEY_KPMINUS,
	EV_KEY, KEY_KPPLUS,
	EV_KEY, KEY_UP,
	EV_KEY, KEY_LEFT,
	EV_KEY, KEY_RIGHT,
	EV_KEY, KEY_DOWN,
	EV_KEY, KEY_MUTE,
	EV_KEY, KEY_VOLUMEDOWN,
	EV_KEY, KEY_VOLUMEUP,
	EV_KEY, KEY_POWER,
	EV_KEY, KEY_PAUSE,
	EV_KEY, KEY_STOP,
	EV_KEY, KEY_PROPS,
	EV_KEY, KEY_UNDO,
	EV_KEY, KEY_COPY,
	EV_KEY, KEY_OPEN,
	EV_KEY, KEY_PASTE,
	EV_KEY, KEY_FIND,
	EV_KEY, KEY_CUT,
	EV_KEY, KEY_HELP,
	EV_KEY, KEY_MENU,
	EV_KEY, KEY_CALC,
	EV_KEY, KEY_SLEEP,
	EV_KEY, KEY_FILE,
	EV_KEY, KEY_WWW,
	EV_KEY, KEY_COFFEE,
	EV_KEY, KEY_MAIL,
	EV_KEY, KEY_BOOKMARKS,
	EV_KEY, KEY_BACK,
	EV_KEY, KEY_FORWARD,
	EV_KEY, KEY_EJECTCD,
	EV_KEY, KEY_NEXTSONG,
	EV_KEY, KEY_PLAYPAUSE,
	EV_KEY, KEY_PREVIOUSSONG,
	EV_KEY, KEY_STOPCD,
	EV_KEY, KEY_RECORD,
	EV_KEY, KEY_REWIND,
	EV_KEY, KEY_PHONE,
	EV_KEY, KEY_CONFIG,
	EV_KEY, KEY_HOMEPAGE,
	EV_KEY, KEY_REFRESH,
	EV_KEY, KEY_EXIT,
	EV_KEY, KEY_SCROLLUP,
	EV_KEY, KEY_SCROLLDOWN,
	EV_KEY, KEY_NEW,
	EV_KEY, KEY_CLOSE,
	EV_KEY, KEY_PLAY,
	EV_KEY, KEY_FASTFORWARD,
	EV_KEY, KEY_BASSBOOST,
	EV_KEY, KEY_PRINT,
	EV_KEY, KEY_CAMERA,
	EV_KEY, KEY_CHAT,
	EV_KEY, KEY_SEARCH,
	EV_KEY, KEY_FINANCE,
	EV_KEY, KEY_BRIGHTNESSDOWN,
	EV_KEY, KEY_BRIGHTNESSUP,
	EV_KEY, KEY_KBDILLUMTOGGLE,
	EV_KEY, KEY_SAVE,
	EV_KEY, KEY_DOCUMENTS,
	EV_KEY, KEY_UNKNOWN,
	EV_KEY, KEY_VIDEO_NEXT,
	EV_KEY, KEY_BRIGHTNESS_AUTO,
	EV_KEY, BTN_0,
	EV_KEY, BTN_LEFT,
	EV_KEY, BTN_RIGHT,
	EV_KEY, BTN_MIDDLE,
	EV_KEY, BTN_SIDE,
	EV_KEY, BTN_EXTRA,
	EV_KEY, KEY_SELECT,
	EV_KEY, KEY_GOTO,
	EV_KEY, KEY_INFO,
	EV_KEY, KEY_PROGRAM,
	EV_KEY, KEY_PVR,
	EV_KEY, KEY_SUBTITLE,
	EV_KEY, KEY_ZOOM,
	EV_KEY, KEY_KEYBOARD,
	EV_KEY, KEY_PC,
	EV_KEY, KEY_TV,
	EV_KEY, KEY_TV2,
	EV_KEY, KEY_VCR,
	EV_KEY, KEY_VCR2,
	EV_KEY, KEY_SAT,
	EV_KEY, KEY_CD,
	EV_KEY, KEY_TAPE,
	EV_KEY, KEY_TUNER,
	EV_KEY, KEY_PLAYER,
	EV_KEY, KEY_DVD,
	EV_KEY, KEY_AUDIO,
	EV_KEY, KEY_VIDEO,
	EV_KEY, KEY_MEMO,
	EV_KEY, KEY_CALENDAR,
	EV_KEY, KEY_RED,
	EV_KEY, KEY_GREEN,
	EV_KEY, KEY_YELLOW,
	EV_KEY, KEY_BLUE,
	EV_KEY, KEY_CHANNELUP,
	EV_KEY, KEY_CHANNELDOWN,
	EV_KEY, KEY_LAST,
	EV_KEY, KEY_NEXT,
	EV_KEY, KEY_RESTART,
	EV_KEY, KEY_SLOW,
	EV_KEY, KEY_SHUFFLE,
	EV_KEY, KEY_PREVIOUS,
	EV_KEY, KEY_VIDEOPHONE,
	EV_KEY, KEY_GAMES,
	EV_KEY, KEY_ZOOMIN,
	EV_KEY, KEY_ZOOMOUT,
	EV_KEY, KEY_ZOOMRESET,
	EV_KEY, KEY_WORDPROCESSOR,
	EV_KEY, KEY_EDITOR,
	EV_KEY, KEY_SPREADSHEET,
	EV_KEY, KEY_GRAPHICSEDITOR,
	EV_KEY, KEY_PRESENTATION,
	EV_KEY, KEY_DATABASE,
	EV_KEY, KEY_NEWS,
	EV_KEY, KEY_VOICEMAIL,
	EV_KEY, KEY_ADDRESSBOOK,
	EV_KEY, KEY_MESSENGER,
	EV_KEY, KEY_DISPLAYTOGGLE,
	EV_KEY, KEY_SPELLCHECK,
	EV_KEY, KEY_LOGOFF,
	EV_KEY, KEY_MEDIA_REPEAT,
	EV_KEY, KEY_IMAGES,
	EV_KEY, KEY_BUTTONCONFIG,
	EV_KEY, KEY_TASKMANAGER,
	EV_KEY, KEY_JOURNAL,
	EV_KEY, KEY_CONTROLPANEL,
	EV_KEY, KEY_APPSELECT,
	EV_KEY, KEY_SCREENSAVER,
	EV_KEY, KEY_VOICECOMMAND,
	EV_KEY, KEY_BRIGHTNESS_MIN,
	EV_KEY, KEY_BRIGHTNESS_MAX,
	-1 , -1,
};

static struct input_absinfo absinfo[] = {
	{ ABS_VOLUME, 0, 572, 0, 0, 0 },
	{ ABS_MISC, 0, 0, 0, 0, 0 },
	{ ABS_MISC + 1, 0, 0, 0, 0, 0 },
	{ ABS_MISC + 2, 0, 0, 0, 0, 0 },
	{ ABS_MISC + 3, 0, 0, 0, 0, 0 },
	{ .value = -1 }
};

TEST_DEVICE("mouse-roccat",
	.type = LITEST_MOUSE_ROCCAT,
	.features = LITEST_RELATIVE | LITEST_BUTTON | LITEST_WHEEL | LITEST_KEYS,
	.interface = NULL,

	.name = "ROCCAT ROCCAT Kone XTD",
	.id = &input_id,
	.absinfo = absinfo,
	.events = events,
)
