/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, WebView;

@interface WebInspectorWindowController : NSObject
{
    WebView *_inspectedWebView;
    struct WebInspectorFrontendClient *_frontendClient;
    struct WebInspectorClient *_inspectorClient;
    BOOL _destroyingInspectorView;
    WebView *_webView;
    NSString *_title;
}

- (id)init;
- (id)initWithInspectedWebView:(id)arg1;
- (void)dealloc;
- (void)setFrontendClient:(struct WebInspectorFrontendClient *)arg1;
- (void)setInspectorClient:(struct WebInspectorClient *)arg1;
- (struct WebInspectorClient *)inspectorClient;
- (void)destroyInspectorView:(_Bool)arg1;
- (void)showWindow:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) WebView *webView; // @synthesize webView=_webView;

@end

