/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebFrameView;

@interface WebFramePrivate : NSObject
{
    Frame_dd7f3145 *coreFrame;
    WebFrameView *webFrameView;
    struct WebScriptDebugger *scriptDebugger;
    id internalLoadDelegate;
    BOOL shouldCreateRenderers;
    BOOL includedInWebKitStatistics;
    BOOL isCommitting;
    BOOL isSingleLine;
}

- (void)dealloc;
- (void)finalize;
- (void)setWebFrameView:(id)arg1;

@end

