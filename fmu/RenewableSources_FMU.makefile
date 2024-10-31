# FIXME: before you push into master...
RUNTIMEDIR=/usr/bin/../include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f RenewableSources.fmutmp/sources/RenewableSources_init.xml
	cp -a "/usr/bin/../share/omc/runtime/c/fmi/buildproject/"* RenewableSources.fmutmp/sources
	cp -a RenewableSources_FMU.libs RenewableSources.fmutmp/sources/

