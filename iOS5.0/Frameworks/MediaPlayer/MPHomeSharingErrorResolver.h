/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPAVErrorResolver.h>

#import "SSAuthorizationRequestDelegate-Protocol.h"

@class MPHomeSharingML3DataProvider, NSData, NSError, SSAuthorizationRequest;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate>
{
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    SSAuthorizationRequest *_request;
    NSData *_tokenData;
}

@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (BOOL)_errorIsFairPlayError:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)resolveError:(id)arg1;
- (void)dealloc;
- (id)initWithTokenData:(id)arg1 forAccountID:(unsigned long long)arg2;

@end

