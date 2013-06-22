/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol
{
    struct __MSRPCContext {
        struct __MSSPCContext _super;
        void *finishedCallback;
        void *authFailedCallback;
        void *didReceiveRetryAfterCallback;
        void *didReceiveServerSideConfigurationVersionCallback;
    } _context;
    NSArray *_assetsInFlight;
}

- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)abort;
- (void)requestReauthorizationForAssets:(id)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

