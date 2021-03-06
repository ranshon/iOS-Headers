/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class MPUMarqueeView, NSDictionary, NSString, UIImage, UIImageView, UILabel;

@interface MPUNowPlayingTitlesView : UIView
{
    UILabel *_detailLabel;
    MPUMarqueeView *_detailMarqueeView;
    UIImageView *_explicitImageView;
    _Bool _needsLabelUpdate;
    UILabel *_titleLabel;
    MPUMarqueeView *_titleMarqueeView;
    _Bool _explicit;
    long long _style;
    NSDictionary *_titleTextAttributes;
    NSDictionary *_detailTextAttributes;
    NSString *_albumText;
    NSString *_artistText;
    double _textMargin;
    NSString *_titleText;
    UIImage *_explicitImage;
}

+ (Class)labelClass;
@property(retain, nonatomic) UIImage *explicitImage; // @synthesize explicitImage=_explicitImage;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) double textMargin; // @synthesize textMargin=_textMargin;
@property(nonatomic, getter=isExplicit) _Bool explicit; // @synthesize explicit=_explicit;
@property(copy, nonatomic) NSString *artistText; // @synthesize artistText=_artistText;
@property(copy, nonatomic) NSString *albumText; // @synthesize albumText=_albumText;
@property(retain, nonatomic) NSDictionary *detailTextAttributes; // @synthesize detailTextAttributes=_detailTextAttributes;
@property(retain, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateAttributedTitleLabel;
- (id)_detailLabel;
- (id)_titleLabel;
- (void)resetMarqueePositions;
@property(readonly, nonatomic) double titleBaselineOffsetFromBottom;
- (void)setMarqueeEnabled:(_Bool)arg1 allowCurrentMarqueeToFinish:(_Bool)arg2;
@property(nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end

