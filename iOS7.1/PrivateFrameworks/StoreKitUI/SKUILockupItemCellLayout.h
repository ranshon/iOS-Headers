//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, SKUILockupMetadataView, UILabel;

@interface SKUILockupItemCellLayout : SKUIItemCellLayout
{
    struct UIEdgeInsets _contentInsets;
    struct CGSize _imageBoundingSize;
    int _itemOfferStyle;
    UILabel *_itemOfferTextLabel;
    int _layoutStyle;
    int _lockupSize;
    SKUILockupMetadataView *_metadataView;
    int _verticalAlignment;
}

+ (float)heightForLockupStyle:(struct SKUILockupStyle)arg1 itemKind:(int)arg2 editorial:(id)arg3;
+ (float)heightForLockupComponent:(id)arg1;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) int lockupSize; // @synthesize lockupSize=_lockupSize;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) int itemOfferStyle; // @synthesize itemOfferStyle=_itemOfferStyle;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)_layoutVertical;
- (struct CGRect)_layoutIconImageView;
- (void)_layoutHorizontal;
- (id)_itemOfferTextLabel;
- (BOOL)_isItemOfferHidden;
- (void)setIconImage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)layoutForItemOfferChange;
@property(nonatomic) unsigned int visibleFields;
@property(nonatomic) float userRating;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *releaseDateString;
@property(nonatomic) int numberOfUserRatings;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *categoryString;
@property(copy, nonatomic) NSString *artistName;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)_initSKUILockupItemCellLayout;

@end

