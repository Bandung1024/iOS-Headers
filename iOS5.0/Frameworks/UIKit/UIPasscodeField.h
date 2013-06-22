/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSMutableString, UIButton;

@interface UIPasscodeField : UIView <UITextFieldDelegate>
{
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIButton *_okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    int _keyboardType;
    int _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id _delegate;
}

+ (Class)textFieldClass;
+ (float)defaultHeight;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)okButtonClicked:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (BOOL)textFieldShouldStartEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)_textDidChange;
- (void)setDelegate:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setNumberOfEntryFields:(int)arg1;
- (void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2;
- (int)numberOfEntryFields;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setShowsOKButton:(BOOL)arg1;
- (BOOL)showsOKButton;
- (void)_updateFields;
- (void)dealloc;
- (void)setKeyboardType:(int)arg1 appearance:(int)arg2 emptyContentReturnKeyType:(int)arg3;
- (void)setKeyboardType:(int)arg1 appearance:(int)arg2;
- (void)setKeyboardType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

