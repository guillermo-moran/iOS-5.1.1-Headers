/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "BBWeeAppController.h"

@class NSString;

@interface SBWeeApp : XXUnknownSuperclass <BBWeeAppController> {
	id<BBWeeAppController> _weeAppController;
	NSString* _sectionID;
	struct {
		unsigned viewHeight : 1;
		unsigned viewWillAppear : 1;
		unsigned viewDidAppear : 1;
		unsigned viewWillDisappear : 1;
		unsigned viewDidDisappear : 1;
		unsigned willRotate : 1;
		unsigned willAnimateRotation : 1;
		unsigned didRotate : 1;
		unsigned loadPlaceholderView : 1;
		unsigned loadFullView : 1;
		unsigned unloadView : 1;
		unsigned launchURL : 1;
		unsigned launchURLForTapLocation : 1;
		unsigned clearSnapshotImage : 1;
	} _weeAppFlags;
}
@property(readonly, assign, nonatomic) NSString* sectionID;
-(id)initWithWeeAppController:(id)weeAppController sectionID:(id)anId;
-(void)dealloc;
-(id)view;
-(float)viewHeight;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)viewDidDisappear;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)loadPlaceholderView;
-(void)loadFullView;
-(void)unloadView;
-(id)launchURLForTapLocation:(CGPoint)tapLocation;
-(void)clearShapshotImage;
@end
