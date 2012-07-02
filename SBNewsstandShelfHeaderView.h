/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBNewsstandTilingImageView.h"
#import "SpringBoard-Structs.h"

@class UIImageView;

@interface SBNewsstandShelfHeaderView : SBNewsstandTilingImageView {
	float _borderWidth;
	UIImageView* _appleLogo;
	UIImageView* _middleShadow;
	UIImageView* _shelvesTopShading;
	int _orientation;
}
+(id)_pathForCachedBackgroundTile;
+(id)_backgroundTileImage;
+(void)setupCache;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)configureForOrientation:(int)orientation;
-(void)layoutSubviews;
@end
