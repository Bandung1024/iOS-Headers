/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUOutputStream-Protocol.h"

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    long long mInitialOffset;
}

- (id)initWithOutputStream:(id)arg1;
- (void)dealloc;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (long long)offset;
- (BOOL)canCreateInputStream;
- (id)inputStream;
- (void)close;
- (id)closeLocalStream;

@end

