//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUStreamReadChannel.h"

__attribute__((visibility("hidden")))
@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel>
{
    id <TSUStreamReadChannel> _readChannel;
}

- (void).cxx_destruct;
- (id)uncompressData:(id)arg1;
- (id)uncompressDataFromSource:(struct SnappySource *)arg1;
- (BOOL)processData:(id *)arg1 isDone:(BOOL)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)close;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithReadChannel:(id)arg1;

@end
