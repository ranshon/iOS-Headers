/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class NSDictionary, NSString;

@interface GKAchievementDescriptionInternal : GKInternalRepresentation
{
    NSString *_identifier;
    NSString *_title;
    NSString *_achievedDescription;
    NSString *_unachievedDescription;
    unsigned int _maximumPoints;
    BOOL _hidden;
    NSDictionary *_icons;
}

+ (id)codedPropertyKeys;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) unsigned int maximumPoints; // @synthesize maximumPoints=_maximumPoints;
@property(retain, nonatomic) NSString *unachievedDescription; // @synthesize unachievedDescription=_unachievedDescription;
@property(retain, nonatomic) NSString *achievedDescription; // @synthesize achievedDescription=_achievedDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)dealloc;

@end
