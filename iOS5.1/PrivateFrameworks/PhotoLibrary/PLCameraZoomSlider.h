/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISlider.h"

@class NSTimer, UIImageView;

@interface PLCameraZoomSlider : UISlider
{
    BOOL _isZoomingFromMin;
    BOOL _isZoomingFromMax;
    BOOL _autorotationEnabled;
    BOOL _watchingOrientationChanges;
    int _orientation;
    NSTimer *_visibilityTimer;
    UIImageView *_minImageView;
    UIImageView *_maxImageView;
}

@property(nonatomic) BOOL isZoomingFromMax; // @synthesize isZoomingFromMax=_isZoomingFromMax;
@property(nonatomic) BOOL isZoomingFromMin; // @synthesize isZoomingFromMin=_isZoomingFromMin;
- (void)hideZoomSlider:(id)arg1;
- (void)_postHideZoomSliderAnimation;
- (void)makeInvisible;
- (void)makeVisible;
- (void)stopVisibilityTimer;
- (void)startVisibilityTimer;
- (BOOL)visibilityTimerIsValid;
- (void)_setDeviceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(int)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)stopWatchingDeviceOrientationChanges;
- (void)startWatchingDeviceOrientationChanges;
@property(nonatomic) BOOL autorotationEnabled;
- (struct CGAffineTransform)_rotationTransformForDeviceOrientation:(int)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)clearZoomingFromEndcap;
- (BOOL)isZoomingFromEndcap;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)locationOfTouch:(id)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)addEndCapImageViewsWithMinImage:(id)arg1 maxImage:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

