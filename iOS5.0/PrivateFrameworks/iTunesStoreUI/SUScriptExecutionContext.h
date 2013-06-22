/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISStoreURLOperationDelegate-Protocol.h"
#import <iTunesStoreUI/SUWebViewDelegate-Protocol.h>

@class ISStoreURLOperation, SUWebView;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate>
{
    ISStoreURLOperation *_loadOperation;
    BOOL _sourceIsTrusted;
    SUWebView *_webView;
}

@property(nonatomic) BOOL sourceIsTrusted; // @synthesize sourceIsTrusted=_sourceIsTrusted;
- (id)_webView;
- (id)_newLoadOperation;
- (void)_cancelLoadOperation;
- (id)parentViewControllerForWebView:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
@property(readonly, nonatomic) id windowScriptObject;
@property(readonly, nonatomic) struct OpaqueJSContext *globalExecutionContext;
- (void)evaluateScriptWithURLBagKey:(id)arg1;
- (void)evaluateScriptAtURL:(id)arg1;
- (void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (BOOL)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)dealloc;

@end

