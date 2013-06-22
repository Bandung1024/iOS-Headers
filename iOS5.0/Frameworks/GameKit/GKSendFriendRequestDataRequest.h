/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSNumber, NSString;

@interface GKSendFriendRequestDataRequest : GKDataRequest
{
    int _recipientType;
    id _recipients;
    NSString *_message;
    id _results;
    NSNumber *_rid;
}

@property(retain, nonatomic) NSNumber *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) id results; // @synthesize results=_results;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) id recipients; // @synthesize recipients=_recipients;
@property(nonatomic) int recipientType; // @synthesize recipientType=_recipientType;
- (void)handleResponseFromServer:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (void)processResults:(id)arg1 errorDict:(id)arg2 forKey:(id)arg3 recipients:(id)arg4;
- (id)request;
- (id)key;
- (void)dealloc;

@end

