//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface RadioManagedStation : NSManagedObject
{
}

+ (id)defaultPropertiesToFetch;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) BOOL virtualPlayEnabled;
@property(copy, nonatomic) NSArray *trackPlaybackDescriptorQueue;
@property(nonatomic) int subscriberCount;
- (id)streamKeyURL;
- (id)streamCertificateURL;
@property(retain, nonatomic) NSURL *streamURL;
@property(nonatomic) long long stationID;
@property(copy, nonatomic) NSString *stationHash;
@property(copy, nonatomic) NSString *stationDescription;
@property(nonatomic) int sortOrder;
@property(nonatomic) int songMixType;
@property(copy, nonatomic) NSArray *skipTimestamps;
@property(nonatomic) double skipInterval;
@property(copy, nonatomic) NSString *skipIdentifier;
@property(nonatomic) int skipFrequency;
@property(nonatomic) BOOL skipEnabled;
@property(copy, nonatomic) NSString *shareToken;
@property(nonatomic, getter=isSubscribed) BOOL subscribed;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
@property(nonatomic, getter=isSponsored) BOOL sponsored;
@property(nonatomic, getter=isSharingEnabled) BOOL sharingEnabled;
@property(nonatomic, getter=isShared) BOOL shared;
@property(retain, nonatomic) NSArray *seedTracks;
@property(nonatomic, getter=isPreviewOnly) BOOL previewOnly;
@property(nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement;
@property(nonatomic) long long persistentID;
@property(nonatomic) BOOL likesEnabled;
@property(nonatomic) BOOL isExplicit;
@property(nonatomic) unsigned int impressionThreshold;
@property(nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property(nonatomic, getter=isFeatured) BOOL featured;
@property(retain, nonatomic) NSArray *editableFields;
@property(nonatomic) BOOL editEnabled;
@property(copy, nonatomic) NSDictionary *debugDictionary;
@property(copy, nonatomic) NSString *coreSeedName;
@property(copy, nonatomic) NSData *artworkURLData;
@property(copy, nonatomic) NSURL *artworkURL;
@property(retain, nonatomic) NSData *adData;
@property(nonatomic) long long adamID;
@property(readonly, nonatomic, getter=isPreview) BOOL preview;
- (id)feedbackDictionaryRepresentation;
- (id)additionalReferencedTrackDescriptors;

// Remaining properties
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

