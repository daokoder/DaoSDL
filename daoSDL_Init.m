
#import <Cocoa/Cocoa.h>
#include"dao.h"

int DaoOnLoad( DaoVmSpace *vms, DaoNamespace *ns );

int DaoSDL_OnLoad( DaoVmSpace *vms, DaoNamespace *ns )
{
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	/* Ensure the application object is initialised */
	[NSApplication sharedApplication];
	return DaoOnLoad( vms, ns );
}

