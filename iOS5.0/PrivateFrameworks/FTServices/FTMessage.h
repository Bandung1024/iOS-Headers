/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface FTMessage : NSObject <NSCopying>
{
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned int _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    NSString *_topic;
    double _timeout;
    id _completionBlock;
    BOOL _usingOutgoingPush;
    id _deliveryAcknowledgementBlock;
    BOOL _wantsResponse;
    NSDictionary *_cachedBody;
    BOOL _wantsBinaryPush;
    BOOL _wantsIntegerUniqueIDs;
    NSDictionary *_responseAlert;
}

@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlert;
@property BOOL wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property BOOL wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property BOOL wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property(copy) id deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush; // @synthesize _usingOutgoingPush;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id context; // @synthesize context=_context;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly) NSDictionary *messageBody;
@property(readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalQueryStringParameters;
@property(readonly) NSDictionary *additionalMessageHeaders;
@property(readonly) NSString *bagKey;
@property(readonly) int responseCommand;
@property(readonly) int command;
@property(readonly) NSString *userAgentHeaderString;
@property(readonly) BOOL wantsUserAgentInHeaders;
@property(readonly) NSArray *requiredKeys;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (void)_cacheBody;
@property(readonly) NSDictionary *messageBodyUsingCache;
@property(readonly) BOOL isValidMessage;
@property(readonly) BOOL payloadCanBeLogged;
@property(readonly) double customRetryInterval;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property(readonly) BOOL wantsAPSRetries;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsBagKey;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsHTTPHeaders;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsCompressedBody;
@property(readonly) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

