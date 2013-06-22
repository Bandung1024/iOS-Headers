/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class BBBulletin, NSArray;

@interface SBBulletinModalAlert : SBAlertItem
{
    BBBulletin *_bulletin;
    NSArray *_buttons;
    BOOL _playedSound;
    SBBulletinModalAlert *_superseded;
}

- (id)initWithBulletin:(id)arg1;
- (id)initWithBulletin:(id)arg1 supersededAlert:(id)arg2;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dismiss:(int)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (BOOL)shouldShowInLockScreen;
- (BOOL)dismissOnLock;
- (BOOL)allowMenuButtonDismissal;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;

@end

