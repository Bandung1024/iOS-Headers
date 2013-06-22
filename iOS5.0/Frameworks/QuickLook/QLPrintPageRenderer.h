/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPrintPageRenderer.h"

@class NSString, NSURLRequest, QLPreviewConverter, UIWebBrowserView;

@interface QLPrintPageRenderer : UIPrintPageRenderer
{
    UIWebBrowserView *_browserView;
    NSURLRequest *_request;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
}

+ (BOOL)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (void)dealloc;
- (void)_waitForPreview;
@property(retain) QLPreviewConverter *previewConverter; // @synthesize previewConverter=_previewConverter;

@end

