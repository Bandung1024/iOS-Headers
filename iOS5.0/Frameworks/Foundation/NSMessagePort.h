/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort
{
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;
- (void)finalize;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)init;
- (id)initWithRemoteName:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (BOOL)setName:(id)arg1;
- (id)name;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;

@end

