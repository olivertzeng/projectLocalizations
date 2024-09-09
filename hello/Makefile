LANGUAGES = en_US zh_TW

all: $(LANGUAGES)

$(LANGUAGES):
	cc -o hello hello.c -lintl
	msgfmt locales/$@.po -o locales/$@/LC_MESSAGES/hello.mo
	msgmerge -U locales/$@.po locales/messages.pot
