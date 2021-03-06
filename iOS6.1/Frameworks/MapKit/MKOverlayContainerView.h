/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet;

@interface MKOverlayContainerView : UIView
{
    NSMutableSet *_overlaySet;
    NSMutableArray *_overlays;
    NSMapTable *_overlayToView;
    NSMutableArray *_views;
    NSMutableArray *_viewClusters;
    id <MKOverlayContainerViewDelegate> _delegate;
    float _mapZoomScale;
}

@property(nonatomic) float mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
@property(nonatomic) id <MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_coalesceAdjacentClusters;
- (void)_insertOverlayView:(id)arg1 forOverlay:(id)arg2 atIndex:(int)arg3;
- (void)_removeOverlayView:(id)arg1 forOverlay:(id)arg2 coalesce:(BOOL)arg3;
- (id)viewForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)swapViewsWithOverlay:(id)arg1 andOverlay:(id)arg2;
- (void)_addInternalOverlay:(id)arg1 withView:(id)arg2;
- (void)addAndRemoveOverlayViews;
- (id)_considerAddingOverlayView:(id)arg1 inAddRect:(CDStruct_90e2a262)arg2;
- (void)_configureAndAddView:(id)arg1 forOverlay:(id)arg2;
- (CDStruct_90e2a262)_mapRectWithFractionOfVisible:(double)arg1;
- (int)_viewIndexForOverlayView:(id)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setLevelCrossFade:(BOOL)arg1;
- (void)visibleRectChanged;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

