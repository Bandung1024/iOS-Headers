/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface FTProfileMessage : FTMessage <NSCopying>
{
    NSData *_pushToken;
    NSString *_authToken;
    NSString *_profileID;
}

@property(copy) NSString *profileID; // @synthesize profileID=_profileID;
@property(copy) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (int)responseCommand;
- (int)command;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

