/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme;

@interface CMState : NSObject
{
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    id mResources;
    int mSrcFormat;
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    int _textLevel;
}

- (id)init;
- (void)dealloc;
- (id)componentByName:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (void)setResourceUrlPrefix:(id)arg1;
- (id)resourceUrlPrefix;
- (void)setHtmlResource:(id)arg1;
- (id)getHtmlResource;
- (void)setSrcFormat:(int)arg1;
- (int)sourceFormat;
- (id)colorMap;
- (void)setColorMap:(id)arg1;
- (id)colorScheme;
- (void)setColorScheme:(id)arg1;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (BOOL)isOffice12;
- (void)setIsThumbnail:(BOOL)arg1;
- (BOOL)isThumbnail;
- (void)setIsOnPhone:(BOOL)arg1;
- (BOOL)isOnPhone;
- (void)pushTextLevel;
- (void)popTextLevel;
- (int)textLevel;

@end

