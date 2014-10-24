//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSArray, SKUIViewReusePool;

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell
{
    struct UIEdgeInsets _contentInset;
    SKUIViewReusePool *_viewPool;
    NSArray *_views;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_views;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)existingViewForIndex:(int)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
