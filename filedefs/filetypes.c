# For complete documentation of this file, please see Geany's main documentation
[styling]
# Edit these in the colorscheme .conf file intead
# foreground;background;bold;italic
default=default
comment=comment
commentline=comment_line
commentdoc=comment_doc
number=0xFF00FF
word=0x00805C;0xFFFFFF;true;false
word2=0xA51D1D;0xFFFFFF;true;false
string=string
character=string
uuid=0x404080
preprocessor=0x8000FF;0xFFFFFF
operator=operator
identifier=identifier
stringeol=string_eol
# @"verbatim"
verbatim=0x101030
# (/regex/)
regex=0x105090
commentlinedoc=comment_doc,bold
commentdockeyword=comment_doc,bold,italic
commentdockeyworderror=comment_doc
#globalclass=type
globalclass=0x505050;0xffffff;true;false

[keywords]
# all items must be in one line
primary=asm auto break case char const continue default do double else enum extern float for goto if inline int long register restrict return short signed sizeof static struct switch typedef union unsigned void volatile while FALSE NULL TRUE
secondary=
# these are some doxygen keywords (incomplete)
docComment=attention author brief bug class code date def enum example exception file fn namespace note param remarks return see since struct throw todo typedef var version warning union

[lexer_properties]
styling.within.preprocessor=1
lexer.cpp.track.preprocessor=0
preprocessor.symbol.$(file.patterns.cpp)=#
preprocessor.start.$(file.patterns.cpp)=if ifdef ifndef
preprocessor.middle.$(file.patterns.cpp)=else elif
preprocessor.end.$(file.patterns.cpp)=endif

[settings]
# default extension used when saving files
extension=c

# the following characters are these which a "word" can contains, see documentation
#wordchars=_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789

# single comments, like # in this file
comment_single=//
# multiline comments
comment_open=/*
comment_close=*/

# set to false if a comment character/string should start at column 0 of a line, true uses any
# indentation of the line, e.g. setting to true causes the following on pressing CTRL+d
	#command_example();
# setting to false would generate this
#	command_example();
# This setting works only for single line comments
comment_use_indent=true

# context action command (please see Geany's main documentation for details)
context_action_cmd=

[build_settings]
# %f will be replaced by the complete filename
# %e will be replaced by the filename without extension
# (use only one of it at one time)
compiler=gcc -Wall -c "%f"
linker=gcc -Wall -o "%e" "%f"
run_cmd="./%e"


