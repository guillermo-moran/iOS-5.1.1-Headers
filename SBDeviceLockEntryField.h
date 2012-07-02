/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString, UIPasscodeField, UITextInputTraits;

@interface SBDeviceLockEntryField : XXUnknownSuperclass {
	int _style;
	int _interfaceOrientation;
	UIPasscodeField* _passcodeField;
	UITextInputTraits* _textInputTraits;
	CFCharacterSetRef _numericTrimmingSet;
	BOOL _highlighted;
	id _delegate;
}
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;
@property(copy, nonatomic) NSString* stringValue;
-(id)initWithStyle:(int)style interfaceOrientation:(int)orientation;
-(void)dealloc;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(id)passcodeField;
-(CGSize)_fieldSizeForCurrentDevice;
-(id)_backgroundImage;
-(void)_layoutForCurrentDevice;
-(void)appendString:(id)string;
-(void)deleteLastCharacter;
-(id)textInputTraits;
-(void)passcodeFieldTextDidChange:(id)passcodeFieldText;
-(BOOL)passcodeField:(id)field shouldInsertText:(id)text;
-(void)passcodeFieldDidAcceptEntry:(id)passcodeField;
-(void)_handleKeyEvent:(GSEventRef)event;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
@end
