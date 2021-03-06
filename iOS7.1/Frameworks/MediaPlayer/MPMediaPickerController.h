//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MPRemoteMediaPickerController, NSString, UIPopoverController, _UIAsyncInvocation;

@interface MPMediaPickerController : UIViewController
{
    _UIAsyncInvocation *_cancelRequest;
    id _modalContext;
    MPRemoteMediaPickerController *_remoteViewController;
    BOOL _allowsPickingMultipleItems;
    BOOL _showsCloudItems;
    UIPopoverController *_containingPopover;
    unsigned int _mediaTypes;
    id <MPMediaPickerControllerDelegate> _delegate;
    NSString *_prompt;
}

+ (void)preheatMediaPicker;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) __weak id <MPMediaPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int mediaTypes; // @synthesize mediaTypes=_mediaTypes;
- (void).cxx_destruct;
- (id)_serviceViewControllerProxy;
- (void)_sendSettingsToService;
- (void)_resetRemoteViewController;
- (void)_requestRemoteViewController;
- (void)_forceDismissal;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_pickerDidCancel;
- (BOOL)_hasAddedRemoteView;
- (void)_addRemoteView;
@property(nonatomic) BOOL showsCloudItems;
@property(nonatomic) BOOL allowsPickingMultipleItems;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithMediaTypes:(unsigned int)arg1;
- (id)init;

@end

