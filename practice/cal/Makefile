PREFIX     = cal
           
LEX_FLAG   = -P$(PREFIX)
YACC_FLAG  = -d -p $(PREFIX)
CXXFLAGS   = -O3 -Wall -DNDEBUG
CXXFLAGS   = -g -Wall

LEX        = flex
YACC       = bison
CXX        = g++
ECHO       = /bin/echo
           
LEXSRC     = $(PREFIX).l
LEXTARGET  = $(PREFIX)Lex.cpp
YACCSRC    = $(PREFIX).y
YACCTARGET = $(PREFIX)Yacc.cpp
YACCHEADER = $(PREFIX)Yacc.hpp

CXXSRCS    = $(YACCTARGET) $(LEXTARGET)
CXXOBJS    = $(addsuffix .o, $(basename $(CXXSRCS)))

EXEC       = mycal

%.o : %.cpp
	@$(ECHO) "> compiling: $<"
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

$(EXEC): $(CXXOBJS)
	@$(ECHO) "> linking... "
	@$(CXX) $(CXXFLAGS) -o $@ $(CXXOBJS)

$(YACCTARGET): $(YACCSRC)
	@$(ECHO) "> yaccing: $(YACCSRC)"
	@$(YACC) $(YACC_FLAG) -o $@ $(YACCSRC)

$(LEXTARGET): $(LEXSRC) $(YACCHEADER)
	@$(ECHO) "> lexing: $(LEXSRC)"
	@$(LEX) $(LEX_FLAG) $(LEXSRC)
	@mv -f lex.$(PREFIX).c $@

clean:
	@$(ECHO) "> cleaning... "
	@rm -f $(CXXOBJS) $(CXXSRCS) $(EXEC)
