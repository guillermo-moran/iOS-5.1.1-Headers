/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertDisplay.h"

@class UIView;

@interface SBAssistantAlertDisplay : SBAlertDisplay {
	UIView* _assistantView;
}
@property(retain, nonatomic) UIView* assistantView;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
@end
