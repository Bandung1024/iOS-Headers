/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, UIImage;

@interface SBIcon : NSObject
{
    NSHashTable *_observers;
    id _badgeNumberOrString;
    unsigned int _isRevealable:1;
    unsigned int _uninstalled:1;
    UIImage *_cachedIconImages[13];
    id <SBIconDelegate> _delegate;
}

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)hasObserver:(id)arg1;
@property(readonly, nonatomic) BOOL shouldWarmUp;
- (int)iconFormatForLocation:(int)arg1;
- (id)iconOverlayImageForLocation:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)representation;
- (BOOL)matchesRepresentation:(id)arg1;
- (void)localeChanged;
- (void)setIsRevealable:(BOOL)arg1;
- (BOOL)isRevealable;
- (id)displayName;
- (BOOL)canEllipsizeLabel;
- (int)localizedCompareDisplayNames:(id)arg1;
- (BOOL)matchesEntity:(id)arg1;
- (id)tags;
- (BOOL)launchEnabled;
- (id)generateIconImage:(int)arg1;
- (BOOL)shouldCacheImageForFormat:(int)arg1;
- (id)getStandardIconImageForLocation:(int)arg1;
- (id)getIconImage:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (void)purgeCachedImages;
- (void)reloadIconImage;
- (void)reloadIconImagePurgingImageCache:(BOOL)arg1;
- (int)badgeValue;
- (id)badgeNumberOrString;
- (void)noteBadgeDidChange;
- (void)setBadge:(id)arg1;
- (id)automationID;
- (void)launch;
- (void)launchFromViewSwitcher;
- (BOOL)allowsUninstall;
- (void)completeUninstall;
- (void)setUninstalled;
- (BOOL)isUninstalled;
- (id)uninstallAlertTitle;
- (id)uninstallAlertTitleForAppWithDocumentsInCloud;
- (id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
- (id)uninstallAlertBody;
- (id)uninstallAlertBodyForAppWithDocumentsInCloud;
- (id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertCancelTitle;
- (id)folderTitleOptions;
- (id)folderFallbackTitle;
@property(nonatomic) id <SBIconDelegate> delegate; // @synthesize delegate=_delegate;

@end

