/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TLVibrationManagerServiceClient : NSObject
{
}

+ (void)sendMessage:(id)arg1 asynchronously:(BOOL)arg2 completionBlock:(id)arg3;
+ (void)_sendXPCMessageWithWrapper:(id)arg1 asynchronously:(BOOL)arg2 remainingAttempts:(unsigned int)arg3 previousError:(id)arg4 completionBlock:(id)arg5;
+ (struct _xpc_connection_s *)_sharedConnection;

@end

