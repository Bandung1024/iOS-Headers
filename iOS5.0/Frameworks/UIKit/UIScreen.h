/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, UIScreenMode, UISoftwareDimmingWindow;

@interface UIScreen : NSObject
{
    id _display;
    struct CGRect _bounds;
    float _scale;
    float _horizontalScale;
    struct {
        unsigned int bitsPerComponent:4;
        unsigned int initialized:1;
        unsigned int connected:1;
        unsigned int overscanCompensation:2;
    } _screenFlags;
    BOOL _wantsSoftwareDimming;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    int _ignoreBacklightLevelDidChangeNotificationsCount;
}

+ (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
+ (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)screens;
+ (struct CGAffineTransform)transformToRotateScreen:(float)arg1;
+ (struct CGAffineTransform)transformForScreenOriginRotation:(float)arg1;
+ (id)mainScreen;
+ (void)_videoOutSettingsChanged;
+ (void)initialize;
@property(nonatomic, setter=_setIgnoreBacklightLevelDidChangeNotificationsCount:) int _ignoreBacklightLevelDidChangeNotificationsCount; // @synthesize _ignoreBacklightLevelDidChangeNotificationsCount;
@property(retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // @synthesize _softwareDimmingWindow;
@property(nonatomic) BOOL wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)description;
@property(nonatomic) float brightness;
- (BOOL)_supportsBrightness;
- (void)_endObservingBacklightLevelNotifications;
- (void)_beginObservingBacklightLevelNotifications;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (BOOL)_shouldRepostBacklightLevelChangedNotification;
- (void)_decrementIgnoreBacklightLevelDidChangeNotificationsCount;
- (void)_incrementIgnoreBacklightLevelDidChangeNotificationsCount;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (id)_lazySoftwareDimmingWindow;
- (void)_setScale:(float)arg1;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)_prepareForWindow;
- (BOOL)_hasStatusBar;
- (BOOL)_isMainScreen;
- (id)_name;
@property(nonatomic) int overscanCompensation;
@property(readonly, nonatomic) NSArray *availableModes;
- (int)screenType;
@property(retain, nonatomic) UIScreenMode *currentMode;
- (void)setBitsPerComponent:(int)arg1;
- (int)bitsPerComponent;
@property(readonly, nonatomic) UIScreenMode *preferredMode;
@property(readonly, nonatomic) UIScreen *mirroredScreen;
- (double)_refreshRate;
- (int)_imageOrientation;
- (float)_rotation;
- (struct CGRect)_boundsInPixels;
- (struct CGRect)_realDisplayBounds;
- (float)_horizontalPixelScale;
@property(readonly, nonatomic) struct CGRect applicationFrame;
- (void)_computeMetrics;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(int)arg1;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (BOOL)_isOverscanned;
- (BOOL)_hasWindows;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;

@end

