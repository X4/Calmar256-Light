# For complete documentation of this file, please see Geany's main documentation
[styling]
# foreground;background;bold;italic
default=default
comment=0x0000FF;0xFFFFFF
commentline=0x0000FF;0xFFFFFF
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
stringeol=stringeol
# @"verbatim"
verbatim=0x101030
# (/regex/)
regex=0x105090
commentlinedoc=comment_doc,bold
commentdockeyword=comment_doc,bold,italic
commentdockeyworderror=comment_doc
#globalclass=type
globalclass=0x505050;0xffffff;true;false

# whether arguments of preprocesor commands should be styled (only first argument is used)
# 1 to enable, 0 to disable
styling_within_preprocessor=0;0;false;false

[keywords]
# all items must be in one line
primary=and and_eq auto bitand bitor bool char class const double enum explicit export extern false float friend inline int long mutable namespace not not_eq or or_eq register  short signed static struct template true typedef typename union unsigned using virtual void volatile wchar_t xor xor_eq
secondary=asm break catch case continue compl const_cast dynamic_cast do default delete else for goto if new operator public private protected return reinterpret_cast sizeof static_cast switch this throw try typeid while
# these are some doxygen keywords (incomplete)
docComment=attention author brief bug class code date def enum example exception file fn namespace note param remarks return see since struct throw todo typedef var version warning union

[settings]
# default extension used when saving files
#extension=cpp

# the following characters are these which a "word" can contains, see documentation
#wordchars=_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789

# if only single comment char is supported like # in this file, leave comment_close blank
comment_open=//
comment_close=
# this is an alternative way, so multiline comments are used
comment_open=/*
comment_close=*/

# set to false if a comment character/string should start at column 0 of a line, true uses any
# indentation of the line, e.g. setting to true causes the following on pressing CTRL+d
	#command_example();
# setting to false would generate this
#	command_example();
# This setting works only for single line comments
comment_use_indent=false

# context action command (please see Geany's main documentation for details)
context_action_cmd=

[build_settings]
# %f will be replaced by the complete filename
# %e will be replaced by the filename without extension
# (use only one of it at one time)
compiler=g++ -Wall -c "%f"
linker=g++ -Wall -o "%e" "%f"
run_cmd="./%e"

