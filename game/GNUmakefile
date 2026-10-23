.PHONY: dos-build dos-run

DOSBOX?=dosbox-x
DOSBOX_FLAGS:=-conf ./conf/pc98-dev.conf -nolog -set machine=pc98 
DOSBOX_CC_FLAGS:=-fastlaunch -silent
MAKE_LOGS_FILE=logs/MAKE-LOG.TXT

dos-build: bin/SAMPLE.EXE

bin/SAMPLE.EXE: src/sample.c
	rm -f STATUS.TXT
	dosbox-x $(DOSBOX_FLAGS) $(DOSBOX_CC_FLAGS) -c "D:\\BUILD.BAT"
	@test -f STATUS.TXT || { echo "DOS build did not produce a status file"; exit 1; }
	@status=$$(tr -d '\r' < STATUS.TXT); rm -f STATUS.TXT; \
		test "$$status" = 0 || { echo "DOS build failed (status=$$status)"; exit 1; }
	@cat $(MAKE_LOGS_FILE); rm -f $(MAKE_LOGS_FILE)

dos-run: dos-build
	dosbox-x $(DOSBOX_FLAGS) -c "cd bin" -c "SAMPLE.EXE"
	cat $(RUN_LOGS_FILE)
