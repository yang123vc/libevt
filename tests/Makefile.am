AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCTHREADS_CPPFLAGS@ \
	@LIBCDATA_CPPFLAGS@ \
	@LIBCLOCALE_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBCSPLIT_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBCFILE_CPPFLAGS@ \
	@LIBCPATH_CPPFLAGS@ \
	@LIBBFIO_CPPFLAGS@ \
	@LIBFCACHE_CPPFLAGS@ \
	@LIBFDATA_CPPFLAGS@ \
	@LIBFDATETIME_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@ \
	@LIBFVALUE_CPPFLAGS@ \
	@LIBFWNT_CPPFLAGS@ \
	@LIBCSYSTEM_CPPFLAGS@ \
	@PTHREAD_CPPFLAGS@ \
	@LIBEVT_DLL_IMPORT@

if HAVE_PYTHON_TESTS
TESTS_PYEVT = \
	test_python_functions.sh \
	test_pyevt_set_ascii_codepage.sh
endif

TESTS = \
	test_api_functions.sh \
	test_api_types.sh \
	test_evtinfo.sh \
	test_evtexport.sh \
	$(TESTS_PYEVT)

check_SCRIPTS = \
	pyevt_test_get_version.py \
	pyevt_test_open_close.py \
	pyevt_test_set_ascii_codepage.py \
	test_api_functions.sh \
	test_api_types.sh \
	test_evtexport.sh \
	test_evtinfo.sh \
	test_pyevt_set_ascii_codepage.sh \
	test_python_functions.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	evt_test_error \
	evt_test_file \
	evt_test_io_handle \
	evt_test_notify \
	evt_test_record \
	evt_test_record_values \
	evt_test_support

evt_test_error_SOURCES = \
	evt_test_error.c \
	evt_test_libevt.h \
	evt_test_macros.h \
	evt_test_unused.h

evt_test_error_LDADD = \
	../libevt/libevt.la

evt_test_file_SOURCES = \
	evt_test_file.c \
	evt_test_libcerror.h \
	evt_test_libclocale.h \
	evt_test_libcsystem.h \
	evt_test_libevt.h \
	evt_test_libuna.h \
	evt_test_macros.h \
	evt_test_memory.c evt_test_memory.h

evt_test_file_LDADD = \
	@LIBCSYSTEM_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libevt/libevt.la \
	@LIBCTHREADS_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	@PTHREAD_LIBADD@

evt_test_io_handle_SOURCES = \
	evt_test_io_handle.c \
	evt_test_libcerror.h \
	evt_test_libevt.h \
	evt_test_macros.h \
	evt_test_memory.c evt_test_memory.h \
	evt_test_unused.h

evt_test_io_handle_LDADD = \
	../libevt/libevt.la \
	@LIBCERROR_LIBADD@

evt_test_notify_SOURCES = \
	evt_test_libevt.h \
	evt_test_macros.h \
	evt_test_notify.c \
	evt_test_unused.h

evt_test_notify_LDADD = \
	../libevt/libevt.la

evt_test_record_SOURCES = \
	evt_test_libcerror.h \
	evt_test_libevt.h \
	evt_test_macros.h \
	evt_test_memory.c evt_test_memory.h \
	evt_test_record.c \
	evt_test_unused.h

evt_test_record_LDADD = \
	../libevt/libevt.la \
	@LIBCERROR_LIBADD@

evt_test_record_values_SOURCES = \
	evt_test_libcerror.h \
	evt_test_libevt.h \
	evt_test_macros.h \
	evt_test_memory.c evt_test_memory.h \
	evt_test_record_values.c \
	evt_test_unused.h

evt_test_record_values_LDADD = \
	../libevt/libevt.la \
	@LIBCERROR_LIBADD@

evt_test_support_SOURCES = \
	evt_test_libbfio.h \
	evt_test_libcerror.h \
	evt_test_libclocale.h \
	evt_test_libcsystem.h \
	evt_test_libevt.h \
	evt_test_libuna.h \
	evt_test_macros.h \
	evt_test_support.c

evt_test_support_LDADD = \
	@LIBCSYSTEM_LIBADD@ \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libevt/libevt.la \
	@LIBCERROR_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

