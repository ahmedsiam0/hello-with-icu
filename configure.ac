AC_INIT([hello-with-icu], [1.0], [none])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CXX
AC_CONFIG_FILES([
 Makefile
 src/Makefile
 locales/Makefile
])
AC_CONFIG_HEADERS([config.h])

AC_DEFINE_UNQUOTED([LOCALES_DIR], ["$prefix/share/hello_with_icu/locales"], [define locales dir path])

PKG_CHECK_MODULES(ICU, [icu-i18n, icu-io, icu-uc], CPPFLAGS="$CPPFLAGS $ICU_CFLAGS"; LIBS="$LIBS $ICU_LIBS")

AC_OUTPUT
