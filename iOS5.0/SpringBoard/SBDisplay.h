/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSMutableSet;

@interface SBDisplay : NSObject
{
    NSMapTable *_displayValues;
    NSMapTable *_activationValues;
    NSMapTable *_deactivationValues;
    NSHashTable *_displayFlags;
    NSHashTable *_activationFlags;
    NSHashTable *_deactivationFlags;
    NSMutableSet *_suppressVolumeHudCategories;
    float _accelerometerSampleInterval;
    unsigned int _disableIdleTimer;
    unsigned int _expectsFaceContact:1;
    unsigned int _expectsFaceContactInLandscape:1;
    unsigned int _accelerometerDeviceOrientationChangedEventsEnabled:1;
    unsigned int _proximityEventsEnabled:1;
    unsigned int _showsProgress;
}

+ (id)_defaultDisplayState;
+ (void)setDefaultValue:(id)arg1 forKey:(id)arg2 displayIdentifier:(id)arg3;
+ (id)defaultValueForKey:(id)arg1 displayIdentifier:(id)arg2 urlScheme:(id)arg3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayIdentifier;
- (id)urlScheme;
- (id)_newValueTable;
- (id)_newFlagTable;
- (void)clearDisplaySettings;
- (void)setDisplaySetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)setDisplaySetting:(unsigned int)arg1 value:(id)arg2;
- (id)displayValue:(unsigned int)arg1;
- (BOOL)displayFlag:(unsigned int)arg1;
- (void)clearActivationSettings;
- (void)setActivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)setActivationSetting:(unsigned int)arg1 value:(id)arg2;
- (id)activationValue:(unsigned int)arg1;
- (BOOL)activationFlag:(unsigned int)arg1;
- (void)clearDeactivationSettings;
- (void)setDeactivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)setDeactivationSetting:(unsigned int)arg1 value:(id)arg2;
- (id)deactivationValue:(unsigned int)arg1;
- (BOOL)deactivationFlag:(unsigned int)arg1;
- (void)activate;
- (void)launchSucceeded:(BOOL)arg1;
- (void)deactivate;
- (void)deactivated;
- (void)deactivateAfterLocking;
- (void)kill;
- (void)_exitedCommon;
- (void)exitedAbnormally;
- (void)exitedNormally;
- (BOOL)allowsEventOnlySuspension;
- (int)defaultStatusBarStyle;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (BOOL)defaultStatusBarHidden;
- (BOOL)statusBarHidden;
- (int)statusBarOrientation;
- (int)launchingInterfaceOrientationForCurrentOrientation;
- (int)launchingInterfaceOrientationForCurrentOrientation:(int)arg1;
- (BOOL)isNowRecordingApplication;
- (int)effectiveStatusBarStyle;
- (void)setDisableIdleTimer:(BOOL)arg1;
- (BOOL)disableIdleTimer;
- (double)autoDimTime;
- (double)autoLockTime;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (void)setAccelerometerSampleInterval:(double)arg1;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)arg1;
- (BOOL)accelerometerDeviceOrientationChangedEventsEnabled;
- (void)setProximityEventsEnabled:(BOOL)arg1;
- (BOOL)proximityEventsEnabled;
- (void)setShowsProgress:(BOOL)arg1;
- (BOOL)showsProgress;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forCategory:(id)arg2;
- (BOOL)showSystemVolumeHUDForCategory:(id)arg1;
- (void)handleLock:(BOOL)arg1;
- (void)prepareForActivationOfDisplay:(id)arg1 toHandleURL:(id)arg2;
- (BOOL)suppressesNotifications;
- (id)description;
- (id)descriptionForDisplaySetting:(unsigned int)arg1;
- (id)displaySettingsDescription;
- (id)descriptionForActivationSetting:(unsigned int)arg1;
- (id)activationSettingsDescription;
- (id)descriptionForDeactivationSetting:(unsigned int)arg1;
- (id)deactivationSettingsDescription;

@end

