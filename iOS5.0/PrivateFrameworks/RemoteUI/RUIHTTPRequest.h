/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    BOOL _invalidResponse;
    id _delegate;
}

+ (id)serviceUnavailableError;
+ (id)invalidResponseError;
+ (BOOL)anyRequestLoading;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_startedLoading;
- (void)_finishedLoading;
- (BOOL)_loggingEnabled;
- (void)loadRequest:(id)arg1;
- (void)cancel;
- (BOOL)isLoading;
- (void)loadStatusChanged;
- (id)request;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)willParseData;
- (void)didParseData;
- (void)parseData:(id)arg1;
- (void)failWithError:(id)arg1;
- (BOOL)receivedValidResponse:(id)arg1;

@end

