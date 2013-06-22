/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray, NSMutableSet, SBIcon, SBIconListModel;

@interface SBIconListView : UIView
{
    SBIconListModel *_model;
    int _orientation;
    SBIcon *_bouncedIcon;
    NSMutableArray *_removedIcons;
    NSMutableArray *_iconContainerMatrix;
    unsigned int _scattered:1;
    unsigned int _needsLayout:1;
    unsigned int _rotating:1;
    unsigned int _onWallpaper:1;
    UIView *_fadeView;
    BOOL _iconsAreElsewhere;
    BOOL _recyclesIconViewsWhenNotShowing;
    NSMutableSet *_notShownIconViews;
    NSMutableArray *_rasterizedIcons;
    BOOL _showingCloseBoxes;
}

+ (unsigned int)iconRowsForInterfaceOrientation:(int)arg1;
+ (unsigned int)maxVisibleIconRowsInterfaceOrientation:(int)arg1;
+ (unsigned int)iconColumnsForInterfaceOrientation:(int)arg1;
+ (unsigned int)maxIcons;
- (Class)modelClass;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setModel:(id)arg1;
- (id)model;
- (unsigned int)iconRowsForCurrentOrientation;
- (unsigned int)iconColumnsForCurrentOrientation;
- (unsigned int)iconsInRowForSpacingCalculation;
- (void)setOrientation:(int)arg1;
- (void)setDisplaysOnWallpaper:(BOOL)arg1;
- (unsigned int)indexForX:(unsigned int)arg1 Y:(unsigned int)arg2 forOrientation:(int)arg3;
- (void)getX:(unsigned int *)arg1 Y:(unsigned int *)arg2 forIndex:(unsigned int)arg3 forOrientation:(int)arg4;
- (unsigned int)rowForIcon:(id)arg1;
- (BOOL)compactIcons:(BOOL)arg1;
- (id)icons;
- (id)visibleIcons;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (unsigned int)firstFreeSlotIndex;
- (unsigned int)firstFreeSlotIndexForType:(int)arg1;
- (unsigned int)firstFreeSlotOrLastSlotIndex;
- (unsigned int)firstFreeSlotOrLastSlotIndexForType:(int)arg1;
- (void)showIconAnimationDidStop:(id)arg1 didFinish:(id)arg2 iconView:(id)arg3;
- (void)_popIconView:(id)arg1;
- (void)_noteNewIconInModel:(id)arg1;
- (id)placeIcon:(id)arg1 atIndex:(unsigned int)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)insertIcon:(id)arg1 atIndex:(unsigned int)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)insertIcon:(id)arg1 atIndex:(unsigned int)arg2 moveNow:(BOOL)arg3;
- (id)removedIcons;
- (void)removeIconAtIndex:(unsigned int)arg1;
- (void)removeIcon:(id)arg1;
- (BOOL)isScattered;
- (void)setAlphaForAllIcons:(float)arg1;
- (void)scatterAnimationDidStop;
- (void)scatterWithDuration:(double)arg1 startTime:(double)arg2;
- (void)unscatterAnimationDidStop;
- (void)unscatterWithDuration:(double)arg1 startTime:(double)arg2;
- (void)setShouldRasterizeAllIcons:(BOOL)arg1;
- (void)removeAllIconAnimations;
- (struct CGSize)defaultIconSize;
- (struct CGPoint)originForIconAtIndex:(int)arg1;
- (struct CGPoint)originForIcon:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIconsAreElsewhere:(BOOL)arg1;
- (BOOL)iconsAreElsewhere;
- (void)setRecyclesIconViewsWhenNotShowing:(BOOL)arg1;
- (BOOL)recyclesIconViewsWhenNotShowing;
- (void)setIconsNeedLayout;
- (void)layoutIconsNow;
- (struct CATransform3D)_transformForIconAtIndex:(unsigned int)arg1 inOrientation:(int)arg2;
- (float)layoutIconsIfNeeded:(float)arg1 domino:(BOOL)arg2;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned int *)arg2;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned int *)arg2 proposedOrder:(int *)arg3 grabbedIcon:(id)arg4;
- (void)showIconImagesFromColumn:(int)arg1 toColumn:(int)arg2 totalColumns:(int)arg3 visibleIconsJitter:(BOOL)arg4;
- (void)stopJittering;
- (void)startJittering;
- (void)showCloseBoxes;
- (void)hideCloseBoxes;
- (void)makeIconsPerformSelector:(SEL)arg1;
- (void)makeIconViewsPerformSelector:(SEL)arg1;
- (void)makeIconsPerformBlock:(id)arg1;
- (void)makeIconViewsPerformBlock:(id)arg1;
- (BOOL)isDock;
- (void)setBouncedIcon:(id)arg1;
- (id)bouncedIcon;
- (float)topIconInset;
- (float)bottomIconInset;
- (float)sideIconInset;
- (float)horizontalBumpForColumn:(unsigned int)arg1;
- (float)horizontalIconPadding;
- (float)verticalIconPadding;
- (struct CGPoint)originForIconAtX:(unsigned int)arg1 Y:(unsigned int)arg2;
- (unsigned int)columnAtPoint:(struct CGPoint)arg1;
- (unsigned int)rowAtPoint:(struct CGPoint)arg1;
- (unsigned int)_preRotationFirstVisibleRow;
- (unsigned int)_postRotationFirstVisibleRow;
- (unsigned int)_rotationReferenceRow;
- (id)rotationIconContainers;
- (Class)iconRotationContainerClass;
- (void)prepareToRotateToInterfaceOrientation:(int)arg1;
- (void)performRotationWithDuration:(double)arg1;
- (void)cleanupAfterRotation;

@end

