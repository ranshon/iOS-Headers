//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIItem, SKUIItemState, UIViewController;

@protocol SKUIChartsViewControllerDelegate <NSObject>

@optional
- (void)chartsViewController:(UIViewController *)arg1 willDisplayItem:(SKUIItem *)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (void)chartsViewController:(UIViewController *)arg1 didSelectItem:(SKUIItem *)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
- (SKUIItemState *)chartsViewController:(UIViewController *)arg1 didConfirmItemOfferForItem:(SKUIItem *)arg2 atIndex:(int)arg3 chartIndex:(int)arg4;
@end

