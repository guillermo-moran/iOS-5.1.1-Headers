/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconObserver.h"
#import "SBIconViewLocker.h"

@class NSMapTable;
@protocol SBIconViewDelegate;

@interface SBIconViewMap : XXUnknownSuperclass <SBIconViewLocker, SBIconObserver> {
	NSMapTable* _iconViewsForIcons;
	id<SBIconViewDelegate> _iconViewdelegate;
	NSMapTable* _recycledIconViewsByType;
	NSMapTable* _labels;
	NSMapTable* _badges;
}
+(id)homescreenMap;
+(Class)iconViewClassForIcon:(id)icon location:(int)location;
-(id)init;
-(void)dealloc;
-(id)mappedIconViewForIcon:(id)icon;
-(id)_iconViewForIcon:(id)icon;
-(id)iconViewForIcon:(id)icon;
-(void)_addIconView:(id)view forIcon:(id)icon;
-(void)purgeIconFromMap:(id)map;
-(void)_recycleIconView:(id)view;
-(void)recycleViewForIcon:(id)icon;
-(void)recycleAndPurgeAll;
-(id)releaseIconLabelForIcon:(id)icon;
-(void)captureIconLabel:(id)label forIcon:(id)icon;
-(void)purgeRecycledIconViewsForClass:(Class)aClass;
-(void)_modelListAddedIcon:(id)icon;
-(void)_modelRemovedIcon:(id)icon;
-(void)_modelReloadedIcons;
-(void)_modelReloadedState;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
@end
