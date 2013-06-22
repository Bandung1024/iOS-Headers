/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSMutableArray, SUItem, SUStructuredPage;

@interface SUStructuredPageTableDataSource : SUTableDataSource
{
    SUItem *_activeLoadMoreItem;
    NSMutableArray *_cachedHeaderViews;
    float _offerButtonWidth;
    SUStructuredPage *_structuredPage;
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) SUStructuredPage *structuredPage; // @synthesize structuredPage=_structuredPage;
@property(retain, nonatomic) SUItem *activeLoadMoreItem; // @synthesize activeLoadMoreItem=_activeLoadMoreItem;
- (BOOL)_shouldShowItemOfferButtonForItem:(id)arg1;
- (id)_itemOfferButtonForCell:(id)arg1 item:(id)arg2;
- (void)_configureLoadMoreCell:(id)arg1 forItem:(id)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (int)tableViewStyle;
- (id)sectionIndexTitles;
- (int)sectionIndexForIndexTitle:(id)arg1 atIndex:(int)arg2;
- (void)reloadData;
- (void)reloadCellContexts;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (id)headerViewForSection:(int)arg1;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (id)newHeaderViewForSection:(int)arg1;
- (id)cellConfigurationForIndex:(int)arg1 item:(id)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id *)arg2;
- (BOOL)canShowItemOfferButtonForItem:(id)arg1;
- (void)dealloc;

@end

