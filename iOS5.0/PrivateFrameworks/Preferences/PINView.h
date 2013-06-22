/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PINEntryView-Protocol.h"

@class FailureBarView, UILabel;

@interface PINView : UIView <PINEntryView>
{
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
    id _delegate;
}

- (void)showError:(id)arg1 animate:(BOOL)arg2;
- (void)hideError;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)showFailedAttempts:(int)arg1;
- (void)layoutSubviews;
- (void)hideFailedAttempts;
- (void)dealloc;
- (void)setBlocked:(BOOL)arg1;

@end

