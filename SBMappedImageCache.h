/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface SBMappedImageCache : XXUnknownSuperclass {
	dispatch_queue_s* _queue;
	NSString* _path;
	NSMutableDictionary* _images;
}
+(id)persistentCache;
+(id)sessionCache;
+(id)imageNamed:(id)named;
-(id)initWithPath:(id)path;
-(void)dealloc;
-(id)imageForKey:(id)key generateImageWithBlockIfNecessary:(id)blockIfNecessary;
-(void)setImage:(id)image forKey:(id)key;
-(id)imageForKey:(id)key;
-(void)removeImageForKey:(id)key;
-(void)removeAllObjects;
@end
