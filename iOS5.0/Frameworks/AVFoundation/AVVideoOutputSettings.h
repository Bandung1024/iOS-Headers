/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings
{
}

+ (id)_validValuesForScalingMode;
+ (id)registeredOutputSettingsClasses;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)defaultVideoOutputSettings;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (id)compatibleMediaTypes;
@property(readonly, nonatomic) NSDictionary *videoSettingsDictionary;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) NSDictionary *pixelTransferProperties;
@property(readonly, nonatomic) BOOL dimensionsAreBoundingBox;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;

@end

