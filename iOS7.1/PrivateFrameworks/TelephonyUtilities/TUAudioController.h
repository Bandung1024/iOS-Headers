//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUAudioController : NSObject
{
    struct dispatch_semaphore_s *_modifyingStateLock;
    struct dispatch_group_s *_outstandingRequestsGroup;
}

- (void)blockUntilOutstandingRequestsComplete;
- (void)dealloc;
- (id)init;
- (void)_requestUpdatedValueWithBlock:(CDUnknownBlockType)arg1 object:(id *)arg2 isRequestingPointer:(char *)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long *)arg5 notificationString:(id)arg6 queue:(struct dispatch_queue_s *)arg7;
- (void)_leaveOutstandingRequestsGroup;
- (void)_enterOutstandingRequestsGroup;
- (void)_releaseLock;
- (void)_acquireLock;

@end
