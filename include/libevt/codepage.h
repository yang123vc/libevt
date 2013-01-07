/*
 * Codepage definitions for libevt
 *
 * Copyright (c) 2011-2013, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEVT_CODEPAGE_H )
#define _LIBEVT_CODEPAGE_H

#include <libevt/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBEVT_CODEPAGES
{
	LIBEVT_CODEPAGE_ASCII				= 20127,

	LIBEVT_CODEPAGE_ISO_8859_1			= 28591,
	LIBEVT_CODEPAGE_ISO_8859_2			= 28592,
	LIBEVT_CODEPAGE_ISO_8859_3			= 28593,
	LIBEVT_CODEPAGE_ISO_8859_4			= 28594,
	LIBEVT_CODEPAGE_ISO_8859_5			= 28595,
	LIBEVT_CODEPAGE_ISO_8859_6			= 28596,
	LIBEVT_CODEPAGE_ISO_8859_7			= 28597,
	LIBEVT_CODEPAGE_ISO_8859_8			= 28598,
	LIBEVT_CODEPAGE_ISO_8859_9			= 28599,
	LIBEVT_CODEPAGE_ISO_8859_10			= 28600,
	LIBEVT_CODEPAGE_ISO_8859_11			= 28601,
	LIBEVT_CODEPAGE_ISO_8859_13			= 28603,
	LIBEVT_CODEPAGE_ISO_8859_14			= 28604,
	LIBEVT_CODEPAGE_ISO_8859_15			= 28605,
	LIBEVT_CODEPAGE_ISO_8859_16			= 28606,

	LIBEVT_CODEPAGE_KOI8_R				= 20866,
	LIBEVT_CODEPAGE_KOI8_U				= 21866,

	LIBEVT_CODEPAGE_WINDOWS_874			= 874,
	LIBEVT_CODEPAGE_WINDOWS_932			= 932,
	LIBEVT_CODEPAGE_WINDOWS_936			= 936,
	LIBEVT_CODEPAGE_WINDOWS_949			= 949,
	LIBEVT_CODEPAGE_WINDOWS_950			= 950,
	LIBEVT_CODEPAGE_WINDOWS_1250			= 1250,
	LIBEVT_CODEPAGE_WINDOWS_1251			= 1251,
	LIBEVT_CODEPAGE_WINDOWS_1252			= 1252,
	LIBEVT_CODEPAGE_WINDOWS_1253			= 1253,
	LIBEVT_CODEPAGE_WINDOWS_1254			= 1254,
	LIBEVT_CODEPAGE_WINDOWS_1255			= 1255,
	LIBEVT_CODEPAGE_WINDOWS_1256			= 1256,
	LIBEVT_CODEPAGE_WINDOWS_1257			= 1257,
	LIBEVT_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBEVT_CODEPAGE_US_ASCII			LIBEVT_CODEPAGE_ASCII

#define LIBEVT_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBEVT_CODEPAGE_ISO_8859_1
#define LIBEVT_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBEVT_CODEPAGE_ISO_8859_2
#define LIBEVT_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBEVT_CODEPAGE_ISO_8859_3
#define LIBEVT_CODEPAGE_ISO_NORTH_EUROPEAN		LIBEVT_CODEPAGE_ISO_8859_4
#define LIBEVT_CODEPAGE_ISO_CYRILLIC			LIBEVT_CODEPAGE_ISO_8859_5
#define LIBEVT_CODEPAGE_ISO_ARABIC			LIBEVT_CODEPAGE_ISO_8859_6
#define LIBEVT_CODEPAGE_ISO_GREEK			LIBEVT_CODEPAGE_ISO_8859_7
#define LIBEVT_CODEPAGE_ISO_HEBREW			LIBEVT_CODEPAGE_ISO_8859_8
#define LIBEVT_CODEPAGE_ISO_TURKISH			LIBEVT_CODEPAGE_ISO_8859_9
#define LIBEVT_CODEPAGE_ISO_NORDIC			LIBEVT_CODEPAGE_ISO_8859_10
#define LIBEVT_CODEPAGE_ISO_THAI			LIBEVT_CODEPAGE_ISO_8859_11
#define LIBEVT_CODEPAGE_ISO_BALTIC			LIBEVT_CODEPAGE_ISO_8859_13
#define LIBEVT_CODEPAGE_ISO_CELTIC			LIBEVT_CODEPAGE_ISO_8859_14

#define LIBEVT_CODEPAGE_ISO_LATIN_1			LIBEVT_CODEPAGE_ISO_8859_1
#define LIBEVT_CODEPAGE_ISO_LATIN_2			LIBEVT_CODEPAGE_ISO_8859_2
#define LIBEVT_CODEPAGE_ISO_LATIN_3			LIBEVT_CODEPAGE_ISO_8859_3
#define LIBEVT_CODEPAGE_ISO_LATIN_4			LIBEVT_CODEPAGE_ISO_8859_4
#define LIBEVT_CODEPAGE_ISO_LATIN_5			LIBEVT_CODEPAGE_ISO_8859_9
#define LIBEVT_CODEPAGE_ISO_LATIN_6			LIBEVT_CODEPAGE_ISO_8859_10
#define LIBEVT_CODEPAGE_ISO_LATIN_7			LIBEVT_CODEPAGE_ISO_8859_13
#define LIBEVT_CODEPAGE_ISO_LATIN_8			LIBEVT_CODEPAGE_ISO_8859_14
#define LIBEVT_CODEPAGE_ISO_LATIN_9			LIBEVT_CODEPAGE_ISO_8859_15
#define LIBEVT_CODEPAGE_ISO_LATIN_10			LIBEVT_CODEPAGE_ISO_8859_16

#define LIBEVT_CODEPAGE_KOI8_RUSSIAN			LIBEVT_CODEPAGE_KOI8_R
#define LIBEVT_CODEPAGE_KOI8_UKRAINIAN			LIBEVT_CODEPAGE_KOI8_U

#define LIBEVT_CODEPAGE_WINDOWS_THAI			LIBEVT_CODEPAGE_WINDOWS_874
#define LIBEVT_CODEPAGE_WINDOWS_JAPANESE		LIBEVT_CODEPAGE_WINDOWS_932
#define LIBEVT_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBEVT_CODEPAGE_WINDOWS_936
#define LIBEVT_CODEPAGE_WINDOWS_KOREAN			LIBEVT_CODEPAGE_WINDOWS_949
#define LIBEVT_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBEVT_CODEPAGE_WINDOWS_950
#define LIBEVT_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBEVT_CODEPAGE_WINDOWS_1250
#define LIBEVT_CODEPAGE_WINDOWS_CYRILLIC		LIBEVT_CODEPAGE_WINDOWS_1251
#define LIBEVT_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBEVT_CODEPAGE_WINDOWS_1252
#define LIBEVT_CODEPAGE_WINDOWS_GREEK			LIBEVT_CODEPAGE_WINDOWS_1253
#define LIBEVT_CODEPAGE_WINDOWS_TURKISH			LIBEVT_CODEPAGE_WINDOWS_1254
#define LIBEVT_CODEPAGE_WINDOWS_HEBREW			LIBEVT_CODEPAGE_WINDOWS_1255
#define LIBEVT_CODEPAGE_WINDOWS_ARABIC			LIBEVT_CODEPAGE_WINDOWS_1256
#define LIBEVT_CODEPAGE_WINDOWS_BALTIC			LIBEVT_CODEPAGE_WINDOWS_1257
#define LIBEVT_CODEPAGE_WINDOWS_VIETNAMESE		LIBEVT_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

